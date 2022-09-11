#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    float cilindrada, N, D, C;

    printf("Digite a quantidade de cilindros que seu motor possui:\n");
    scanf("%f%*c", &N);
    printf("Digite o diametro do pistao:\n");
    scanf("%f%*c", &D);
    printf("Digite o curso do pistao:\n");
    scanf("%f%*c", &C);

    cilindrada=N*(3,14*((((pow D,2)/4)*C));

    printf("Ciclindrada: %.f",cilindrada);

    return 0;



}