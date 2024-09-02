package ativ2;
import java.util.ArrayList;
import java.util.List;

public class Livraria {
    private List<Livro> livros;

    public Livraria() {
        livros = new ArrayList<>();
    }

    public void inserirLivro(Livro livro) {
        livros.add(livro);
        System.out.println("Livro inserido com sucesso!");
    }

    public void listarLivros() {
        if (livros.isEmpty()) {
            System.out.println("Nenhum livro disponível na livraria.");
        } else {
            for (Livro livro : livros) {
                livro.exibirDetalhes();
                System.out.println("--------------------");
            }
        }
    }

    public void listarDisponiveis() {
        boolean temDisponiveis = false;
        for (Livro livro : livros) {
            if (livro.isDisponivel()) {
                livro.exibirDetalhes();
                System.out.println("--------------------");
                temDisponiveis = true;
            }
        }
        if (!temDisponiveis) {
            System.out.println("Nenhum livro disponível para empréstimo.");
        }
    }
}

