#include <stdio.h>
#include <math.h>

int main()
{
    float num1, num2, r1, r2;

    printf("Digite um numero :\n");
    scanf("%f%*c", &num1);

    printf("Digite um numero :\n");
    scanf("%f%*c", &num2);

    r1 = pow(num1,num2);
    r2 = pow(num2,num1);

    printf("O resultado da potenciacao e :%.2f/n\n", r1);

    printf("O resultao da potencia e :%.2f/n\n", r2);

    return 0;
}