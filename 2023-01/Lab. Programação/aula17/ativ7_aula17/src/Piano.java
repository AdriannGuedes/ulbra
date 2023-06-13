public class Piano implements Musical{
    @Override
    public void Tocar() {
        System.out.println("Tocando piano");
    }

    @Override
    public void Pausar() {
        System.out.println("Pausando música de piano");
    }

    @Override
    public void Parar() {
        System.out.println("Parando de tocar piano");

    }
}
