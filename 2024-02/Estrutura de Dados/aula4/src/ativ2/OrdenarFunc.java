package ativ2;

public class OrdenarFunc {
    public static void ordemAlfabetica(Funcionario[] vetor){
        int n = vetor.length;
        for(int i = 0; i < n-1; i++){
            for(int j = 0; j < n-i-1; j++){
                if(vetor[j].getNome().compareTo(vetor[j+1].getNome()) > 0){
                    Funcionario aux = vetor[j];
                    vetor[j] = vetor[j+1];
                    vetor[j+1] = aux;
                }
            }
        }
    }

    public static void salCrescente(Funcionario[] vetor) {
        int n = vetor.length;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (vetor[j].getSalario() > vetor[j + 1].getSalario()) {
                    Funcionario aux = vetor[j];
                    vetor[j] = vetor[j + 1];
                    vetor[j + 1] = aux;
                }
            }
        }
    }

    public static void salDecrescente(Funcionario[] vetor) {
        int n = vetor.length;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (vetor[j].getSalario() < vetor[j + 1].getSalario()) {
                    Funcionario aux = vetor[j];
                    vetor[j] = vetor[j + 1];
                    vetor[j + 1] = aux;
                }
            }
        }
    }

}
