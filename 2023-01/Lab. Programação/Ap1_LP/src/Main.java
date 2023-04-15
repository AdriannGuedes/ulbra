public class Main {
    public static void main(String[] args) {
        Gincana gincana = new Gincana("GincanadosDuris");
        Estudante estudante1=new Estudante("Adrian", 19, 9);
        Estudante estudante2=new Estudante("Dalpz", 20, 10);

        gincana.adicionarEstudante(estudante1);
        gincana.adicionarEstudante(estudante2);
        gincana.exibirVencedor();



    }
}