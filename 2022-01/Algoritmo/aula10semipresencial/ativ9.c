#include <stdio.h>
#include <math.h>

int main(){
    float n1, n2, n3, media;

    printf("Digite a nota da sua primeira prova>\n");
    scanf("%f%*c", &n1);

    printf("Digite a nota da sua segunda prova>\n");
    scanf("%f%*c", &n2);

    printf("Digite a nota da sua terceira prova>\n");
    scanf("%f%*c", &n3);

    media=(n1+n2+n3)/3;

    if (media>=9.0){
        printf("Voce tirou %.2f, conteito A\n", media);
        printf("Aprovado\n");
    }
    else if (media>=7.5 && media<9.0){
        printf("Voce tirou %.2f, conceito B\n", media);
        printf("Aprovado\n");
    }
    else if (media>=6 && media<7.5){
        printf("Voce tirou %.2f, conceito C\n", media);
        printf("Aprovado\n");
    }
    else{
        printf("Voce tirou %.2f, conceito D\n", media);
        printf("Reprovado");
    }
    return 0;
}