public class Livro extends Produto {

    public String autor;
    public int anoPublicacao;
    public boolean disponibilidade;

    public Livro( String titulo, String autor, int anoPublicacao, boolean disponibilidade )
    {
        super(titulo);
        this.autor=autor;
        this.anoPublicacao=anoPublicacao;
        this.disponibilidade=disponibilidade;

    }

    public String getAutor() {
        return autor;
    }

    public void setAutor(String autor) {
        this.autor = autor;
    }

    public int getAnoPublicacao() {
        return anoPublicacao;
    }

    public void setAnoPublicacao(int anoPublicacao) {
        this.anoPublicacao = anoPublicacao;
    }

    public boolean isDisponibilidade() {
        return disponibilidade;
    }

    public void setDisponibilidade(boolean disponibilidade) {
        this.disponibilidade = disponibilidade;
    }

    @Override
    public String detalhesdoProduto() {
        return "Livro: " +getTitulo() + "\nAno Publicação; "
                +getAnoPublicacao()+ "\n Autor: " +getAutor()+
                "\nDisponibilidade: " +(disponibilidade ? "Disponivel" : "Indisponivel");
    }

}
