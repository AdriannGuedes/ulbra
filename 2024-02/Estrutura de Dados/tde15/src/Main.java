public class Main {
    public static void main(String[] args) {
        ListaSimplesmenteLigada<Integer> lista = new ListaSimplesmenteLigada<>();

        // Testando os métodos
        lista.adicionarNoInicio(1);
        lista.adicionarNoFim(3);
        lista.adicionarNaPosicao(1, 2);
        lista.imprimir(); // 1 -> 2 -> 3 -> null

        lista.removerDoInicio();
        lista.imprimir(); // 2 -> 3 -> null

        lista.removerDoFim();
        lista.imprimir(); // 2 -> null

        lista.adicionarNoFim(4);
        lista.adicionarNoFim(5);
        lista.removerDaPosicao(1);
        lista.imprimir(); // 2 -> 5 -> null

        System.out.println("Posição do valor 5: " + lista.buscarPosicao(5)); // Posição do valor 5: 1
        System.out.println("Valor na posição 0: " + lista.buscar(0)); // Valor na posição 0: 2
    }
   
}