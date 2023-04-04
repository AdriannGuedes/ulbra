public class Main {
    public static void main(String[] args){
        Livro livro = new Livro();
        livro.titulo="Código Limpo";
        livro.editora="Alta Books";
        livro.autor="Robert Cecil Martin";
        livro.numPags=456;

        livro.mostrarInfos();
    }
}