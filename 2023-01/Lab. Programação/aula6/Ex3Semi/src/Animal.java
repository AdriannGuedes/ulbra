public class Animal {
    public String nome;
    public String especie;
    public int idade;

    public void emitirSom(){
        System.out.println("O "+nome+" está fazendo barulho");
    }

    public void dormir(){
        System.out.println(nome+", que é um "+especie+", cansou e agora está dormindo");
    }
}
