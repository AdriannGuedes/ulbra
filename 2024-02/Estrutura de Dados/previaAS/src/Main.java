import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Stack;

public class Main {
    public static void main(String[] args) {
        ArrayList<String> lista = new ArrayList<>();

        lista.add("Antonio");
        lista.add("Joaquim");
        lista.add(1, "Jorge");
        System.out.println(lista);

        LinkedList<Integer> numeros = new LinkedList<>();

        numeros.add(5);
        numeros.addFirst(1);
        numeros.addLast(10);
        System.out.println(numeros);
        Stack <String> pilha = new Stack<>();
        pilha.add("A");
        pilha.add("B");
        pilha.add("C");
        System.out.println(pilha.peek());

        Queue<Integer> fila = new LinkedList<>();

        fila.add(10);
        fila.add(20);
        fila.add(30);
        fila.remove();

        System.out.println(fila.peek());
    }
}