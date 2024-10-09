class ListaEncadeada<T> {
    private No<T> inicio;
    private int tamanho;

    public ListaEncadeada() {
        this.inicio = null;
        this.tamanho = 0;
    }

    // Inserção no início da lista
    public void adicionarNoInicio(T valor) {
        No<T> novoNo = new No<>(valor);
        novoNo.setProximo(inicio);
        inicio = novoNo;
        tamanho++;
    }

    // Inserção no fim da lista
    public void adicionarNoFim(T valor) {
        No<T> novoNo = new No<>(valor);
        if (inicio == null) {
            inicio = novoNo;
        } else {
            No<T> atual = inicio;
            while (atual.getProximo() != null) {
                atual = atual.getProximo();
            }
            atual.setProximo(novoNo);
        }
        tamanho++;
    }

    // Inserção em uma posição específica
    public void adicionarNaPosicao(int posicao, T valor) {
        if (posicao < 0 || posicao > tamanho) {
            throw new IndexOutOfBoundsException("Posição inválida");
        }
        if (posicao == 0) {
            adicionarNoInicio(valor);
        } else {
            No<T> novoNo = new No<>(valor);
            No<T> atual = inicio;
            for (int i = 0; i < posicao - 1; i++) {
                atual = atual.getProximo();
            }
            novoNo.setProximo(atual.getProximo());
            atual.setProximo(novoNo);
            tamanho++;
        }
    }

    // Remoção do início da lista
    public T removerDoInicio() {
        if (inicio == null) {
            throw new IllegalStateException("Lista vazia");
        }
        T valor = inicio.getDado();
        inicio = inicio.getProximo();
        tamanho--;
        return valor;
    }

    // Remoção do fim da lista
    public T removerDoFim() {
        if (inicio == null) {
            throw new IllegalStateException("Lista vazia");
        }
        if (inicio.getProximo() == null) {
            return removerDoInicio();
        }
        No<T> atual = inicio;
        while (atual.getProximo().getProximo() != null) {
            atual = atual.getProximo();
        }
        T valor = atual.getProximo().getDado();
        atual.setProximo(null);
        tamanho--;
        return valor;
    }

    // Remoção de uma posição específica
    public T removerDaPosicao(int posicao) {
        if (posicao < 0 || posicao >= tamanho) {
            throw new IndexOutOfBoundsException("Posição inválida");
        }
        if (posicao == 0) {
            return removerDoInicio();
        } else {
            No<T> atual = inicio;
            for (int i = 0; i < posicao - 1; i++) {
                atual = atual.getProximo();
            }
            T valor = atual.getProximo().getDado();
            atual.setProximo(atual.getProximo().getProximo());
            tamanho--;
            return valor;
        }
    }

    // Remoção de um elemento específico
    public T removerPorValor(T valor) {
        if (inicio == null) {
            throw new IllegalStateException("Lista vazia");
        }
        if (inicio.getDado().equals(valor)) {
            return removerDoInicio();
        }
        No<T> atual = inicio;
        No<T> anterior = null;
        while (atual != null && !atual.getDado().equals(valor)) {
            anterior = atual;
            atual = atual.getProximo();
        }
        if (atual == null) {
            return null; // Elemento não encontrado
        }
        anterior.setProximo(atual.getProximo());
        tamanho--;
        return atual.getDado();
    }

    // Busca um valor em uma posição específica
    public T buscar(int posicao) {
        if (posicao < 0 || posicao >= tamanho) {
            throw new IndexOutOfBoundsException("Posição inválida");
        }
        No<T> atual = inicio;
        for (int i = 0; i < posicao; i++) {
            atual = atual.getProximo();
        }
        return atual.getDado();
    }

    // Busca a posição de um elemento com valor específico
    public int buscarPosicao(T valor) {
        No<T> atual = inicio;
        int posicao = 0;
        while (atual != null) {
            if (atual.getDado().equals(valor)) {
                return posicao;
            }
            atual = atual.getProximo();
            posicao++;
        }
        return -1; // Elemento não encontrado
    }

    // Atualiza o valor de um nó em uma posição específica
    public void atualizar(int posicao, T novoValor) {
        if (posicao < 0 || posicao >= tamanho) {
            throw new IndexOutOfBoundsException("Posição inválida");
        }
        No<T> atual = inicio;
        for (int i = 0; i < posicao; i++) {
            atual = atual.getProximo();
        }
        atual.setDado(novoValor);
    }

    // Retorna o tamanho da lista
    public int tamanho() {
        return tamanho;
    }

    // Verifica se a lista está vazia
    public boolean estaVazia() {
        return inicio == null;
    }

    // Remove todos os elementos da lista
    public void limpar() {
        inicio = null;
        tamanho = 0;
    }

    // Retorna uma representação textual da lista
    @Override
    public String toString() {
        if (inicio == null) {
            return "[]";
        }
        StringBuilder sb = new StringBuilder();
        No<T> atual = inicio;
        sb.append("[");
        while (atual != null) {
            sb.append(atual.getDado());
            if (atual.getProximo() != null) {
                sb.append(", ");
            }
            atual = atual.getProximo();
        }
        sb.append("]");
        return sb.toString();
    }
}