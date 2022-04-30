#include <stdio.h>
#include <math.h>

int main()
/*Programa que recebe 2 números e divide um pelo outro, tendo que ser o segundo numero maior que 0*/
{
    float num1, num2, div;

    printf("Digite o primeiro numero:\n");
    scanf("%f%*c", &num1);

    printf("Digite o segundo numero:\n");
    scanf("%f$%*c", &num2);

    /*if = se for */
    if (num2 > 0)
    {
        printf("O valor da divisao:%.f", num1 / num2);
        }
    /*else = se nao for*/
    else
    {
        printf("O segundo numero deve ser maior que 0.");
        }

    return 0;
}