public class Main {
    public static void main(String[] args) {
        VetorClientes vetor = new VetorClientes(20);

        // Adicionando 30 clientes ao vetor
        for (int i = 1; i <= 30; i++) {
            Cliente cliente = new Cliente("Cliente" + i, "12345" + i, "cliente" + i + "@exemplo.com");
            vetor.adicionar(cliente); // Tenta adicionar mesmo que o vetor esteja cheio
        }

        // Alterando um cliente específico
        Cliente clienteAlterado = new Cliente("ClienteAlterado", "54321", "alterado@exemplo.com");
        vetor.alterar(2, clienteAlterado);

        // Removendo um cliente específico
        vetor.remover(5);

        // Listando todos os clientes
        System.out.println("Lista de clientes:");
        vetor.listarClientes();

        // Buscando por nome
        Cliente encontrado = vetor.buscarPorNome("ClienteAlterado");
        if (encontrado != null) {
            System.out.println("Cliente encontrado: " + encontrado);
        } else {
            System.out.println("Cliente não encontrado.");
        }

        // Filtrando por domínio de email
        System.out.println("Clientes com email @exemplo.com:");
        vetor.filtrarPorDominio("@exemplo.com");
    }
}