public class Livro {

    public String titulo;
    public String autor;
    public String editora;
    public int numPags;

    public void mostrarInfos(){

        System.out.println("O livro escolhido para leitura é o "+titulo);
        System.out.println("Este livro possui "+numPags+" páginas");
        System.out.println("Escrito por "+autor);
        System.out.println("Foi publicado "+editora);
    }
}
