public class Bateria implements Carregavel, Descarregavel{
    @Override
    public void Carga(int num) {
        System.out.println("Carregando bateria");
    }

    @Override
    public void Carga() {
        System.out.println("Descarregando bateria");

    }
}
