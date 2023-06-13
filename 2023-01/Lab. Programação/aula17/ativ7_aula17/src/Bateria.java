public class Bateria implements Musical{
    @Override
    public void Tocar() {
        System.out.println("Tocando bateria");
    }

    @Override
    public void Pausar() {
        System.out.println("Pausando baterista");
    }

    @Override
    public void Parar() {
        System.out.println("Parando de tocar bateria");

    }
}
