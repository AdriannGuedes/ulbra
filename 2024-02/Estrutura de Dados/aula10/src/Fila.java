public class Fila {

    private String [] elementos;
    private int tamanho;
    public Fila(int capacidade){
        elementos = new String[capacidade];
        tamanho = 0;
    }

    public int tamanho(){
        return this.tamanho;
    }

    public boolean estaVazia(){
        if(tamanho==0){
            return true;
        }else{
            return false;
        }
    }

    public boolean estaCheio(){
        return this.tamanho == this.elementos.length;
    }

    public boolean enfileirar(String e){
        if(!estaCheio()){
            this.elementos[tamanho] = e;
            tamanho++;
            return true;
        }
        return false;
    }

    public String espiar() {
        if(!estaVazia()){
            return this.elementos[0];
        }
        return null;
    }

    public String desenfileirar(){
        if(!estaVazia()){
            String removido = this.elementos[0];
            for(int i = 1; i< tamanho; i++){
                this.elementos[i-1] = this.elementos[i];
            }
            tamanho--;
            return removido;
        }return  null;
    }
}
