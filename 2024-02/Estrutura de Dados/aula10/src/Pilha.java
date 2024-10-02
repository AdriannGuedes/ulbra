public class Pilha {
    private String [] elementos;
    private int tamanho;
    public Pilha(int capacidade){
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

    public boolean empilhar(String e){
        if(!estaCheio()){
            this.elementos[tamanho] = e;
            tamanho++;
            return true;
        }
        return false;
    }

    public String desempilhar(){
        if(!estaVazia()){
            String elementoRemovido = this.elementos[tamanho-1];
            tamanho --;
            this.elementos[tamanho] = null;
            return elementoRemovido;
        }
        return null;
    }

    public String toString() {
        String s = "[";
        for (int i = 0; i < tamanho; i++){
            s += elementos[i];
            if(i < tamanho - 1){
                s += ",";
            }
        }
        s += "]";
        return s;
    }

    public String espiar(){
        if(!estaVazia()){
            return this.elementos[tamanho-1];
        }
        return null;
    }


}
