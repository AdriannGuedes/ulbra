#include <stdio.h>
#include <math.h>

int main()
/*Programa que converte kg em gramas*/
{
    float pesokg,pesog;

    printf("Digite o peso:\n");
    scanf("%f%*c", &pesokg);

    pesog = pesokg * 1000;

    printf("O peso em gramas e de:%.f\n", pesog);

    return 0;

}