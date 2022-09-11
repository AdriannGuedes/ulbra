#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Preencha um vetor com 100 números inteiros de forma randômica. Quando o número randômico for 999 o preenchimento deve ser encerrado.
Após  preenchido   O Programa deve possibilitar 4 opções:
1- exibir uma lista os números presentes no vetor, não incluído o 999.
2-  imprimir o vetor na ordem inversa.
3-  Exibir o maior número
4 - Exibir quantos números foram sorteados.
5-Encerrar o programa.*/


int main(){

    int vetor[100], op, i, cont = 0, maior = 0;
    srand(time(NULL));

    for (i = 0; i < 100; i++)
    {
        vetor[i] = rand() % 1000;
        printf("%d ", vetor[i]);
        cont++;

        if (vetor[i] == 999)
        {
            break;
        }
    }

    printf("\nQuantidade de numeros no vetor: %d\n", cont);

    do
    {
        printf("\n\nDigite um numero de 1 a 5:\n\n");
        printf("1-Exibe uma lista dos numeros presentes no vetor sem incluir o 999;\n");
        printf("2-Imprime o vetor na ordem inversa;\n");
        printf("3-Exibir o maior numero\n");
        printf("4-Exibir quantos numeros foram sorteados\n");
        printf("5-Encerra o programa\n");

        scanf("%d%*c", &op);

        switch (op)
        {
        case 1:
            if (vetor[i] == 999)
            {
                for (i = 0; i < cont - 1; i++)
                {
                    printf("%d ", vetor[i]);
                }
            }
            else
            {
                for (i = 0; i < cont; i++)
                {
                    printf("%d ", vetor[i]);
                }
            }

            break;
        case 2:
            printf("\nVetor na ordem inversa:\n");
            for (i = cont - 1; i >= 0; i--)
            {
                printf("%d ", vetor[i]);
            }

            break;
        case 3:
            for (i = 0; i < cont; i++)
            {
                if (vetor[i] > maior)
                {
                    maior = vetor[i];
                }
            }
            printf("O maior numero e %d", maior);

            break;
        case 4:
            printf("\nForam sorteados %d numeros\n", cont);
            break;

        default:

            break;
        }

    } while (op != 5);

    return 0;
}