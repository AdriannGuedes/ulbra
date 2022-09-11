#include <stdio.h>

int main(){

    float nome[7], media[7];

    for (int i = 0; i<7; i++){
        printf("Digite o nome do aluno:\n");
        scanf("%f%*c", &nome[i]);
        printf("Digite a media final do aluno:\n");
        scanf("%f%*c", &media[i]);

    }
    
}