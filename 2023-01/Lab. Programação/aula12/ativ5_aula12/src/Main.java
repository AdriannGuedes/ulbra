public class Main {
    public static void main(String[] args) {
       Livro livro1 = new Livro();
       livro1.calcularPreco();
       livro1.exibirDetalhes();
        System.out.println("-----");

        Roupa camiseta = new Roupa();
        camiseta.calcularPreco();
        camiseta.exibirDetalhes();
        System.out.println("-----");

        Eletronico celular = new Eletronico();
        celular.calcularPreco();
        celular.exibirDetalhes();
    }
}