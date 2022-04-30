#include <stdio.h>
#include <math.h>

/*Programa que recebe o saldo medio de um cliente e calcula o valor de credito, de acordo com a
tabela*/

int main(){

    float saldo_m, credito;

    printf("Digite o seu saldo medio do ultimo ano:\n");
    scanf("%f%*c", & saldo_m);

    if (saldo_m>400)
    {
        credito=saldo_m*30/100;

        printf("O seu saldo medio e de %.2f e seu credito especial e de %.2f", saldo_m, credito);
    }
    else if (saldo_m<=400 && saldo_m>300)
    {
        credito=saldo_m*25/100;

        printf("O seu saldo medio e de %.2f e seu credito especial e de %.2f", saldo_m, credito);
    }
    else if (saldo_m<=300 && saldo_m>200)
    {
        credito=saldo_m*20/100;

        printf("O seu saldo medio e de %.2f e seu credito especial e de %.2f", saldo_m, credito);
    }
    else if (saldo_m>0 && saldo_m<=200)
    {
        credito=saldo_m*10/100;

        printf("O seu saldo medio e de %.2f e seu credito especial e de %.2f", saldo_m, credito);
    }

    return 0;
}