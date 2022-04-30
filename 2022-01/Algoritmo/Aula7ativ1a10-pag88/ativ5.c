#include <stdio.h>
#include <math.h>

/*Programa que mostra opcoes de calculos ao usuario*/

int main(){

    float op, num1, num2, media, dif, soma, div;

    printf("==========Menu==========\n\n");

    printf("Digite um comando de 1 a 4:\n");
    scanf("%f%*c", &op);

    if (op==1)
    {
        printf("Digite o primeiro numero:\n");
        scanf("%f%*c", &num1);

        printf("Digite o segundo numero:\n");
        scanf("%f%*c", &num2);

        media=(num1+num2)/2;

        printf("A media e: %.1f\n", media);
    }
    else if (op==2)
    {
        printf("Insira o primeiro numero:\n");
        scanf("%f%*c", &num1);

        printf("Insira o segundo numero:\n");
        scanf("%f%*c", &num2);

        if (num1>num2)
        {
            dif=num1-num2;
            printf("A diferenca e: %.1f\n", dif);
        }
        if (num2>num1)
        {
            dif=num2-num1;
            printf("A diferenca e: %.1f\n", dif);
        }
        
        
    }
    else if (op==3)
    {
        printf("Digite o primeiro numero:\n");
        scanf("%f%*c", &num1);

        printf("Digite o segundo numero:\n");
        scanf("%f%*c", &num2);

        soma=num1+num2;

        printf("O produto entre esses numeros e: %.1f\n", soma);
    }
    else if (op==4)
    {
        printf("Digite o primeiro numero:\n");
        scanf("%f%*c", &num1);

        printf("Digite o segundo numero(acima de 0):\n");
        scanf("%f%*c", &num2);

        div=num1/num2;

        printf("O resultado da divisao e: %.1f\n", div);
    }

    else
    {
        printf("Opcao invalida\n");
        
    }
    

    return 0;
    
    
    
    
    

}