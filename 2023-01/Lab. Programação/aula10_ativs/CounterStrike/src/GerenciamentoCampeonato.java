public class GerenciamentoCampeonato {

    public static void main(String[] args) {
        Equipe equipe1 = new Equipe("Delta");
        Equipe equipe2 = new Equipe("Bravo");

        equipe1.RegistrarVitoria();
        equipe1.RegistrarEmpate();

        equipe2.RegistrarDerrota();
        equipe2.RegistrarVitoria();

        System.out.println("Equipe 1 - " + equipe1.getNome());
        System.out.println("Vitórias: " + equipe1.getVitorias());
        System.out.println("Derrotas: " + equipe1.getDerrotas());
        System.out.println("Empates: " + equipe1.getEmpates());

        System.out.println("\nEquipe 2 - " + equipe2.getNome());
        System.out.println("Vitórias: " + equipe2.getVitorias());
        System.out.println("Derrotas: " + equipe2.getDerrotas());
        System.out.println("Empates: " + equipe2.getEmpates());




    }
}
