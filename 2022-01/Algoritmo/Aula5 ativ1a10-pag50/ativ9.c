#include <stdio.h>
#include <math.h>

int main()
/*Programa que mostra a area do trapezio*/
{
    float areatrap, basemaior, basemenor, alt;

    printf("Digite a medida da base maior do trapezio:\n");
    scanf("%f%*c", &basemaior);

    printf("Digite a medida da base menor do trapezio:\n");
    scanf("%f%*c", &basemenor);

    printf("Digite a altura do trapezio:\n");
    scanf("%f%*c", &alt);

    areatrap = ((basemaior + basemenor) * alt)/2;

    printf("A area do trapezio e:%.2f\n", areatrap);

    return 0;
    
}