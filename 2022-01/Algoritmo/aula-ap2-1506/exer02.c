#include <stdio.h>
#include <stdlib.h>


//  Escreva um programa que sorteio, aleatoriamente, 10 números e armazene estes em um vetor.
// Em seguida, o usuário digita um número e seu programa em C deve acusar se o número digitado
// está no vetor ou não. Se estiver, diga a posição que está.


int main(){
    

    int sorteio[10], num, i, contador=0;
    


    for ( i=0; i<10; i++){
        sorteio[i]=rand() %10;
        printf("%d", sorteio[i]);
    }

    printf("\nDigite um numero para saber se o mesmo esta no sorteio:\n");
    scanf("%d%*c", &num);

    for ( i=0; i<10; i++){
        contador=contador +1;
        if (sorteio[i]==num){
           printf("O numero %d esta na posicao %d no sorteio\n", num, contador);
        }
        else if (sorteio[i]!=num){
            printf("O numero digitado nao esta incluso no sorteio\n");
        }
    
        
    }
    

   
    

    
    
    


}