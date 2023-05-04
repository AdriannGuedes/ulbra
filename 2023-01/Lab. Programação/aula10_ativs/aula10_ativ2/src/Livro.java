public class Livro {

    String titulo;
    String autor;
    double preco;

    public Livro(String titulo, String autor, double preco)
    {
        this.titulo=titulo;
        this.autor=autor;
        this.preco=preco;
    }

    public Livro(String autor, String titulo)
    {
        this.titulo=titulo;
        this.autor=autor;
        this.preco=500.00;
    }
}
