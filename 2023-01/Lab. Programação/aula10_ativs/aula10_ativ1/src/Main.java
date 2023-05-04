public class Main {
    public static void main(String[] args) {
        Estudante estudante1 = new Estudante("Adrian", "dosGuri", "Direito");
        System.out.println(estudante1.curso);


        Estudante estudante2 = new Estudante("Adrian", "dosGuri");
        System.out.println(estudante2.curso);



    }
}