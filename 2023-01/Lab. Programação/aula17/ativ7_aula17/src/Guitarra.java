public class Guitarra implements Musical{
    @Override
    public void Tocar() {
        System.out.println("Tocando guitarra");
    }

    @Override
    public void Pausar() {
        System.out.println("Pausando guitarrista");

    }

    @Override
    public void Parar() {
        System.out.println("Parando o guitarrista");

    }
}
