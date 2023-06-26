public class Ave extends Animal implements Treinavel{

    private double invergaduraAsa;

    public Ave(String nome, int idade, double peso, String especie, double invergaduraAsa)
    {
        super(nome, idade, peso, especie);
        this.invergaduraAsa=invergaduraAsa;
    }

    public void Voar()
    {
        System.out.println("A ave "+getNome()+" está voando");
    }


    @Override
    public void realizarTruque() {
        System.out.println("A ave "+getNome()+" realizou um truque voador");
    }
}
