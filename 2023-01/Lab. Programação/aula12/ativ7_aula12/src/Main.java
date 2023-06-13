public class Main {
    public static void main(String[] args) {
        Atacante atacante = new Atacante();
        atacante.Atacar();
        atacante.Defender();
        System.out.println("-----");

        MeioCampo meioCampo = new MeioCampo();
        meioCampo.Atacar();
        meioCampo.Defender();
        System.out.println("-----");

        Goleiro goleiro = new Goleiro();
        goleiro.Atacar();
        goleiro.Defender();
    }
}