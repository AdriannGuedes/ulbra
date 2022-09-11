#include <stdio.h>
#include <string.h>

int main(){

    char palavra[3][20];
    int tam[3];

    for (int i=0; i<3; i++){
        printf("Digite uma palavra:\n");
        scanf("%s%*c", &palavra[i]);
    }

    for (int i=0; i<3; i++){
        
    tam[i]=strlen(palavra[i]);

    printf("A string %d possui %d caracteres\n",i+1, tam[i]);
    }
    return 0;
}
    
     
