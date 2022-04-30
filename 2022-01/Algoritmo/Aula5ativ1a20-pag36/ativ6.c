#include <stdio.h>

int main()
{
    float sal, salrec, grat, imp;

    printf("Digite seu salario: ");
    scanf("%f%*c", &sal);

    grat = sal*5/100;
    imp = sal*7/100;

    salrec = sal+grat-imp;

    printf("Voce ira receber um salario de: %.2f\n", salrec);

    return 0;
}