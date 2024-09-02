public class Professor extends Pessoa{
    private int horAula;
    public Professor(String nome, String email) {
        super(nome, email);
    }

    public int getHorAula() {
        return horAula;
    }

    public void setHorAula(int horAula) {
        this.horAula = horAula;
    }

    public void logar(){
        System.out.println("Professor "+ getNome()+ " logado");
    }
}
