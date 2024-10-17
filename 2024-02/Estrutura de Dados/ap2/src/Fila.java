public class Fila {
    private Nodo inicio;
    private Nodo fim;

    public Fila() {
        this.inicio = null;
        this.fim = null;
    }

    // Adiciona um pedido ao final da fila
    public void AdicionaAoFinal(Pedido pedido) {
        Nodo novoNodo = new Nodo(pedido);
        if (fim != null) {
            fim.proximo = novoNodo;
        }
        fim = novoNodo;
        if (inicio == null) {
            inicio = fim;
        }
    }

    // Remove o pedido mais antigo da fila
    public Pedido RemoveAntigo() {
        if (inicio == null) {
            System.out.println("Fila vazia, nenhum pedido para atender.");
            return null;
        }
        Pedido pedido = inicio.pedido;
        inicio = inicio.proximo;
        if (inicio == null) {
            fim = null;
        }
        return pedido;
    }

    // Imprime todos os pedidos pendentes na fila
    public void ImprimePendentes() {
        if (inicio == null) {
            System.out.println("Nenhum pedido pendente.");
            return;
        }
        Nodo atual = inicio;
        while (atual != null) {
            System.out.println(atual.pedido);
            atual = atual.proximo;
        }
    }
}
