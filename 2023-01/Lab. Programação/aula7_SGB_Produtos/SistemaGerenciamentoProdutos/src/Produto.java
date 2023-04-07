public class Produto {

    public String nome;
    public int Quant;
    public double Preco;

    public Produto(String nome, double preco, int quantidade) {
        this.nome = nome;
        this.Preco = preco;
        this.Quant = quantidade;
    }



    String getnome(){
        return nome;
    }

    String  setnome( String nome){
        this.nome=nome;
        return nome;

    }

    int getQuant(){
        return Quant;
    }

    int setQuant( int nome){
        this.Quant=Quant;
        return Quant;

    }

    double getPreco(){
        return Preco;
    }

    double setPreco( double Preco){
        this.Preco=Preco;
        return Preco;

    }




}
