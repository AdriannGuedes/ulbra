public class Main {
    public static void main(String[] args) {
        Persistente PaulinOLOko = new Usuário();

        PaulinOLOko.Salvar("Paulin", 22);
        PaulinOLOko.Buscar();

        PaulinOLOko.Atualizar("Adrian",19,1);
        PaulinOLOko.Buscar();

        PaulinOLOko.Deletar();
        PaulinOLOko.Buscar();
    }
}