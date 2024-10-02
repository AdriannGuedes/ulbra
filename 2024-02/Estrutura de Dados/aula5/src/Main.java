import java.util.Random;

public class Main {
    public static void main(String[] args) {

        //System.out.println(Recursividade.fatorial(8));

        int[] vetor = new int [20];
        Random radom = new Random();
        for(int i = 0; i < vetor.length; i++){
            vetor[i] = radom.nextInt(100);
        }

        Recursividade.imprimeVetor(vetor);
        Recursividade.mergeSort(vetor, 0, vetor.length - 1);
        Recursividade.imprimeVetor(vetor);
    }
}