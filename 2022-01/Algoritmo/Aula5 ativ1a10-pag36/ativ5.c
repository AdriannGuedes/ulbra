#include <stdio.h>

int main()
{
    float sal, persent, novosal, aument;

    printf("Digite seu salario: ");
    scanf("%f%*c", &sal);

    printf("Digite a porcentagem de aumento: ");
    scanf("%f%*c", &persent);

    aument = sal*persent/100;

    printf("Voce teve um aumento de: %.2f\n ", aument);

    printf("Seu novo salario e de:%.2f\n", aument+sal);

    return 0;

}