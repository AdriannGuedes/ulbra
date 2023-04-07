public class Loja {

    Produto produto1;
    Produto produto2;
    Produto produto3;

    public Loja() {
        produto1 = null;
        produto2 = null;
        produto3 = null;
    }

    public void adicionarProduto(Produto produto) {
        if (produto1 == null) {
            produto1 = produto;
            System.out.println("Produto1 adicionado");
        }
        else if (produto2 == null) {
            produto2 = produto;
            System.out.println("Produto2 adicionado");
        }
        else if (produto3 == null) {
            produto3 = produto;
            System.out.println("Produto3 adicionado");

        }
        else {
            System.out.println("A loja ja está cheia.");
        }
    }

    //Método removerProduto que testa se os produtos 1,2,3 nao estao nulos e testa para ver se o
    // produto que deseja ser removido existe na lista de produtos.
    public void removerProduto(Produto produto) {
        if (produto1 != null && produto1.getnome().equals(produto.getnome())) {
            produto1 = null;
        } else if (produto2 != null && produto2.getnome().equals(produto.getnome())) {
            produto2 = null;
        } else if (produto3 != null && produto3.getnome().equals(produto.getnome())) {
            produto3 = null;
        } else {
            System.out.println("Produto não encontrado.");
        }
    }

    public void listarProduto(){
        System.out.println("Produtos dísponiveis na loja:");
        if (produto1 != null){
            System.out.println("Nome: "+produto1.getnome()+", Preço "+produto1.getPreco()+", Quantidade"+produto1.getQuant());
        }
        else if (produto2 != null) {
            System.out.println("Nome: "+produto2.getnome()+", Preço "+produto2.getPreco()+", Quantidade"+produto2.getQuant());
        } else if (produto3 != null) {
            System.out.println("Nome: "+produto3.getnome()+", Preço "+produto3.getPreco()+", Quantidade"+produto3.getQuant());
        }
    }

    public void venderProduto(Produto produto, int Quant){
        if (produto1 != null && produto1.getnome().equals(produto.getnome())) {
            if (produto1.getQuant() >= Quant) {
                produto1.setQuant(produto1.getQuant() - Quant);
                System.out.println("Venda realizada com sucesso: " + Quant + " unidades de " + produto1.getnome());
            } else {
                System.out.println("Quantidade em estoque insuficiente para a venda: " + produto1.getQuant() + " unidades de " + produto1.getnome());
            }
        }
        else if (produto2 != null && produto2.getnome().equals(produto.getnome())) {
            if (produto2.getQuant() >=Quant){
                produto2.setQuant(produto2.getQuant() - Quant);
                System.out.println("Venda realizada com sucesso: "+ Quant + "unidades de" + produto2.getnome());

            } else {
                System.out.println("Quantidade em estoque insuficiente para a venda: "+ produto2.getQuant() + " unidades de " + produto2.getnome());
            }
        }
        else if (produto3 != null && produto3.getnome().equals(produto.getnome())) {
            if (produto3.getQuant() >=Quant){
                produto3.setQuant(produto3.getQuant() - Quant);
                System.out.println("Venda realizada com sucesso: "+ Quant + "unidades de" + produto3.getnome());

            } else {
                System.out.println("Quantidade em estoque insuficiente para a venda: "+ produto3.getQuant() + " unidades de " + produto3.getnome());
            }
        }



    }

}
