import java.util.Scanner;
public class CargoFast {
    public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    Grafo grafo = new Grafo();

    // Adicionar cidades e estradas
        grafo.adicionarCidade("A");
        grafo.adicionarCidade("B");
        grafo.adicionarCidade("C");
        grafo.adicionarCidade("D");
        grafo.adicionarCidade("E");

        grafo.adicionarEstrada("A", "B", 10, 5);
        grafo.adicionarEstrada("B", "C", 20, 15);
        grafo.adicionarEstrada("C", "E", 25, 10);
        grafo.adicionarEstrada("B", "D", 30, 20);
        grafo.adicionarEstrada("A", "E", 50, 40);

    // Bloquear estrada
        grafo.bloquearEstrada("B", "C");

        System.out.print("Digite a cidade de partida: ");
    String inicio = scanner.nextLine();
        System.out.print("Digite a cidade de destino: ");
    String fim = scanner.nextLine();
        System.out.print("Digite o custo máximo permitido: ");
    int custoMaximo = scanner.nextInt();

    // Encontrar rota ótima
    String rotaOtima = grafo.encontrarRotaOtima(inicio, fim, custoMaximo);
        System.out.println("Rota ótima: " + rotaOtima);

    // Encontrar rota alternativa
    String rotaAlternativa = grafo.encontrarRotaAlternativa(inicio, fim);
        System.out.println("Rota alternativa: " + rotaAlternativa);

        scanner.close();
}
}
