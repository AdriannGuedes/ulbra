#include <stdio.h>
#include <math.h>

int main()
/*Programa que recebe sarlario fixo, 4% de comissao sobre o valor das vendas, 
calcula e mostra o salario final com o valor da comissao*/
{
    float salfix,comi,vend,salfin;

    printf("Digite o salario:\n");
    scanf("%f%*c", &salfix);

    printf("Digite o valor total das vendas:\n");
    scanf("%f%*c", &vend);

    comi = vend * 4/100;
    salfin = comi + salfix;

    printf("A comissao e de:%.2f\n", comi);

    printf("O salario final e de:%.2f\n", salfin);

    return 0;
}