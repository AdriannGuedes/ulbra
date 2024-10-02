package Filas.FilaImpressao;

import java.util.LinkedList;
import java.util.Queue;

public class FilaImpressao {
    public static void main(String[] args) {
        Queue<Documento> fila = new LinkedList<>();
        fila.add(new Documento("Doc1", 10));
        fila.add(new Documento("Doc2", 5));
        fila.add(new Documento("Doc3", 15));
        fila.add(new Documento("Doc4", 3));

        int totalPaginas = 0;
        Documento maiorDoc = null;
        int contImpressao = 0;

        while (!fila.isEmpty()) {
            Documento docAtual = fila.poll();
            System.out.println("Imprimindo: " + docAtual.nome + " - Páginas: " + docAtual.paginas);
            totalPaginas += docAtual.paginas;
            contImpressao++;

            if (maiorDoc == null || docAtual.paginas > maiorDoc.paginas) {
                maiorDoc = docAtual;
            }

            if (contImpressao % 2 == 0 && !fila.isEmpty()) {
                Documento proxDoc = fila.peek();
                System.out.println("Próximo documento a ser impresso: " + proxDoc.nome + " - Páginas: " + proxDoc.paginas);
            }
        }

        System.out.println("Documento com maior número de páginas: " + maiorDoc.nome + " - " + maiorDoc.paginas + " páginas");
        System.out.println("Total de páginas impressas: " + totalPaginas);
    }
}
