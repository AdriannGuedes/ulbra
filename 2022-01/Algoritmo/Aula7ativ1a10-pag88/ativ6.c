#include <stdio.h>
#include <math.h>

/*Programa que recebe dois numeros e resolve três operações de acordo com a 
escolha do usuario, se o comando for invalido mostrar mensagem de "erro"*/

int main(){

    float op, num1, num2, poten, raizq1, raizq2, raizc1, raizc2;

    printf("==========Menu==========\n");

    printf("Digite uma opcao de 1 a 3:\n");
    scanf("%f%*c", &op);

    if (op==1){
        printf("Insira um numero:\n");
        scanf("%f%*c", &num1);

        printf("Insira outro numero:\n");
        scanf("%f%*c", &num2);

        poten=pow(num1,num2);

        printf("%.f elevado a %.f e igual a %.f", num1, num2, poten);
    }
    else if (op==2){
        printf("Insira um numero:\n");
        scanf("%f%*c", &num1);

        printf("Insira um numero:\n");
        scanf("%f%*c", &num2);

        raizq1=sqrt(num1);
        raizq2=sqrt(num2);

        printf("A raiz quadrada de %.f e %.2f, e a raiz quadrada de %.f e %.2f\n", num1, raizq1, num2, raizq2);
    }  
    else if (op==3){
        printf("Insira um numero:\n");
        scanf("%f%*c", &num1);

        printf("Insira um numero:\n");
        scanf("%f%*c", &num2);

        raizc1=cbrt(num1);
        raizc2=cbrt(num2);

        printf("A raiz cubica de %.f e %.3f, e a raiz cubica de %.3f e %.3f\n", num1, raizc1, num2, raizc2);
    }
    else{
        printf("Erro(comando invalido)");

        return 0;
    }
    
     
    
    

}