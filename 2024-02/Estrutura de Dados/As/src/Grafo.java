import java.util.*;

public class Grafo {
    private final Map<String, Map<String, Estrada>> grafo = new HashMap<>();

    // Adicionar uma cidade ao grafo
    public void adicionarCidade(String cidade) {
        grafo.putIfAbsent(cidade, new HashMap<>());
    }

    // Adicionar uma estrada entre duas cidades
    public void adicionarEstrada(String origem, String destino, int distancia, int custo) {
        grafo.get(origem).put(destino, new Estrada(distancia, custo));
        grafo.get(destino).put(origem, new Estrada(distancia, custo)); // Grafo não direcionado
    }

    // Bloquear uma estrada
    public void bloquearEstrada(String origem, String destino) {
        if (grafo.containsKey(origem)) grafo.get(origem).remove(destino);
        if (grafo.containsKey(destino)) grafo.get(destino).remove(origem);
    }

    // Encontrar a rota ótima com limite de custo
    public String encontrarRotaOtima(String inicio, String fim, int custoMaximo) {
        PriorityQueue<No> fila = new PriorityQueue<>();
        Map<String, Integer> distancias = new HashMap<>();
        Map<String, Integer> custos = new HashMap<>();
        Map<String, String> anteriores = new HashMap<>();

        for (String cidade : grafo.keySet()) {
            distancias.put(cidade, Integer.MAX_VALUE);
            custos.put(cidade, Integer.MAX_VALUE);
        }

        distancias.put(inicio, 0);
        custos.put(inicio, 0);
        fila.add(new No(inicio, 0, 0));

        while (!fila.isEmpty()) {
            No atual = fila.poll();

            if (atual.cidade.equals(fim)) {
                return reconstruirCaminho(anteriores, inicio, fim);
            }

            for (var entrada : grafo.getOrDefault(atual.cidade, Map.of()).entrySet()) {
                String vizinho = entrada.getKey();
                Estrada estrada = entrada.getValue();

                int novaDistancia = atual.distancia + estrada.distancia;
                int novoCusto = atual.custo + estrada.custo;

                if (novoCusto <= custoMaximo && novaDistancia < distancias.get(vizinho)) {
                    distancias.put(vizinho, novaDistancia);
                    custos.put(vizinho, novoCusto);
                    anteriores.put(vizinho, atual.cidade);
                    fila.add(new No(vizinho, novaDistancia, novoCusto));
                }
            }
        }

        return "Nenhuma rota viável dentro do limite de custo.";
    }

    // Encontrar rota alternativa com menor distância
    public String encontrarRotaAlternativa(String inicio, String fim) {
        PriorityQueue<No> fila = new PriorityQueue<>();
        Map<String, Integer> distancias = new HashMap<>();
        Map<String, String> anteriores = new HashMap<>();

        for (String cidade : grafo.keySet()) {
            distancias.put(cidade, Integer.MAX_VALUE);
        }

        distancias.put(inicio, 0);
        fila.add(new No(inicio, 0, 0));

        while (!fila.isEmpty()) {
            No atual = fila.poll();

            if (atual.cidade.equals(fim)) {
                return reconstruirCaminho(anteriores, inicio, fim);
            }

            for (var entrada : grafo.getOrDefault(atual.cidade, Map.of()).entrySet()) {
                String vizinho = entrada.getKey();
                Estrada estrada = entrada.getValue();

                int novaDistancia = atual.distancia + estrada.distancia;

                if (novaDistancia < distancias.get(vizinho)) {
                    distancias.put(vizinho, novaDistancia);
                    anteriores.put(vizinho, atual.cidade);
                    fila.add(new No(vizinho, novaDistancia, 0));
                }
            }
        }

        return "Nenhuma rota alternativa disponível.";
    }

    // Reconstruir o caminho a partir do mapa de predecessores
    private String reconstruirCaminho(Map<String, String> anteriores, String inicio, String fim) {
        List<String> caminho = new ArrayList<>();
        for (String atual = fim; atual != null; atual = anteriores.get(atual)) {
            caminho.add(atual);
        }
        Collections.reverse(caminho);
        return String.join(" -> ", caminho);
    }
}
