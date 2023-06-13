public class Usuário implements Persistente {

    String name;
    int Idade;
    @Override
    public void Salvar(String nome, int idade) {
        name = name;
        Idade = idade;

    }

    @Override
    public void Deletar() {
        this.name = null;
        this.Idade = 0;

    }

    @Override
    public void Atualizar(String nome, int idade, int seletor) {
        switch (seletor){
            case 1:
                name = name;
                break;
            case 2:
                Idade = idade;
                break;
            case 3:
                name = name;
                Idade = idade;
                break;
            default:
                System.out.println("Seletor não reconhecido\n(1-Nome\t2-Idade\t3-Ambos)");
                break;
        }

    }

    @Override
    public void Buscar() {
        System.out.println("User: "+name+" Idade: "+Idade);

    }
}
