#include <stdio.h>


// Faça um programa para ler 10 números DIFERENTES a serem armazenados em um vetor. 
// Os dados deverão ser armazenados no vetor na ordem que forem sendo lidos, sendo 
// que caso o usuário digite um número que já foi digitado anteriormente, o programa
//  devera pedir para ele digitar outro número. Note que cada valor digitado pelo usuário deve 
//  ser pesquisado no vetor, verificando se ele existe entre os números que já foram  fornecidos.
//   Exibir na tela o vetor final digitado.

int main(){
   

    int num[10], i, k;

    for (i=0; i<10; i++){
        printf("Digite um numero:\n");
        scanf("%d%*c", &num[i]);

        for ( k= 0; k<i; k++){
            if (num[i]==num[k]){
                printf("Digite outro numero\n");
                i--;
            }
            
        }
       
    }
     for ( i=0; i<10; i++){
            printf("Último número digitado: %d\n", num[i]);
        }
    
    return 0;
}