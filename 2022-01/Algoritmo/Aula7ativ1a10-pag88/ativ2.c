#include <stdio.h>
#include <math.h>

/*Programa que recebe dias notas calcula e mostra a média aritmetica das notas e a 
mensagem que se encontra na tabela do ex.*/

int main(){

    float nota1, nota2, media;
    printf("==========Media==========\n");
    printf("Digite sua primeira nota:\n");
    scanf("%f%*c", &nota1);

    printf("Digite sua segunda nota:\n");
    scanf("%f%*c", &nota2);

    media=(nota1+nota2)/2;

    printf("Sua media e: %.1f\n\n", media);

    if (media>=7 && media<=10){
        printf("Voce foi Aprovado!!!\n");

    }
    else if (media>=4 && media<7){
        printf("Precisa fazer Exame Final\n");
    }
    else{
        printf("Voce foi Reprovado\n");
    }

    return 0;
    
    


}