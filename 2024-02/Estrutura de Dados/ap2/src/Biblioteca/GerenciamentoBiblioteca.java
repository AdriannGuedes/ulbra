package Biblioteca;
import java.util.Scanner;

public class GerenciamentoBiblioteca {
    public static void main(String[] args) {
        ListaDuplamenteLigada listaLivros = new ListaDuplamenteLigada();
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.println("\n1. Adicionar Livro no Início");
            System.out.println("2. Adicionar Livro no Fim");
            System.out.println("3. Remover Primeiro Livro");
            System.out.println("4. Remover Último Livro");
            System.out.println("5. Buscar Livro por ID");
            System.out.println("6. Imprimir Livros na Ordem Original");
            System.out.println("7. Imprimir Livros na Ordem Reversa");
            System.out.println("8. Sair");
            System.out.print("Escolha uma opção: ");

            int opcao = scanner.nextInt();
            scanner.nextLine();  // Limpa o buffer de entrada

            switch (opcao) {
                case 1:
                    System.out.print("Digite o ID do livro: ");
                    int idInicio = scanner.nextInt();
                    scanner.nextLine();  // Limpa o buffer
                    System.out.print("Digite o título do livro: ");
                    String tituloInicio = scanner.nextLine();
                    System.out.print("Digite o autor do livro: ");
                    String autorInicio = scanner.nextLine();
                    listaLivros.adicionarNoInicio(new Livro(idInicio, tituloInicio, autorInicio));
                    break;

                case 2:
                    System.out.print("Digite o ID do livro: ");
                    int idFim = scanner.nextInt();
                    scanner.nextLine();  // Limpa o buffer
                    System.out.print("Digite o título do livro: ");
                    String tituloFim = scanner.nextLine();
                    System.out.print("Digite o autor do livro: ");
                    String autorFim = scanner.nextLine();
                    listaLivros.adicionarNoFim(new Livro(idFim, tituloFim, autorFim));
                    break;

                case 3:
                    Livro removidoInicio = listaLivros.removerDoInicio();
                    if (removidoInicio != null) {
                        System.out.println("Livro removido: " + removidoInicio);
                    }
                    break;

                case 4:
                    Livro removidoFim = listaLivros.removerDoFim();
                    if (removidoFim != null) {
                        System.out.println("Livro removido: " + removidoFim);
                    }
                    break;

                case 5:
                    System.out.print("Digite o ID do livro para buscar: ");
                    int idBusca = scanner.nextInt();
                    Livro livroEncontrado = listaLivros.buscarPorID(idBusca);
                    if (livroEncontrado != null) {
                        System.out.println("Livro encontrado: " + livroEncontrado);
                    } else {
                        System.out.println("Livro com ID " + idBusca + " não encontrado.");
                    }
                    break;

                case 6:
                    System.out.println("Livros na Ordem Original:");
                    listaLivros.imprimirOrdemOriginal();
                    break;

                case 7:
                    System.out.println("Livros na Ordem Reversa:");
                    listaLivros.imprimirOrdemReversa();
                    break;

                case 8:
                    System.out.println("Saindo...");
                    scanner.close();
                    return;

                default:
                    System.out.println("Opção inválida.");
            }
        }
    }
}
