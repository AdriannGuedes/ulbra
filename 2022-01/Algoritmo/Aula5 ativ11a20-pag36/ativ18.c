#include <stdio.h>
#include <math.h>

int main()
{
    float peso_saco,racao_gato1,racao_gato2,total_final;

    printf("Infomre o peso do saco de racao:\n");
    scanf("%f%*c", &peso_saco);

    printf("Quantidade de racao para o gato 1:\n");
    scanf("%f%*c", &racao_gato1);

    printf("Quantidade de racao pra o gato 2:\n");
    scanf("%f%*c", &racao_gato2);

    racao_gato1 = racao_gato1/1000;
    racao_gato2 = racao_gato2/1000;
    total_final = peso_saco-5*(racao_gato1+racao_gato2);

    printf("Apos 5 dias retarao:%.2f/n\n", total_final);

    return 0;
}