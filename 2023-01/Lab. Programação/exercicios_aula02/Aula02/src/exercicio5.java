public class exercicio5 {

    public static void main(String[] args) {

        int dia=29;
        int mes=02;
        int ano=2023;

        if (ano>0){
            if (mes!=2 && mes<=12){
                if (dia>0 && dia<=31){
                    System.out.println("Data:"+dia+"/"+mes+"/"+ano);
                }

                else{System.out.println("Data invalida");
                }

            }
            else if (mes==2){
                if (dia>0 && dia<=28){
                    System.out.println("Data:"+dia+"/"+mes+"/"+ano);
                }else{
                    System.out.println("Data invalida");
                }


            }
            else{
                System.out.println("Data invalida");
            }

        }
        else{System.out.println("Data invalida");
        }
    }





    }

