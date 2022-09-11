#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

/*Faça um programa que receba do usuário um vetor com 10 posições. 
Em seguida, deverá ser impresso o maior e o menor elemento do vetor. */

int main(){

    UINT CPAGE_UTF8 = 65001;
   SetConsoleOutputCP(CPAGE_UTF8);


    int A[10], maior, menor;

    for (int i=0; i<10; i++){
        printf("Digite um numero:\n");
        scanf("%d%*c", &A[i]);
    }

    

    maior=A[0];
    for (int i=1; i<10; i++){
        if (A[i]>maior){
            maior=A[i];
        }
    }
    
    menor=A[0];
    for (int i=1; i<10; i++){
        if (A[i]<menor){
            menor=A[i];
        }
        
    }
    
    printf("Vetores:\n");
    for (int i =0; i<10; i++){
        printf("%d\n", A[i]);
    }

    printf("Maior elemento do vetor: %d\n", maior);
    printf("Menor elemento do vetor: %d\n", menor);

    return 0;
}