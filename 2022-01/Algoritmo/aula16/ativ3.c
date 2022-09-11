#include <stdio.h>
#include <math.h>

int main()
{

    int TAM = 3;
    int tem = 0;
    int codProdutos[10];
    int qtddProdutos[10];
    int i = 0;
    int codicliente;
    int codiprod, qtdprod;

    for (int i = 0; i < TAM; i++)
    {
        printf("Digite o codigo do produto\n");
        scanf("%d%*c", &codProdutos[i]);
        printf("Digite a qunatidade do produto\n");
        scanf("%d%*c", &qtddProdutos[i]);

        do
        {
            printf("Digite o codigo do cliente\n");
            scanf("%d%*c", &codicliente);
            if (codicliente != 0)
            {
                printf("Digite o codigo do produto:\n");
                scanf("%d%*c", &codiprod);
                for (int i = 0; i < TAM; i++)
                {
                    if (codiprod == codProdutos[i])
                    {
                        tem = 1;
                        printf("Digite a quantidade do produto %d", codiprod);
                        scanf("%d%*c", &qtdprod);
                        if (qtdprod <= qtddProdutos[i])
                        {
                            printf("Pedido atendido,Obrigado e volte sempre\n");
                            qtddProdutos[i] = qtddProdutos[i] - qtdprod;
                        }
                        else
                        {
                            printf("Nao temos em estoque, nossa quantidade maxima e %d", qtddProdutos[i]);
                        }
                    }
                }
                if (tem != 1)
                {
                    printf("O codigo nao existe\n");
                }
            }
        }while (codicliente != 0);
    } 
    
    printf("Estoque atualizado\n");
    for (int i = 0; i < TAM; i++)
    {
        printf("Produto cod %d, qunatidade %d\n", codProdutos[i], qtddProdutos[i]);
    }
}
