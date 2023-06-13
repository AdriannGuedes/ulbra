public interface Persistente {

    void Salvar(String nome, int idade);
    void Deletar();
    void Atualizar(String nome, int idade, int seletor);
    void Buscar();
}
