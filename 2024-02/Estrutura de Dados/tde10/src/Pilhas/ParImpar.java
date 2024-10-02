package Pilhas;

import java.util.Scanner;
import java.util.Stack;

public class ParImpar {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Stack<Integer> par = new Stack<>();
        Stack<Integer> impar = new Stack<>();

        for (int i = 0; i < 10; i++) {
            System.out.print("Digite um número: ");
            int num = sc.nextInt();

            if (num == 0) {
                if (!par.isEmpty()) {
                    System.out.println("Desempilhando da pilha de pares: " + par.pop());
                } else {
                    System.out.println("Erro: pilha de pares vazia!");
                }

                if (!impar.isEmpty()) {
                    System.out.println("Desempilhando da pilha de ímpares: " + impar.pop());
                } else {
                    System.out.println("Erro: pilha de ímpares vazia!");
                }
            } else if (num % 2 == 0) {
                par.push(num);
            } else {
                impar.push(num);
            }
        }

        System.out.println("Desempilhando todos os pares:");
        while (!par.isEmpty()) {
            System.out.println(par.pop());
        }

        System.out.println("Desempilhando todos os ímpares:");
        while (!impar.isEmpty()) {
            System.out.println(impar.pop());
        }

        sc.close();
    }
}
