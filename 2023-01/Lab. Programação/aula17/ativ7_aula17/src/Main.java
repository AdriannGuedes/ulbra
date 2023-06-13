public class Main {
    public static void main(String[] args) {
       Bateria baterista = new Bateria();
       baterista.Tocar();
       baterista.Pausar();
       baterista.Parar();

       Piano pianista = new Piano();
       pianista.Tocar();
       pianista.Pausar();
       pianista.Parar();

       Guitarra guitarrista = new Guitarra();
       guitarrista.Tocar();
       guitarrista.Pausar();
       guitarrista.Parar();
    }
}