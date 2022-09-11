#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(){

    char nome[20];
    char caracter;
    int contador=0;

    printf("Digite uma palavra:\n");
    scanf("%s%*c", nome);

    printf("Digite um caracter:\n");
    scanf("%c%*c", &caracter);

    for (int i=0; i<strlen(nome); i++){
        printf("%c == %c\n", nome[i], caracter);
        if (nome[i]==caracter){
            contador++;
        }
        
    }
    
    printf("Na palavra digitada foram lidos %d vezes o caracter %c\n", contador, caracter);

    return 0;
    


}