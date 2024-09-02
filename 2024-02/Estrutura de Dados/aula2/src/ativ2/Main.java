package ativ2;

public class Main {
    public static void main(String[] args){
        Livraria livraria = new Livraria();

        Livro livro1 = new Livro("Percy Jackson", "JJR Tolkien", 400);
        Livro livro2 = new Livro("1984", "George Orwell", 328);

        livraria.inserirLivro(livro1);
        livraria.inserirLivro(livro2);

        System.out.println("Listando todos os livros:");
        livraria.listarLivros();

        System.out.println("Reservando um livro:");
        livro1.reservar();

        System.out.println("Tentando reservar o mesmo livro:");
        livro1.reservar();

        System.out.println("Devolvendo o livro:");
        livro1.devolver();

        System.out.println("Livros disponiveis:");
        livraria.listarDisponiveis();
    }
}
