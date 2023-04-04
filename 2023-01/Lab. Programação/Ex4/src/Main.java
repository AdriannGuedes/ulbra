public class Main {
    public static void main(String[] args) {
        ContaBancaria conta = new ContaBancaria();
        conta.numeroConta=2407;
        conta.titular="Adrian";
        conta.saldo=900;
        System.out.println("Acessando conta...");
        conta.Depositar(1000);
        conta.Sacar(1850);



    }
}