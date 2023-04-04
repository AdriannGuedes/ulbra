public class Main {
    public static void main(String[] args) {
        Animal animal = new Animal();
        animal.nome="Zulu";
        animal.especie="Leão";
        animal.idade=19;

        animal.emitirSom();
        animal.dormir();
    }
}