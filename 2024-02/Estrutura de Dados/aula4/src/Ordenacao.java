public class Ordenacao {

    public static void bubbleSort(int[] vetor){
        int n = vetor.length;

        for (int i = 0; i < n - 1; i++){
            for (int j = 0; j < n - i - 1; j++){
                if (vetor[j] > vetor[j+1]){
                    int aux = vetor[j];
                    vetor[j] = vetor[j+1];
                    vetor[j+1] = aux;
                }
            }
        }
    }

    public static void bubbleSortDecrescente(int[] vetor){
        int n = vetor.length;

        for (int i = 0; i < n - 1; i++){
            for (int j = 0; j < n - i - 1; j++){
                if (vetor[j] < vetor[j+1]){
                    int aux = vetor[j];
                    vetor[j] = vetor[j+1];
                    vetor[j+1] = aux;
                }
            }
        }
    }

    public static void selectionSort(int[] vetor){
        int n = vetor.length;

        for(int i = 0; i < n -1; i++){
            int min_idx = i;
            for (int j = i+1; j < n; j++){
                if (vetor[j] < vetor[min_idx]) {
                    min_idx = j;
                }
                int temp = vetor[min_idx];
                vetor[min_idx] = vetor[i];
                vetor[i] = temp;
            }

        }
    }

    public static void selectionSortDecrescente(int[] vetor){
        int n = vetor.length;

        for (int i = 0; i < n - 1; i++) {
            int max_idx = i;
            for (int j = i + 1; j < n; j++) {
                if (vetor[j] > vetor[max_idx]) {
                    max_idx = j;
                }
            }
            int temp = vetor[max_idx];
            vetor[max_idx] = vetor[i];
            vetor[i] = temp;
        }
    }

    public static void insertionSort(int [] vetor){
        int n = vetor.length;
        for (int i = 1; i < n; i++) {
            int key = vetor[i]; // Elemento a ser inserido na parte ordenada
            int j = i - 1;
            while (j >= 0 && vetor[j] > key) {
                vetor[j + 1] = vetor[j];
                j = j - 1;
            }
            vetor[j + 1] = key; // Insere o elemento na posição correta
        }
    }

    public static void insertionSortDecrescente(int [] vetor){
        int n = vetor.length;
        for (int i = 1; i < n; i++) {
            int key = vetor[i];
            int j = i - 1;
            while (j >= 0 && vetor[j] < key) {
                vetor[j + 1] = vetor[j];
                j = j - 1;
            }
            vetor[j + 1] = key;
        }
    }
    public static void imprimirVetor(int[] vetor){
        for (int vet : vetor){
            System.out.println(vet + "-");
        }
        System.out.println();
    }
}
