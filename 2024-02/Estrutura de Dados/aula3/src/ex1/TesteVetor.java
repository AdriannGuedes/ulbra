package ex1;

public class TesteVetor {
    public static void main(String[] args) {
        int[][] matrizExemplo = {
                {3, 5, 7},
                {2, 8, 1},
                {4, 9, 6}
        };

        Vetor handler = new Vetor(matrizExemplo);

        System.out.println("Maior valor na matriz: " + handler.obterMaiorElemento()); // Saída: 9
        System.out.println("Menor valor na matriz: " + handler.obterMenorElemento()); // Saída: 1
        System.out.println("Média dos elementos: " + handler.calcularMediaDosElementos()); // Saída: 5.0
        System.out.println("Soma dos elementos por linha: " + java.util.Arrays.toString(handler.somarElementosPorLinha())); // Saída: [15, 11, 19]
        System.out.println("Soma dos elementos por coluna: " + java.util.Arrays.toString(handler.somarElementosPorColuna())); // Saída: [9, 22, 14]
        System.out.println("Soma total dos elementos: " + handler.calcularSomaTotal()); // Saída: 45
        System.out.println("Ocorrências do valor 8: " + handler.contarOcorrenciasDeValor(8)); // Saída: 1
    }
 }

