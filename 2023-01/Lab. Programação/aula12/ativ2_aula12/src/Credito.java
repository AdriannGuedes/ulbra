public class Credito extends Pagamento{

    @Override
    public void realizarPagamento() {
        System.out.println("Pagando no crédito:(");

    }

    @Override
    public void emitirRecibo() {
        System.out.println("Comprovante Inter");

    }
}
