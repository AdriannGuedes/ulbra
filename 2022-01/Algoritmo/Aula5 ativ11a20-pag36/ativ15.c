#include <stdio.h>
#include <math.h>

int main()
{
    float p_fabr,per_ld,per_imp,vlr_lucdis,vlr_imp,p_final;

    printf("Digite o preco de fabrica :\n");
    scanf("%f%*c", &p_fabr);

    printf("Digite o percentual de lucro do distribuidor :\n");
    scanf("%f%*c", &per_ld);

    printf("Digite o percentual de impostos :\n");
    scanf("%f%*c", &per_imp);

    vlr_lucdis = p_fabr*per_ld/100;
    vlr_imp = p_fabr*per_imp/100;
    p_final = p_fabr+vlr_lucdis+vlr_imp;

    printf("O lucro do distribuidor e de :%.2f/n\n", vlr_lucdis);

    printf("O imposto sobre o carro e de :%.2f/n\n", vlr_imp);

    printf("O valor total do carro de :%.2f/n\n", p_final);

    return 0;
}