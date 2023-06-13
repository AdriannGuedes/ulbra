public class Main {
    public static void main(String[] args) {
        ArquivoAudio audio = new ArquivoAudio();
        audio.Abrir();
        audio.Fechar();

        ArquivoImagem imagem = new ArquivoImagem();
        imagem.Abrir();
        imagem.Fechar();

        ArquivoTexto texto = new ArquivoTexto();
        texto.Abrir();
        texto.Fechar();
    }
}