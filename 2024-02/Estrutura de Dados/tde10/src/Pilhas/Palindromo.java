package Pilhas;

import java.util.Scanner;

public class Palindromo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Digite a sequência: ");
        String sequencia = sc.nextLine();

        boolean isPalindromo = true;
        int len = sequencia.length();

        for (int i = 0; i < len / 2; i++) {
            if (sequencia.charAt(i) != sequencia.charAt(len - 1 - i)) {
                isPalindromo = false;
                break;
            }
        }

        if (isPalindromo) {
            System.out.println(sequencia + " - sim");
        } else {
            System.out.println(sequencia + " - não");
        }

        sc.close();
    }
}
