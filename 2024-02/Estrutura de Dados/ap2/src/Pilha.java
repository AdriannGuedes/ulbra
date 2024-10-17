public class Pilha {
    private Nodo topo;

    public Pilha() {
        this.topo = null;
    }

    // Adiciona um pedido ao topo da pilha
    public void AdicionaAoTopo(Pedido pedido) {
        Nodo novoNodo = new Nodo(pedido);
        novoNodo.proximo = topo;
        topo = novoNodo;
    }

    // Remove o pedido mais recente da pilha
    public Pedido RemoveMaisRecente() {
        if (topo == null) {
            System.out.println("Pilha vazia, nenhum pedido para restaurar.");
            return null;
        }
        Pedido pedido = topo.pedido;
        topo = topo.proximo;
        return pedido;
    }

    // Imprime todos os pedidos cancelados na pilha
    public void ImprimePedidosCancelados() {
        if (topo == null) {
            System.out.println("Nenhum pedido cancelado.");
            return;
        }
        Nodo atual = topo;
        while (atual != null) {
            System.out.println(atual.pedido);
            atual = atual.proximo;
        }
    }
}
