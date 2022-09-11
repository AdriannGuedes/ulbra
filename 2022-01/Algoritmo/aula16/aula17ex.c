#include <stdio.h>
#include <string.h>

int main(){

    char nome[14];
    char sobrenome[]="Lummertz";
    char meio[]={'D','o','s','\0'};
    char nomeCompleto[20];
    

    printf("Digite o nome:\n");
    scanf("%s%*c", nome);
    printf("%s %s %s\n", nome );

    if (strcmp(nome, "ramon")==0){
        printf("Nomes iguais\n");
    }
    else{
        printf("Nomes diferentes\n");
    }
    strcat(nomeCompleto, nome);
    strcat(nomeCompleto, " ");
    strcat(nomeCompleto, sobrenome);
    

    printf("Seu nome completo e: %s", strdup(nomeCompleto));

    //char outroNome[10];
    //int tam=0;
    //strcpy(outroNome, nome); 
    //int tam=strlen(nomeCompleto);
    //printf("\nO tamanho e: %d", tam );

    return 0;

    
}