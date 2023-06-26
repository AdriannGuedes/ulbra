public class Zoo {
    private Animal[] animais;
    private Funcionario[] funcionarios;

    private int numAnimais;
    private int numFuncionarios;

    public Zoo(int tamanhoAnimais, int tamanhoFuncionarios)
    {
        animais = new Animal[tamanhoAnimais];
        funcionarios = new Funcionario[tamanhoFuncionarios];
        numAnimais=0;
        numFuncionarios=0;
    }

    public void AdicionarAnimal(Animal animal)
    {
        if (numAnimais<animais.length)
        {
            animais[numAnimais]=animal;
            numAnimais++;
            System.out.println("Animal adicionado");
        }
        else
        {
            System.out.println("Não temos mais espaço no zoo!!");
        }
    }

    public void AdicionarFuncionario(Funcionario funcionario)
    {
        if (numFuncionarios<funcionarios.length)
        {
            funcionarios[numFuncionarios]=funcionario;
            numFuncionarios++;
            System.out.println("Funcionário contratado");
        }
        else
        {
            System.out.println("Não temos mais vagas!!");
        }
    }
}
