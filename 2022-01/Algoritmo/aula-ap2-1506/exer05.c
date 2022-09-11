#include <stdio.h>


// Faça um programa que receba do usuário dois vetores, A e B, 
// com 10 números inteiros cada. Crie um novo vetor denominado C
//  calculando C = A - B. Mostre na tela os dados do vetor C.

int main(){

    int A[10], B[10], C[10];

    printf("Numeros do vetor A:\n\n");

    for (int i=0; i<10; i++){
        printf("Digite um numero:\n");
        scanf("%d%*c", &A[i]);
    }

    printf("Numeros do vetor B:\n\n");

    for (int i=0; i<10; i++){
        printf("Digite um numero:\n");
        scanf("%d%*c", &B[i]);
    }
    
    printf("A subtracao do vetor A - vetor B e igual a:\n");
    for (int i=0; i<10; i++){
        C[i]=A[i]-B[i];
         printf("%d\n", C[i] );
    }

    return 0;
    
   
    
}