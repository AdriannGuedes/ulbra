#include <stdio.h>
#include <math.h>

int main(){

    int num1, num2;

    printf("Digite o primeiro numero:\n");
    scanf("%d%*c", &num1);

    printf("Digite o segundo numero:\n");
    scanf("%d%*c", &num2);

    if (num1%2==0 && num2%2==0){
        printf("O numero %d e multiplo de 2\n", num1);
        printf("O numero %d e multiplo de 2\n", num2);

    }
    else if (num1%2==0 && num2%2>0)
    {
        printf("O numero %d e multiplo de 2\n", num1);
        printf("O numero %d nao e multiplo de 2\n", num2);
    }
     else if (num1%2>0 && num2%2==0)
    {
        printf("O numero %d nao e multiplo de 2\n", num1);
        printf("O numero %d e multiplo de 2\n", num2);
    }
    else{
        printf("Esses numeros nao e multiplos de 2.\n");
    }
    return 0;
    
    
}