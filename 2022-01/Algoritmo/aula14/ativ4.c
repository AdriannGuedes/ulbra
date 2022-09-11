#include <stdio.h>

int main()
{

    float n1, n2;
    float div;
    char opcao;
    do
    {
         printf("Digite o valor de n1:\n");
    scanf("%f%*c", &n1);
    do
    {
        printf("Digite o valor de n2:\n");
        scanf("%f%*c", &n2);
        if (n2 == 0)
        {
            printf("Valor invalido, tente novamente\n");
        }

    } while (n2 == 0);
    div = n1 / n2;

    printf("A divisao de %.2f / %.2f e %.2f", n1, n2, div);
    printf("Deseja fazer outro calculo(s/n)\n");
    scanf("%c%*c", &opcao);
    } while (opcao=='s');

    return 0;
    

    
}
