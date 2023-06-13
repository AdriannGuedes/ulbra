import java.lang.reflect.Array;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {

        int[] valores ={23,1,34,89,2};

        int maior = valores[0];

        for (int x =0; x < valores.length; x++)
        {
            if (valores[x]>maior)
            {
                maior=valores[x];
            }
        }

        System.out.println("Números: "+ Arrays.toString(valores));
        System.out.println("Maior número: "+maior);

    }
}