public class Estagiario extends Funcionario{
    @Override
    void calcularSalario() {
        System.out.println("O salário do estágiario é de R$1400,00");
    }

    @Override
    void realizarTarefa() {
        System.out.println("O estágiario sofre");

    }
}
