public class Passaro implements Voador{
    @Override
    public void Decolar() {
        System.out.println("Passaro decolando");
    }

    @Override
    public void Voar() {
        System.out.println("Passaro voando");

    }

    @Override
    public void Aterrizar() {
        System.out.println("Passaro aterrizando");

    }
}
