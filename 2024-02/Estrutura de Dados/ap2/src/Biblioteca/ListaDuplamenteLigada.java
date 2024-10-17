package Biblioteca;

public class ListaDuplamenteLigada {
    private NodoDuplo inicio;
    private NodoDuplo fim;

    public ListaDuplamenteLigada() {
        this.inicio = null;
        this.fim = null;
    }

    // Adiciona um livro no início da lista
    public void adicionarNoInicio(Livro livro) {
        NodoDuplo novoNodo = new NodoDuplo(livro);
        if (inicio == null) {
            inicio = fim = novoNodo;
        } else {
            novoNodo.proximo = inicio;
            inicio.anterior = novoNodo;
            inicio = novoNodo;
        }
    }

    // Adiciona um livro no fim da lista
    public void adicionarNoFim(Livro livro) {
        NodoDuplo novoNodo = new NodoDuplo(livro);
        if (fim == null) {
            inicio = fim = novoNodo;
        } else {
            fim.proximo = novoNodo;
            novoNodo.anterior = fim;
            fim = novoNodo;
        }
    }

    // Remove o primeiro livro da lista
    public Livro removerDoInicio() {
        if (inicio == null) {
            System.out.println("A lista está vazia. Nenhum livro para remover.");
            return null;
        }
        Livro livroRemovido = inicio.livro;
        inicio = inicio.proximo;
        if (inicio != null) {
            inicio.anterior = null;
        } else {
            fim = null;
        }
        return livroRemovido;
    }

    // Remove o último livro da lista
    public Livro removerDoFim() {
        if (fim == null) {
            System.out.println("A lista está vazia. Nenhum livro para remover.");
            return null;
        }
        Livro livroRemovido = fim.livro;
        fim = fim.anterior;
        if (fim != null) {
            fim.proximo = null;
        } else {
            inicio = null;
        }
        return livroRemovido;
    }

    // Pesquisa um livro por ID
    public Livro buscarPorID(int id) {
        NodoDuplo atual = inicio;
        while (atual != null) {
            if (atual.livro.id == id) {
                return atual.livro;
            }
            atual = atual.proximo;
        }
        return null;
    }

    // Imprime os livros na ordem original (do início ao fim)
    public void imprimirOrdemOriginal() {
        if (inicio == null) {
            System.out.println("Nenhum livro na lista.");
            return;
        }
        NodoDuplo atual = inicio;
        while (atual != null) {
            System.out.println(atual.livro);
            atual = atual.proximo;
        }
    }

    // Imprime os livros na ordem inversa (do fim ao início)
    public void imprimirOrdemReversa() {
        if (fim == null) {
            System.out.println("Nenhum livro na lista.");
            return;
        }
        NodoDuplo atual = fim;
        while (atual != null) {
            System.out.println(atual.livro);
            atual = atual.anterior;
        }
    }
}
