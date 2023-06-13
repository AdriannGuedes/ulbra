public class Dinheiro extends Pagamento{

    @Override
    public void realizarPagamento() {
        System.out.println("Pagando no dinheiro:()");

    }

    @Override
    public void emitirRecibo() {
        System.out.println("Comprou pq quis");

    }
}
