#include <stdio.h>
#include <math.h>

int main()

{
    float salario,cheque1,cheque2,cpmf1,cpmf2,saldo;

    printf("Digite o seu salario:\n");
    scanf("%f%*c", &salario);

    printf("Digite o valor do primeiro cheque:\n");
    scanf("%f%*c", &cheque1);

    printf("Digite o valor dos segundo cheque:\n");
    scanf("%f%*c", &cheque2);

    cpmf1 = cheque1*0.38/100;
    cpmf2 = cheque2*0.38/100;
    saldo = salario-cheque1-cheque2-cpmf1-cpmf2;

    printf("Seu saldo e de : %.2f/n\n", saldo);

    return 0;
}