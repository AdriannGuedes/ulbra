#include <stdio.h>
#include <math.h>

int main()
{
    float num1, num2;

    printf("Digite o primeiro numero:\n");
    scanf("%f%*c", &num1);

    printf("Digite o segundo numero:\n");
    scanf("%f%*c", &num2);

    if (num1>num2){
        printf("O numero maior e:%f\n", num1);
    }
    
    else if (num2>num1){
        printf("O numero maior e:%f\n", num2);
    }

    else
    {
       printf("Os numeros sao iguais");
    }
    
    

    return 0;
    
    
}