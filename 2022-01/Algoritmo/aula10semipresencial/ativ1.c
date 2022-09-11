#include <stdio.h>
#include <math.h>

int main(){

    float num1, num2, resul;

    printf("Digite o primeiro numero:\n");
    scanf("%f%*c", &num1);

    printf("Digite o segundo numero:\n");
    scanf("%f%*c", &num2);

    if (num1>num2){
        resul=num1+100;
        printf("O resultado e: %.2f\n", resul);
    }
    else if (num2>num1){
        resul=num2+100;
        printf("O resultado e: %.2f", resul);
    }
    else{
        printf("Os numeros sao iguais(tente novamente)\n");
    }
    return 0;
    
}