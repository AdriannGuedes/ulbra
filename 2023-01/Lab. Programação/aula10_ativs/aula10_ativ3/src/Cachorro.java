public class Cachorro {

    String nome;
    String raca;
    int idade;

    public Cachorro(String nome, String raca, int idade)
    {
        this.nome=nome;
        this.raca=raca;
        this.idade=idade;

    }

    public Cachorro(String nome, String raca)
    {
        this.nome=nome;
        this.raca=raca;
        this.idade=10;

    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getRaca() {
        return raca;
    }

    public void setRaca(String raca) {
        this.raca = raca;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }






}
