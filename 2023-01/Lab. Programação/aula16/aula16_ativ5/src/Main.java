public class Main {
    public static void main(String[] args) {
        int[] numerosImpares = new int[10];

        for (int i = 0, numero = 1; i < 10; i++, numero += 2) {
            numerosImpares[i] = numero;
        }

        System.out.println("Números ímpares:");
        for (int i = 0; i < numerosImpares.length; i++) {
            System.out.println(numerosImpares[i]);
        }
    }
}