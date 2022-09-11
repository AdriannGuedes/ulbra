#include <stdio.h>
#include <string.h>


int main(){
    char nome[20];
    
    

    printf("Digite uma palavra:\n\n");
    gets(nome);
    strupr(nome);

    printf("String convertida para maiusculo:\n\n");
    

    for (int i=0; i<strlen(nome); i++){
        printf("%c\n",nome[i]);
    }
    




}
