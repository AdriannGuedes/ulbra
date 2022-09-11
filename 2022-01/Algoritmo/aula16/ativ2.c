#include <stdio.h>
#include <math.h>

/*programa que preenche um vetor de sete numeros e mostre:
os numeros multiplos de 2;
os multiplos de 3;
os multiplos de 2 e 3;*/

int main(){

    int valores[7];

    for (int i=0; i<7; i++){
        printf("Digite um numero:\n");
        scanf("%d%*c", &valores[i]);
    }

    printf("Numeros multiplos de 2:\n");
    for (int i=0; i<7; i++){
        if (valores[i]%2==0){
            printf("%d\n", valores[i]);
        }
        
    }
    printf("Numeros multiplos de 3:\n");
    for (int i=0; i<7; i++){
        if (valores[i]%3==0){
            printf("%d\n", valores[i]);
        }
        
    }
    printf("Numeros multiplos de 2 e de 3:\n");
    for (int i=0; i<7; i++){
        if (valores[i]%2==0 && valores[i]%3==0){
            printf("%d\n", valores[i]);
        }
        
    }

    return 0;
    
    
    
    
}