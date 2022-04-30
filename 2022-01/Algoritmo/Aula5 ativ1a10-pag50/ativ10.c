#include <stdio.h>
#include <math.h>

int main()
/* Programa que mostra a area do quadrado*/
{
    int areaquad,lado;

    printf("Digite a medida da lateral do quadrado:\n");
    scanf("%d%*c", &lado);

    areaquad = lado*lado;

    printf("A area do quadrado e:%.d\n", areaquad);

    return 0;
}