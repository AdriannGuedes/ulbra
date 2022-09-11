#include <stdio.h>
#include <string.h>

int main(){

    char nome[20];
    char sobrenome[20];
    char nomeCompleto[40];

    printf("Digite seu nome:\n");
    gets(nome);
    printf("Digite seu sobrenome\n");
    gets(sobrenome);
    
    strcat(nomeCompleto,nome);
    strcat(nomeCompleto, " ");
    strcat(nomeCompleto,sobrenome);
    printf("Seu nome completo e: %s", nomeCompleto);

    return 0;
}