public class Main {
    public static void main(String[] args) {
       Cachorro dog = new Cachorro();
       dog.Mover();
       dog.Comer();
       dog.Dormir();
        System.out.println("----------");

       Gato cat = new Gato();
       cat.Mover();
       cat.Comer();
       cat.Dormir();
        System.out.println("----------");

        Peixe peixe = new Peixe();
        peixe.Mover();
        peixe.Comer();
        peixe.Dormir();
    }
}