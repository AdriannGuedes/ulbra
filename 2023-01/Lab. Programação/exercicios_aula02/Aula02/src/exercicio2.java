import org.w3c.dom.ls.LSOutput;

public class exercicio2 {
    public static void main(String[] args) {

        int op=4;
        switch (op){
            case 1:
                int resul=0;
                for(int i=10; i<=25; i++){
                    resul=i;
                    System.out.println(resul);
                }

                break;

            case 2:
                int soma=0;

                for(int i=0; i<=100; i+=2 ){
                    soma=soma+i;
                }
                System.out.println(soma);
                break;
            case 3:
                int result=0;
                int limite=0;
                for (int i=0; i<=100; i++){
                    result=i;

                    limite=result+i;
                    if (limite<100){
                        System.out.println(result);
                    }
                }
                break;
            case 4:
                int resultado;
                int tabuada=9;

                 for (int i=1; i<=10; i++){
                     resultado=tabuada*i;
                     System.out.println(tabuada+"x"+i+"="+resultado);
                 }
                 break;

        }





    }






}
