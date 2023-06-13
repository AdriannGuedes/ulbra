public class Main {
    public static void main(String[] args) {
        String[] cores = {"vermelho", "azul", "verde", "amarelo", "roxo"};

        System.out.println("Cores na ordem inicial:");
        for(int i=0; i< cores.length; i++)
        {
            System.out.println(cores[i]);
        }

        System.out.println("Cores na ordem inversa:");
        for (int i= cores.length-1; i>=0; i--)
        {
            System.out.println(cores[i]);
        }
    }
}