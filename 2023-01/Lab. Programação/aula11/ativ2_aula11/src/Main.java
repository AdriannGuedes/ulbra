public class Main {
    public static void main(String[] args) {
        Veiculo veiculo = new Veiculo();
        veiculo.marca= "Volks";
        veiculo.modelo="Fusca";

        System.out.println(veiculo.marca);
        System.out.println(veiculo.modelo);

        Carro carro = new Carro();
        carro.marca="Fiat";
        carro.modelo="Uno";
        carro.numPassageiros=7;
        System.out.println(carro.marca);
        System.out.println(carro.modelo);
        System.out.println(carro.numPassageiros);


    }
}