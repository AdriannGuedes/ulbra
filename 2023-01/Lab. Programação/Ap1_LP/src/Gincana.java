public class Gincana {

    private String nomeGincana;
    private int totalEstudantes;
    Estudante estudanteVencedor;
    private int pontuacaoMaxima;

    public Gincana(String nomeGincana){
        this.nomeGincana=nomeGincana;
        this.totalEstudantes=totalEstudantes;
        this.estudanteVencedor=estudanteVencedor;
        this.pontuacaoMaxima=pontuacaoMaxima;
    }

    String getNomeGincana() {
        return nomeGincana;
    }

    String setnomeGincana(String nomeGincana){
        this.nomeGincana=nomeGincana;
        return nomeGincana;
    }

    int getTotalEstudantes(){
        return totalEstudantes;
    }

    int settotalEstudantes(int totalEstudantes){
        this.totalEstudantes=totalEstudantes;
        return totalEstudantes;


    }

    Estudante getEstudanteVencedor(){
        return estudanteVencedor;
    }

    Estudante setestudanteVencedor(Estudante estudanteVencedor){
        this.estudanteVencedor=estudanteVencedor;
        return estudanteVencedor;
    }

    int getPontuacaoMaxima(){
        return pontuacaoMaxima;
    }

    int setpontuacoMaxima(int pontuacaoMaxima){
        this.pontuacaoMaxima=pontuacaoMaxima;
        return pontuacaoMaxima;
    }

    public void adicionarEstudante(Estudante estudante){
        totalEstudantes++;
        if (estudanteVencedor==null || estudante.getPontos()> estudanteVencedor.getPontos()){
            estudanteVencedor=estudante;
            pontuacaoMaxima=estudante.getPontos();
        }
        else{
            System.out.println("Este aluno não teve a nota maior que a do vencedor");
        }
    }

    public void exibirVencedor(){
        System.out.println("O estudante vencedor é "+estudanteVencedor.getNome()+" com  "+estudanteVencedor.getPontos());
    }




}
