#include <math.h>
#include <stdio.h>

int main(){

    int valores[15], tam=4;

    for ( int i=0; i<tam; i++){
        printf("Digite o %d elemento do vetor:\n", i+1);
        scanf("%d%*c", &valores[i]);
    }

    int posicao=0;
    for (int i=0; i<tam; i++){
        if (valores[i]==30){
            posicao=i;
            printf("%d\n", posicao+1);
        }
        
    }
    
    
}