#include <stdio.h>
#include <stdlib.h>

int main(){


    float nota1[10], nota2[10], media[10];
    char nome[10][20];
    int i=0, alu=1, lac=0, misc=1, x, opc=0, alt;

    do{
         for (i=lac; i<alu; i++){
            
            printf("Digite o nome do aluno %d:\n", misc);
            scanf("%s", nome);
            printf("Digite a primeira nota do aluno %d:\n", misc);
            scanf("%f%*c", &nota1[i]);
            printf("Digite a segunda nota do aluno %d:\n", misc);
            scanf("%f%*c", &nota2[i]);

            media[i] = (nota1[i] + nota2[i]) / 2;

            printf("Deseja inserir mais algum aluno:(0 Sim, 1 Nao)\n");
            scanf("%d%*c", &alt);

            if (alt==0){
                alu+=1;
                misc++;
                lac+=1;
            }
            else{
                opc+=1;
                break;
            }
            
            
        }
    } while (opc!=1);
    
    printf("\nDigite uma das opcoes abaixo:\n\n");
    printf("1-Listar todos os alunos aprovados\n");
    printf("2-Listar todos os alunos reprovados\n");
    printf("3-Listar todos os alunos com nota maior que uma nota informada pelo usuario\n");
    printf("4-Informar uma posicao e o programa exibir os dados e notas do aluno\n");
    printf("5-Para encerrar o programa\n\n");

    scanf("%d%*c", &opc);



    switch (opc){
    case 1:
    for ( i=0; i<alu; i++){
        if(media[i]>=7){
            printf("Os alunos %s estao aprovado (Media %.2f)\n", nome[i], media[i]);
        }
    }
    
        
        break;

        case 2:
        for ( i=0; i<alu; i++){
            if (media[i]<7){
                printf("O aluno %s esta reprovado (Media %.2f)\n", nome[i], media[i]);
            }
            
        }
        break;

        case 3:
        printf("Digite uma nota:\n");
        scanf("%d%*c", &x);

        for (i=0; i<alu; i++){
            if (media[i]>x){
                printf("O aluno %s tem nota maior que %d", nome[i], x);
            }
            
        }

        break;

        case 4:
        printf("Digite uma posicao para saber os dados de um determinado aluno:\n");
        scanf("%d%*c", &x);
        printf("O aluno %s esta na posicao %d do vetor, com a nota 1 sendo %.2f e a nota 2 sendo %.2f, sendo a media %.2f", nome[x], nota1[x], nota2[x], media[x], x);

        break;

        case 5:
        break;

        
    
    default:
        break;
    }

    return 0;
}