#include <stdio.h>
#include <math.h>

int main()
/*Programa que recebe o peso da pessoa e mostra o novo peso se a pessoa engordar 15% e 20%*/

{
    float peso,mais15,mais20;

    printf("Digite o peso:\n");
    scanf("%f%*c", &peso);

    mais15 = (peso  * 15/100) + peso;
    mais20 = (peso * 20/100) + peso;

    printf("Seu peso se engordar 15:%.3f\n", mais15);
    printf("Seu peso se engordar 20:%.3f\n", mais20);

    return 0;


}