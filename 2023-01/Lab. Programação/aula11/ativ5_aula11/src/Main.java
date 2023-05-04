public class Main {
    public static void main(String[] args) {
        Cachorro dog1 = new Cachorro();
        dog1.nome="Jaguara";
        dog1.idade=10;
        dog1.raca="Labrador";
        dog1.emitirSom();
        dog1.mover();

        System.out.println("----------------");

        Gato cat1 = new Gato();
        cat1.nome = "Mia";
        cat1.idade = 3;
        cat1.pelagem = "Dura";
        cat1.emitirSom();
        cat1.mover();

    }
}