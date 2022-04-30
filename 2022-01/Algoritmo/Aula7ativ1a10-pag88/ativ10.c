#include <stdio.h>
#include <math.h>

/*Programa que soma o custo de fabrica, a porcentagem do distribuidor, e impostos do valor de um 
carro, de acordo com a tabela, que esta no livro*/

int main(){

    float custo,preco_consu;

    printf("Insira o custo de fabrica:\n");
    scanf("%f%*c", &custo);

    if (custo<=12000)
    {
        preco_consu=custo+(custo*5/100);

        printf("O preco para o consumidor e de %.2f:\n", preco_consu);
         
    }
    else if (custo>12000 && custo<25000)
    {
        preco_consu=custo+(custo*10/100)+(custo*15/100);

        printf("O preco para o consumidor e de %.2f:\n", preco_consu);
    }
    else if (custo>=25000)
    {
        preco_consu=custo+(custo*15/100)+(custo*20/100);

        printf("O preco para o consumidor e de %.2f:\n", preco_consu);
    }
    
    return 0;
}