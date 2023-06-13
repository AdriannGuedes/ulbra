public class Gerente extends Funcionario{
    @Override
    void calcularSalario() {
        System.out.println("O salário do gerente é de R$4500,00");
    }

    @Override
    void realizarTarefa() {
        System.out.println("O gerente gerencia o setor de vendas");

    }
}
