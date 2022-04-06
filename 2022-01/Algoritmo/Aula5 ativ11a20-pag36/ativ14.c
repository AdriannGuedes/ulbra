#include <stdio.h>
#include <math.h>

int main()
{
    float ano_atual, ano_nasc, id_atual, id_2050;

    printf("Digite o ano em que estamos");
    scanf("%f%*c", &ano_atual);

    printf("Digite o ano do seu nascimento");
    scanf("%f%*c", &ano_nasc);

    id_atual = ano_atual-ano_nasc;
    id_2050 = 2050-ano_nasc;

    printf("Sua idade atualmente e :%.2f/n\n", id_atual);

    printf("Sua idade em 2050 sera :%.2f/n\n", id_2050);

    return 0;
}