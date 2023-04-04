public class Main {
    public static void main(String[] args) {

        Carro meuCarro = new Carro();
        meuCarro.modelo = "Uno top";
        meuCarro.cor = "cinza";
        meuCarro.ano = 2009;
        meuCarro.marca = "Fiat";

        meuCarro.acelerar();
        meuCarro.frear();

    }
}