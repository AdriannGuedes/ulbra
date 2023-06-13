public class Atleta implements Corredor, Andador{
    @Override
    public void Andar() {
        System.out.println("Atleta andando");
    }

    @Override
    public void Correr() {
        System.out.println("Atleta correndo(e caindo)");

    }
}
