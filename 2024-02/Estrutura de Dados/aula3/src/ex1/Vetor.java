package ex1;

import java.util.Arrays;

public class Vetor {
    private int[][] matriz;

    // Construtor que recebe uma matriz bidimensional de inteiros
    public Vetor(int[][] matriz) {
        this.matriz = matriz;
    }

    // Método que retorna o maior valor presente na matriz
    public int obterMaiorElemento() {
        int maiorValor = Integer.MIN_VALUE;

        for (int[] linha : matriz) {
            for (int valor : linha) {
                if (valor > maiorValor) {
                    maiorValor = valor;
                }
            }
        }

        return maiorValor;
    }

    // Método que retorna o menor valor presente na matriz
    public int obterMenorElemento() {
        int menorValor = Integer.MAX_VALUE;

        for (int[] linha : matriz) {
            for (int valor : linha) {
                if (valor < menorValor) {
                    menorValor = valor;
                }
            }
        }

        return menorValor;
    }

    // Método que calcula e retorna a média aritmética dos elementos da matriz
    public double calcularMediaDosElementos() {
        int somaTotal = calcularSomaTotal();
        int totalElementos = matriz.length * matriz[0].length;
        return (double) somaTotal / totalElementos;
    }

    // Método que retorna um array contendo a soma dos elementos de cada linha da matriz
    public int[] somarElementosPorLinha() {
        int[] somaPorLinha = new int[matriz.length];

        for (int i = 0; i < matriz.length; i++) {
            int soma = 0;
            for (int j = 0; j < matriz[i].length; j++) {
                soma += matriz[i][j];
            }
            somaPorLinha[i] = soma;
        }

        return somaPorLinha;
    }

    // Método que retorna um array contendo a soma dos elementos de cada coluna da matriz
    public int[] somarElementosPorColuna() {
        int colunas = matriz[0].length;
        int[] somaPorColuna = new int[colunas];

        for (int i = 0; i < colunas; i++) {
            int soma = 0;
            for (int j = 0; j < matriz.length; j++) {
                soma += matriz[j][i];
            }
            somaPorColuna[i] = soma;
        }

        return somaPorColuna;
    }

    // Método que calcula e retorna a soma total de todos os elementos da matriz
    public int calcularSomaTotal() {
        int somaTotal = 0;

        for (int[] linha : matriz) {
            for (int valor : linha) {
                somaTotal += valor;
            }
        }

        return somaTotal;
    }

    // Método que recebe um valor como parâmetro e retorna o número de vezes que esse valor aparece na matriz
    public int contarOcorrenciasDeValor(int valorBuscado) {
        int contador = 0;

        for (int[] linha : matriz) {
            for (int valor : linha) {
                if (valor == valorBuscado) {
                    contador++;
                }
            }
        }

        return contador;
    }


}
