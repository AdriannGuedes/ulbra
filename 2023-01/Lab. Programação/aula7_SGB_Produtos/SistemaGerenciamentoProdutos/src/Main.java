public class Main {
    public static void main(String[] args) {
        Produto produto1 = new Produto("Civic",48.000,3);
        Produto produto2 = new Produto("Palio Sporting",43.000,2);
        Produto produto3 = new Produto("Palio 1.8R", 28.000, 1);
        Loja loja = new Loja();
        loja.adicionarProduto(produto1);
        loja.adicionarProduto(produto2);
        loja.adicionarProduto(produto3);
        loja.listarProduto();


    }
}