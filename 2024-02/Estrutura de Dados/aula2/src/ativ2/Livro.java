package ativ2;

public class Livro {
    private String titulo;
    private String autor;
    private int numPag;
    public boolean disponivel;

    public String getTitulo() {
        return titulo;
    }

    public void setTitulo(String titulo) {
        titulo = titulo;
    }

    public String getAutor() {
        return autor;
    }

    public void setAutor(String autor) {
        autor = autor;
    }

    public int getNumPag() {
        return numPag;
    }

    public void setNumPag(int numPag) {
        this.numPag = numPag;
    }

    public void setDisponivel(boolean disponivel) {
        disponivel = disponivel;
    }

    public Livro(String titulo, String autor, int numPag) {
        this.titulo = titulo;
        this.autor = autor;
        this.numPag = numPag;
        this.disponivel = true;
    }

    public void exibirDetalhes() {
        System.out.println("Título: " + titulo);
        System.out.println("Autor: " + autor);
        System.out.println("Número de Páginas: " + numPag);
        System.out.println("Disponível: " + (disponivel ? "Sim" : "Não"));
    }

    public void reservar() {
        if ( disponivel) {
            disponivel = false;
            System.out.println("Livro reservado com sucesso!");
        } else {
            System.out.println("Este livro já está reservado.");
        }
    }

    public void devolver() {
        disponivel = true;
        System.out.println("Livro devolvido com sucesso!");
    }

    public boolean isDisponivel() {
        return  disponivel;
    }
}

