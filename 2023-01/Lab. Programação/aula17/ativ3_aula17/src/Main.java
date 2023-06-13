public class Main {
    public static void main(String[] args) {
        Aviao aviao = new Aviao();
        aviao.Decolar();
        aviao.Voar();
        aviao.Aterrizar();

        Passaro passaro = new Passaro();
        passaro.Decolar();
        passaro.Voar();
        passaro.Aterrizar();

        Superman superman = new Superman();
        superman.Decolar();
        superman.Voar();
        superman.Aterrizar();
    }
}