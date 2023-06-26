public class Veterinario extends Funcionario{

    private String especialidade;

    public Veterinario(String nome, String cargo, String especialidade, double salario)
    {
        super(nome,cargo,salario);
        this.especialidade=especialidade;
    }

    public void realizarExame(Animal animal)
    {
        System.out.println("O veterinário "+getNome()+" está realizando um exame no "+animal.getNome());
    }
}
