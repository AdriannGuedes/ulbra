#include <stdio.h>

int main()
{
    float base, altura, area;

    printf("Digite a mediada da base : ");
    scanf("%f%*c", &base);

    printf("Digite a altura : ");
    scanf("%f%*c", &altura);

    area = (base*altura)/2;

    printf("A area do triangulo e de : %.2f\n", area);

    return 0;
}