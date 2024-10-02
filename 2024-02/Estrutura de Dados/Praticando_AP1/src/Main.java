public class Main {
    public static void main(String[] args) {

        // Declarando e inicializando o array
        int[] arr = {5, 3, 8, 4, 2};

        // Implementando o Bubble Sort
//        int n = arr.length;
//        for (int i = 0; i < n - 1; i++) {
//            for (int j = 0; j < n - i - 1; j++) {
//                // Comparando elementos adjacentes e trocando se necessário
//                if (arr[j] > arr[j + 1]) {
//                    int temp = arr[j];
//                    arr[j] = arr[j + 1];
//                    arr[j + 1] = temp;
//                }
//
//            }
//        }

        // Implementando o Selection Sort
//        int n = arr.length;
//        for (int i = 0; i < n - 1; i++) {
//            // Encontrar o índice do menor elemento no array não ordenado
//            int min_idx = i;
//            for (int j = i + 1; j < n; j++) {
//                if (arr[j] < arr[min_idx]) {
//                    min_idx = j;
//                }
//            }
//
//            // Trocar o menor elemento encontrado com o primeiro elemento não ordenado
//            int temp = arr[min_idx];
//            arr[min_idx] = arr[i];
//            arr[i] = temp;
//        }

//        int n = arr.length;
//        for (int i = 1; i < n; i++) {
//            int key = arr[i]; // Elemento a ser inserido na parte ordenada
//            int j = i - 1;
//            while (j >= 0 && arr[j] > key) {
//                arr[j + 1] = arr[j];
//                j = j - 1;
//            }
//            arr[j + 1] = key; // Insere o elemento na posição correta
//        }




        // Exibindo o array ordenado
        System.out.println("Array ordenado:");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }

    }
}