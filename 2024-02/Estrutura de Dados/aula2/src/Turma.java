public class Turma {
    private String nome;
    private Professor professor;
    private Aluno[] alunos;
    private int posicaoAtual = 0;

    public Turma(String nome, Professor professor, int numVagas){
        this.nome = nome;
        this.professor = professor;
        alunos = new Aluno[numVagas];
    }

    public void inserirAluno(Aluno aluno){
        alunos[posicaoAtual] = aluno;
        posicaoAtual++;
    }

    public void listarAlunos(){
        for(int i =0; i < posicaoAtual; i++){
            System.out.println("Aluno "+(i+1)+ ": "+alunos[i].getNome());
        }
    }
}
