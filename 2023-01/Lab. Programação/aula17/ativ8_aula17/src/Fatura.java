public class Fatura implements Pagavel{
    @Override
    public void Pagar() {
        System.out.println("Fatura paga, dê tchau ao seu salário");

    }

    @Override
    public void VerificarPagamento() {
        System.out.println("Sim, você pagou");

    }
}
