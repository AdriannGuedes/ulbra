public class Main {
    public static void main(String[] args) {
        Conta conta = new Conta();
        conta.num=2357;
        conta.saldo=500.00;

        ContaCorrente minhaConta = new ContaCorrente();
        minhaConta.num=555;
        minhaConta.saldo=2000.00;
        minhaConta.limite=6000.00;
    }
}