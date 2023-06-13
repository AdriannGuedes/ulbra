public class Main {
    public static void main(String[] args) {
        Pagavel boleto = new Fatura();
        Pagavel cheque = new Cheque();
        Pagavel master = new Deposito();

        boleto.Pagar();
        cheque.Pagar();
        master.Pagar();

        boleto.VerificarPagamento();
        cheque.VerificarPagamento();
        master.VerificarPagamento();
    }
}