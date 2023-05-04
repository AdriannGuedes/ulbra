public class Main {
    public static void main(String[] args) {
        Pessoa roger = new Pessoa();
        roger.nome="Roger";
        roger.endereco="Acre";
        System.out.println(roger.nome);
        System.out.println(roger.endereco);

        Cliente cliente = new Cliente();
        cliente.nome="Cleitin";
        cliente.endereco="Rua Caxias do Sul";
        cliente.numCartao=498;
        System.out.println(cliente.nome);
        System.out.println(cliente.endereco);
        System.out.println(cliente.numCartao);
    }
}