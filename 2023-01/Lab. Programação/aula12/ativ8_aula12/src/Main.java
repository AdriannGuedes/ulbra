public class Main {
    public static void main(String[] args) {
       JatoTinta jatoTinta = new JatoTinta();
       jatoTinta.Imprimir();
       jatoTinta.Escanear();
        System.out.println("-----");

        ImpressoraLaser impressoraLaser = new ImpressoraLaser();
        impressoraLaser.Imprimir();
        impressoraLaser.Escanear();
        System.out.println("-----");

        ImpressoraMatricial impressoraMatricial = new ImpressoraMatricial();
        impressoraMatricial.Imprimir();
        impressoraMatricial.Escanear();

    }
}