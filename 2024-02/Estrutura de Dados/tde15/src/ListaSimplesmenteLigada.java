public class ListaSimplesmenteLigada<T> {
    private Nodo<T> cabeca;
    private int tamanho;

    public ListaSimplesmenteLigada() {
        this.cabeca = null;
        this.tamanho = 0;
    }

    // Inserção no início
    public void adicionarNoInicio(T valor) {
        Nodo<T> novoNodo = new Nodo<>(valor);
        novoNodo.proximo = cabeca;
        cabeca = novoNodo;
        tamanho++;
    }

    // Inserção no fim
    public void adicionarNoFim(T valor) {
        Nodo<T> novoNodo = new Nodo<>(valor);
        if (cabeca == null) {
            cabeca = novoNodo;
        } else {
            Nodo<T> atual = cabeca;
            while (atual.proximo != null) {
                atual = atual.proximo;
            }
            atual.proximo = novoNodo;
        }
        tamanho++;
    }

    // Inserção em posição específica
    public void adicionarNaPosicao(int posicao, T valor) {
        if (posicao < 0 || posicao > tamanho) {
            throw new IndexOutOfBoundsException("Posição inválida");
        }

        if (posicao == 0) {
            adicionarNoInicio(valor);
            return;
        }

        Nodo<T> novoNodo = new Nodo<>(valor);
        Nodo<T> atual = cabeca;
        for (int i = 0; i < posicao - 1; i++) {
            atual = atual.proximo;
        }
        novoNodo.proximo = atual.proximo;
        atual.proximo = novoNodo;
        tamanho++;
    }

    // Remoção do início
    public T removerDoInicio() {
        if (cabeca == null) {
            throw new IllegalStateException("Lista vazia");
        }

        T valor = cabeca.valor;
        cabeca = cabeca.proximo;
        tamanho--;
        return valor;
    }

    // Remoção do fim
    public T removerDoFim() {
        if (cabeca == null) {
            throw new IllegalStateException("Lista vazia");
        }

        if (cabeca.proximo == null) {
            return removerDoInicio();
        }

        Nodo<T> atual = cabeca;
        while (atual.proximo.proximo != null) {
            atual = atual.proximo;
        }

        T valor = atual.proximo.valor;
        atual.proximo = null;
        tamanho--;
        return valor;
    }

    // Remoção em posição específica
    public T removerDaPosicao(int posicao) {
        if (posicao < 0 || posicao >= tamanho) {
            throw new IndexOutOfBoundsException("Posição inválida");
        }

        if (posicao == 0) {
            return removerDoInicio();
        }

        Nodo<T> atual = cabeca;
        for (int i = 0; i < posicao - 1; i++) {
            atual = atual.proximo;
        }

        T valor = atual.proximo.valor;
        atual.proximo = atual.proximo.proximo;
        tamanho--;
        return valor;
    }

    // Remoção por valor
    public T removerPorValor(T elemento) {
        if (cabeca == null) {
            throw new IllegalStateException("Lista vazia");
        }

        if (cabeca.valor.equals(elemento)) {
            return removerDoInicio();
        }

        Nodo<T> atual = cabeca;
        while (atual.proximo != null && !atual.proximo.valor.equals(elemento)) {
            atual = atual.proximo;
        }

        if (atual.proximo == null) {
            return null;
        }

        T valor = atual.proximo.valor;
        atual.proximo = atual.proximo.proximo;
        tamanho--;
        return valor;
    }

    // Busca por posição
    public T buscar(int posicao) {
        if (posicao < 0 || posicao >= tamanho) {
            throw new IndexOutOfBoundsException("Posição inválida");
        }

        Nodo<T> atual = cabeca;
        for (int i = 0; i < posicao; i++) {
            atual = atual.proximo;
        }
        return atual.valor;
    }

    // Busca por valor
    public int buscarPosicao(T valor) {
        Nodo<T> atual = cabeca;
        int posicao = 0;
        while (atual != null) {
            if (atual.valor.equals(valor)) {
                return posicao;
            }
            atual = atual.proximo;
            posicao++;
        }
        return -1; // Retorna -1 se o valor não for encontrado
    }

    // Impressão da lista
    public void imprimir() {
        Nodo<T> atual = cabeca;
        while (atual != null) {
            System.out.print(atual.valor + " -> ");
            atual = atual.proximo;
        }
        System.out.println("null");
    }

    // Retorna o tamanho da lista
    public int getTamanho() {
        return tamanho;
    }
}
