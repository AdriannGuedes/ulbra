package Pilhas;

import java.util.Scanner;
import java.util.Stack;

public class VerificacaoParenteses {
    public static boolean verificarBalanceamento(String expressao) {
        Stack<Character> pilha = new Stack<>();

        for (char c : expressao.toCharArray()) {
            if (c == '(') {
                pilha.push(c);
            } else if (c == ')') {
                if (pilha.isEmpty()) {
                    return false;
                }
                pilha.pop();
            }
        }

        return pilha.isEmpty();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Digite a expressão matemática: ");
        String expressao = sc.nextLine();

        if (verificarBalanceamento(expressao)) {
            System.out.println("Balanceado");
        } else {
            System.out.println("Não balanceado");
        }

        sc.close();
    }
}
