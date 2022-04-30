#include <stdio.h>
#include <math.h>

int main()
/*Programa que recebe 2 notas com seus pesos definidos como 2 e 3 respectivamente, 
calcula e mostra a media ponderada dessas notas*/
{
    float nota1,p1,nota2,p2;

    printf("Digite a primeira nota:\n");
    scanf("%f%*c", &nota1);

    printf("Digite a segunda nota:\n");
    scanf("%f%*c", &nota2);

    p1 = 2;
    p2 = 3;


    printf("A sua media e:%.2f\n", (nota1*p1+nota2*p2)/(p1+p2));

    return 0;
}