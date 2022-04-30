#include <stdio.h>
#include <math.h>

int main()
/*Programa que recebe 2 numeros e subtrai um do outro*/
{
 
float num1, num2,sub;

printf("Digite o primeiro numero:\n");
scanf("%f%*c", &num1);

printf("Digite o segundo numero:\n");
scanf("%f%*c", &num2);

sub = num1 - num2;

printf("O resultado da subtracao e:%.2f\n", sub);

return 0;
}

