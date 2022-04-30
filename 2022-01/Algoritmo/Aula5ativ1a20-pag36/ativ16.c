#include <stdio.h>
#include<math.h>

int main()
{
    float hrs_t,vlr_sal_min,vlr_hr_trab;
    float vlr_sal_bruto,imp,vlr_sal_liq;

    printf("Digite a quantidade de horas trabalhadas :\n");
    scanf("%f%*c", &hrs_t);

    printf("Digite o valor do salario minimo :\n");
    scanf("%f%*c", &vlr_sal_min);

    vlr_hr_trab = vlr_sal_min/2;
    vlr_sal_bruto = vlr_hr_trab*hrs_t;
    imp = vlr_sal_bruto*3/100;
    vlr_sal_liq = vlr_sal_bruto-imp;

    printf("Seu salario liquido e :%.2f/n\n", vlr_sal_liq);

    return 0;
}