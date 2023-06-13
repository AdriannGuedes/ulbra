public class Livro extends Produto{
    @Override
    void calcularPreco() {
        System.out.println("Livro: R$21,90");
    }

    @Override
    void exibirDetalhes() {
        System.out.println("Percy Jackson e o Mar de Monstros\nPágs:346");

    }
}
