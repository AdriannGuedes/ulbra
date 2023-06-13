public class Debito extends Pagamento{


    @Override
    public void realizarPagamento() {
        System.out.println("Pagando no débito:)");

    }

    @Override
    public void emitirRecibo() {
        System.out.println("Comprovante Nubank");

    }
}
