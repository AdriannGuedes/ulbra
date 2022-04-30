#include <stdio.h>

int main()
{
    float sal, novosal;

    printf("Digite seu salario: ");
    scanf("%f%*c", &sal);

    novosal = sal+sal*25/100;

    printf("Seu novo salario e:%.2f", novosal);

    return 0;




}