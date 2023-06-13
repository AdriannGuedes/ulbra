public class Aviao implements Voador{
    @Override
    public void Decolar() {
        System.out.println("Avião decolando");
    }

    @Override
    public void Voar() {
        System.out.println("Avião voando");

    }

    @Override
    public void Aterrizar() {
        System.out.println("Avião pousando");

    }
}
