public class Main {
    public static void main(String[] args) {
        Credito inter = new Credito();
        inter.realizarPagamento();
        inter.emitirRecibo();

        Debito nubank = new Debito();
        nubank.realizarPagamento();
        nubank.emitirRecibo();

        Dinheiro dinheiro = new Dinheiro();
        dinheiro.realizarPagamento();
        dinheiro.emitirRecibo();
}   }