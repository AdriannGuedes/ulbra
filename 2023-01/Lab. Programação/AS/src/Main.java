public class Main {
    public static void main(String[] args) {
        Zoo Madagascar = new Zoo(7, 14);

        //Criando animais
        Mamifero leao = new Mamifero("Alex", 9, 160, "Dançarino", "comprida");
        Ave papagaio = new Ave("Rico", 49, 2.4, "Gago", 2.4);
        Mamifero tigre = new Mamifero("Tigresa", 12, 200, "Pintada", "curta");

        //Adicionando animais ao zoologico
        Madagascar.AdicionarAnimal(leao);
        Madagascar.AdicionarAnimal(papagaio);
        Madagascar.AdicionarAnimal(tigre);

        //Criando funcionarios
        Veterinario joao = new Veterinario("João", "Veterinário", "Mamiferos", 5000);
        Veterinario tiago = new Veterinario("tiago", "Veterinario", "Aves", 6000);

        //Adicionando funcionarios ao zoologico
        Madagascar.AdicionarFuncionario(joao);
        Madagascar.AdicionarFuncionario(tiago);

        //Interagindo com animais

        leao.movimentar();
        leao.movimentar("Lentamente");
        tigre.Amamentar();
        papagaio.realizarTruque();
        papagaio.Voar();

        //Interagindo com veterinarios

        tiago.realizarExame(leao);
        joao.realizarExame(papagaio);


    }

}
