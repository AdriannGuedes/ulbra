public class Eletronico extends Produto{
    @Override
    void calcularPreco() {
        System.out.println("Celular: R$2.999,99");
    }

    @Override
    void exibirDetalhes() {
        System.out.println("Iphone 11\nMemória: 64gb");

    }
}
