public class Estudante {

    String nome;
    String matricula;
    String curso;

    public Estudante(String nome, String matricula, String curso)
    {
        this.nome=nome;
        this.curso=curso;
        this.matricula=matricula;
    }

    public Estudante(String nome, String matricula)
    {
        this.nome=nome;
        this.curso="Análise e desenvolvimento de sistemas";
        this.matricula=matricula;
    }


}
