public class VetorClientes {
    private Cliente[] clientes;
    private int tamanho;

    // Construtor que define o tamanho do vetor
    public VetorClientes(int capacidade) {
        this.clientes = new Cliente[capacidade];
        this.tamanho = 0;
    }

    // Método para adicionar um cliente ao vetor
    public boolean adicionar(Cliente cliente) {
        if (tamanho < clientes.length) {
            clientes[tamanho] = cliente;
            tamanho++;
            return true;
        } else {
            System.out.println("Vetor cheio. Não foi possível adicionar o cliente: " + cliente.getNome());
            return false;
        }
    }

    // Método para listar todos os clientes
    public void listarClientes() {
        for (int i = 0; i < tamanho; i++) {
            System.out.println(clientes[i]);
        }
    }

    // Método para buscar cliente pelo nome
    public Cliente buscarPorNome(String nome) {
        for (int i = 0; i < tamanho; i++) {
            if (clientes[i].getNome().equalsIgnoreCase(nome)) {
                return clientes[i];
            }
        }
        return null;
    }

    // Método para filtrar clientes por domínio de email
    public void filtrarPorDominio(String dominio) {
        for (int i = 0; i < tamanho; i++) {
            if (clientes[i].getEmail().endsWith(dominio)) {
                System.out.println(clientes[i]);
            }
        }
    }

    // Método para remover um cliente pelo índice
    public boolean remover(int indice) {
        if (indice >= 0 && indice < tamanho) {
            for (int i = indice; i < tamanho - 1; i++) {
                clientes[i] = clientes[i + 1];
            }
            clientes[tamanho - 1] = null;
            tamanho--;
            return true;
        }
        return false;
    }

    // Método para alterar um cliente em uma posição específica
    public boolean alterar(int indice, Cliente cliente) {
        if (indice >= 0 && indice < tamanho) {
            clientes[indice] = cliente;
            return true;
        }
        return false;
    }
}
