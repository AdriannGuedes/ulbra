import java.lang.reflect.Array;

public class Main {
    public static void main(String[] args) {

        double[] notas = {8.5,7.0,9.0,6.5,10.0};

        double nota=0;

        for(int x=0; x < notas.length; x++)
        {
            nota += notas[x];

        }

        double media = nota/notas.length;

        System.out.println("Média: "+media);



    }
}