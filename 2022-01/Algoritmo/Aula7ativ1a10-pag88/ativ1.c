#include <stdio.h>
#include <math.h>

/*Programa que recebe quatro notas, calcula e mostra a media, mostrando mensagem de
aprovado ou reprovado, tendo como média 7*/

int main(){

    float nota1, nota2, nota3, nota4, media;

    printf("==========Media escolar==========\n\n");
    printf("Digite sua primeira nota:\n");
    scanf("%f%*c", &nota1);

    printf("Digite sua segunda nota:\n");
    scanf("%f%*c", &nota2);

    printf("Digite sua terceira nota:\n");
    scanf("%f%*c", &nota3);

    printf("Digite a sua quarta nota:\n");
    scanf("%f%*c", &nota4);

    media=(nota1+nota2+nota3+nota4)/4;

    printf("Sua media e: %.2f\n\n", media);

    if (media>=7 && media<=10)
    {
        printf("Aprovado\n");

    }
    else{
        printf("Reprovado\n");
    }

    return 0;
    
}