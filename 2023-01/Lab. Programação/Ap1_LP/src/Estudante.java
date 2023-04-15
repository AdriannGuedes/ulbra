public class Estudante {
    private String Nome;
    private int Idade;
    private int Pontos;

    public Estudante(String nome, int idade, int pontos){
        this.Nome = nome;
        this.Idade = idade;
        this.Pontos = pontos;

    }

    String getNome(){
        return Nome;
    }

    String  setNome( String Nome){
        this.Nome=Nome;
        return Nome;

    }

    int getIdade(){return Idade;}

    int setIdade(int Idade){
        this.Idade=Idade;
        return Idade;
    }

    int getPontos(){return Pontos;}

    int setPontos(int Pontos){
        this.Pontos=Pontos;
        return Pontos;
    }

}
