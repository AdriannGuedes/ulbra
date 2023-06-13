public class Cheque implements Pagavel{
    @Override
    public void Pagar() {
        System.out.println("Cheque pago, um milagre terem aceito");
    }

    @Override
    public void VerificarPagamento() {
        System.out.println("*Há uma folha faltando*");

    }
}
