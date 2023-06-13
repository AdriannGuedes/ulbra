public class Roupa extends Produto {

    void calcularPreco() {
        System.out.println("Camiseta: R$50,90");
    }

    @Override
    void exibirDetalhes() {
        System.out.println("Camiseta CalvinKlein Jeans\nTamanho: G");

    }
}
