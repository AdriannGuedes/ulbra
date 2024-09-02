import java.util.Scanner;

class Calculadora {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Solicita os números ao usuário
        System.out.print("Insira o primeiro número: ");
        double num1 = scanner.nextDouble();

        System.out.print("Insira o segundo número: ");
        double num2 = scanner.nextDouble();

        // Solicita a operação desejada
        System.out.println("Escolha uma operação: ");
        System.out.println("1 - Adição");
        System.out.println("2 - Subtração");
        System.out.println("3 - Multiplicação");
        System.out.println("4 - Divisão");
        int operacao = scanner.nextInt();

        double resultado = 0;
        boolean operacaoValida = true;

        // Executa a operação escolhida
        switch (operacao) {
            case 1:
                resultado = num1 + num2;
                break;
            case 2:
                resultado = num1 - num2;
                break;
            case 3:
                resultado = num1 * num2;
                break;
            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                } else {
                    System.out.println("Erro: Divisão por zero não é permitida.");
                    operacaoValida = false;
                }
                break;
            default:
                System.out.println("Erro: Operação inválida.");
                operacaoValida = false;
        }

        // Exibe o resultado se a operação for válida
        if (operacaoValida) {
            System.out.println("O resultado é: " + resultado);
        }

        scanner.close();
    }
}