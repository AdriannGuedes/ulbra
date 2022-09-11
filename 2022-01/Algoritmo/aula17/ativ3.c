#include <stdio.h>
#include <string.h>


int main(){

    char nome[3][20], aux[20];
    int i, c;

    for (int i=0; i<3; i++){
        printf("Digite a palavra %i\n", i+1);
        scanf("%s", nome[i]);
    }
    
    printf("\nAs palavras em ordem alfabetica ficam:\n");
    for (i=1; i<3; i++){
        for (c=1; i<3; c++){
            if (strcmp(nome[c-1],nome[c])>0){
                strcpy(aux,nome[c-1]);
                strcpy(nome[c-1],nome[c]);
                strcpy(nome[c],aux);
            }
            
        }
       
        
    }
    for (i =0; i<3; i++){
         printf("%s\n", nome[i]);
    }
    

    
    


}