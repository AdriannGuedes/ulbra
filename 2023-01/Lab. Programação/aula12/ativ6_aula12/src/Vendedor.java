public class Vendedor extends Funcionario{

    @Override
    void calcularSalario() {
        System.out.println("O salário do vendedor é de R$3800,00");
    }

    @Override
    void realizarTarefa() {
        System.out.println("O vendedor fica responsável por " +
                "atrair e vender produtos ao cliente, além de claro " +
                "ensinar ao estágiario tecnicas de venda");

    }
}
