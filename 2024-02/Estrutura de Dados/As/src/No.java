public class No implements Comparable<No>{
    String cidade;
    int distancia, custo;

    public No(String cidade, int distancia, int custo) {
        this.cidade = cidade;
        this.distancia = distancia;
        this.custo = custo;
    }

    @Override
    public int compareTo(No outro) {
        return Integer.compare(this.distancia, outro.distancia);
    }
}
