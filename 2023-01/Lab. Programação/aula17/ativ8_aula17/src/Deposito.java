public class Deposito implements Pagavel{
    @Override
    public void Pagar() {
        System.out.println("Deposito pago, fundos incrementados");

    }

    @Override
    public void VerificarPagamento() {
        System.out.println("Saldo atual: Mais que antes");

    }
}
