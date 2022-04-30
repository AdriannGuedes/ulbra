#include <stdio.h>
#include <math.h>

int main()
{
    float pes,pol,jardas,milhas;


    printf("Digite a medida em pes :\n");
    scanf("%f%*c", &pes);

    pol = pes*12;
    jardas = pes/3;
    milhas = jardas/1760;

    printf("A midida em polegadas e :%.2f/n\n", pol);

    printf("A medida em jardas e :%.2f/n\n", jardas);

    printf("A medida em milhas e :%.2f/n\n", milhas);

    return 0;
}