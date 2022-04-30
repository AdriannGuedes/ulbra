#include <stdio.h>
#include <math.h>

int main()
/*Programa que recebe preço de um produto, calcula e mostra o novo valor com 10% de desconto*/
{
    float preco,desc,precon;

    printf("Digite o valor do produto:\n");
    scanf("%f%*c", &preco);

    desc =  preco * 10/100;
    precon = preco - desc;

    printf("O produto com desconto fica:%.2f\n", precon);

    return 0;
}