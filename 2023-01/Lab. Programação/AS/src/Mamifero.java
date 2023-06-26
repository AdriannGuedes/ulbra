public class Mamifero extends Animal{

    private String tipoPelagem;

    public Mamifero(String nome, int idade, double peso, String especie, String tipoPelagem)
    {
        super(nome, idade, peso, especie);
        this.tipoPelagem=tipoPelagem;
    }

    public void Amamentar()
    {
        System.out.println("O mamífero "+getNome()+" está amamanetando" );
    }
}
