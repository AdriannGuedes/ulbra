public class Main {
    public static void main(String[] args) {
        ListaDuplamenteLigada<Integer> lista = new ListaDuplamenteLigada<>();

        lista.ImprimirLista();
        lista.inserirNoFim(4);
        lista.inserirNoFim(10);
        lista.ImprimirLista();
        lista.inserirNoInicio(1);
        lista.ImprimirLista();

        lista.removerPorValor(10);
        lista.ImprimirLista();

        lista.removerPorValor(1);
        lista.ImprimirLista();
    }
}