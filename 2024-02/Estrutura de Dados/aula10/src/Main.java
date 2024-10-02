public class Main {
    public static void main(String[] args) {
        Pilha livros = new Pilha(3);

        livros.empilhar("Livro 1");
        livros.empilhar("Livro 2");
        livros.empilhar("Livro 3");

        String removido = livros.desempilhar();
        System.out.println(removido);
        System.out.println(livros.tamanho());

        System.out.println(livros.estaVazia());
        System.out.println(livros.estaCheio());

    }
}