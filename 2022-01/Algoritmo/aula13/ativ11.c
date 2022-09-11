#include <stdio.h>

int main()
{
    char nome[100];
    float matric, nota1, nota2, nota3, media;

    for (int i = 0; i < 10; i++){

        printf("Digite o nome do aluno %d:\n ", i + 1);
        scanf("%s%*c", &nome);
        printf("Digite a matricula:\n ");
        scanf("%f%*c", &matric);
        printf("Digite a nota1:\n ");
        scanf("%f%*c", &nota1);
        printf("Digite a nota2:\n ");
        scanf("%f%*c", &nota2);
        printf("Digite a nota3:\n ");
        scanf("%f%*c", &nota3);

        media = (nota1 + nota2 + nota3) / 3;

        if (media >= 7){
            printf("O aluno %s matricula %f foi aprovado\n", nome, matric);
        }
        else
        {
            printf("O aluno %s nao foi aprovado\n", nome);
        }
    }

    return 0;
}
