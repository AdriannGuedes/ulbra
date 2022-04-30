#include <stdio.h>
#include <math.h>

int main()
/*Programa que recebe 3 numero e os multiplica*/
{
    float num1,num2,num3,mult;

    printf("Digite o primeiro numero:\n");
    scanf("%f%*c", &num1);

    printf("Digite o segundo numero:\n");
    scanf("%f%*c", &num2);

    printf("Digite o terceuro numero:\n");
    scanf("%f%*c", &num3);

    mult = num1 * num2 * num3;

    printf("Oresultado da multiplicacao e:%.f\n", mult);

    return 0;


}