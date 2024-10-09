public class Main {
    public static void main(String[] args) {
        // Criando uma lista encadeada de inteiros
        ListaEncadeada<Integer> lista = new ListaEncadeada<>();

        // Adicionando elementos na lista
        lista.adicionarNoInicio(10);
        lista.adicionarNoFim(20);
        lista.adicionarNoFim(30);
        lista.adicionarNaPosicao(1, 15);  // Insere 15 na posição 1

        // Exibindo a lista
        System.out.println("Lista após inserções: " + lista);

        // Removendo elementos da lista
        lista.removerDoInicio();           // Remove o primeiro elemento (10)
        System.out.println("Lista após remover do início: " + lista);

        lista.removerDoFim();              // Remove o último elemento (30)
        System.out.println("Lista após remover do fim: " + lista);

        lista.removerPorValor(15);         // Remove o elemento 15
        System.out.println("Lista após remover o valor 15: " + lista);

        // Adicionando novos elementos para mais testes
        lista.adicionarNoFim(40);
        lista.adicionarNoFim(50);
        lista.adicionarNoFim(60);
        System.out.println("Lista após novas inserções: " + lista);

        // Buscando elementos
        int posicao = lista.buscarPosicao(50);
        System.out.println("Posição do valor 50: " + posicao);

        // Atualizando um valor na lista
        lista.atualizar(1, 45);  // Atualiza o valor na posição 1 para 45
        System.out.println("Lista após atualizar a posição 1 com 45: " + lista);

        // Tamanho da lista
        System.out.println("Tamanho da lista: " + lista.tamanho());

        // Verificando se a lista está vazia
        System.out.println("A lista está vazia? " + lista.estaVazia());

        // Limpando a lista
        lista.limpar();
        System.out.println("Lista após limpeza: " + lista);
        System.out.println("Tamanho da lista após limpeza: " + lista.tamanho());
    }
}