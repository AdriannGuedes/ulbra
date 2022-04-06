#include <stdio.h>

int main()
{
    float dep, taxa, rend, total;

    printf("Digite o valor do deposito: ");
    scanf("%f%*c", &dep);

    printf("Digite o valor da taxa: ");
    scanf("%f%*c", &taxa);

    rend = dep*taxa/100;
    total = dep+rend;

    printf("O rendimento e de : %.2f\n", rend);
    printf("O total e de : %.2f\n", total);

    return 0;
}