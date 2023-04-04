public class Calculadora {

    double n1;
    double n2;

     double metodos(int opcao){
        switch (opcao){
            case 1:
                double soma=n1+n2;
                return soma;
            case 2:
                double subtracao=n1-n2;
                return subtracao;
            case 3:
                double multiplicacao=n1*n2;
                return multiplicacao;
            case 4:
                double divisao=n1/n2;
                return divisao;
            default:
                System.out.println("Número invalido");
                return 0;

        }


    }
}
