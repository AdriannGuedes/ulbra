import java.util.Scanner;
public class GerenciamentoPedidos {
    public static void main(String[] args) {
        Fila fila = new Fila();
        Pilha pilha = new Pilha();
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.println("\n1. Adicionar Novo Pedido");
            System.out.println("2. Atender Pedido");
            System.out.println("3. Cancelar Pedido");
            System.out.println("4. Restaurar Pedido");
            System.out.println("5. Imprimir Pedidos Pendentes");
            System.out.println("6. Imprimir Pedidos Cancelados");
            System.out.println("7. Sair");
            System.out.print("Escolha uma opção: ");

            int opcao = scanner.nextInt();
            scanner.nextLine();  // Limpa o buffer de entrada

            switch (opcao) {
                case 1:
                    System.out.print("Digite o ID do pedido: ");
                    int id = scanner.nextInt();
                    scanner.nextLine();  // Limpa o buffer
                    System.out.print("Digite a descrição do pedido: ");
                    String descricao = scanner.nextLine();
                    fila.AdicionaAoFinal(new Pedido(id, descricao));
                    break;

                case 2:
                    Pedido atendido = fila.RemoveAntigo();
                    if (atendido != null) {
                        System.out.println("Pedido atendido: " + atendido);
                    }
                    break;

                case 3:
                    Pedido cancelado = fila.RemoveAntigo();
                    if (cancelado != null) {
                        pilha.AdicionaAoTopo(cancelado);
                        System.out.println("Pedido cancelado: " + cancelado);
                    }
                    break;

                case 4:
                    Pedido restaurado = pilha.RemoveMaisRecente();
                    if (restaurado != null) {
                        fila.AdicionaAoFinal(restaurado);
                        System.out.println("Pedido restaurado: " + restaurado);
                    }
                    break;

                case 5:
                    System.out.println("Pedidos Pendentes:");
                    fila.ImprimePendentes();
                    break;

                case 6:
                    System.out.println("Pedidos Cancelados:");
                    pilha.ImprimePedidosCancelados();
                    break;

                case 7:
                    System.out.println("Saindo...");
                    scanner.close();
                    return;

                default:
                    System.out.println("Opção inválida.");
            }
        }

    }
}