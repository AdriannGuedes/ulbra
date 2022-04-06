#include <stdio.h>
#include <math.h>

int main()
{
    float raio, area;

    printf("Digite o raio do circulo : ");
    scanf("%f%*c", &raio);

    area = 3.1415*pow(raio,2);

    printf("A area do circulo e :%.3f\n", area);

    return 0;
}