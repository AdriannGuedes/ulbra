#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float ang, alt, escad, rad;

    printf("Digite o angulo:\n");
    scanf("%f%*c", &ang);

    printf("Digite a altura:\n");
    scanf("%f%*c", &alt);

    rad = ang*3.14/180;
    escad = alt / rad;

    printf("A medida da escada e:%.1f/n\n", escad);

    return 0;
}