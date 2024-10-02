package Filas.FilaAtendimento;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class FilaAtendimento {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Queue<Cliente> fila = new LinkedList<>();
        int totalClientes = 0;
        int totalTempo = 0;

        // Adicionando clientes à fila
        fila.add(new Cliente("Ana", 5));
        fila.add(new Cliente("Pedro", 3));
        fila.add(new Cliente("João", 8));

        // Processando a fila
        while (!fila.isEmpty()) {
            Cliente clienteAtual = fila.poll();
            System.out.println("Atendendo: " + clienteAtual.nome + " - Tempo: " + clienteAtual.tempoAtendimento + " minutos");
            totalClientes++;
            totalTempo += clienteAtual.tempoAtendimento;
        }

        System.out.println("Total de clientes atendidos: " + totalClientes);
        System.out.println("Total de tempo gasto: " + totalTempo + " minutos");

        sc.close();
    }
}
