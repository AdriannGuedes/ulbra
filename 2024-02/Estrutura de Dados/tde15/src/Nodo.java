public class Nodo<T> {
    T valor;
    Nodo<T> proximo;

    Nodo(T valor) {
        this.valor = valor;
        this.proximo = null;
    }
}
