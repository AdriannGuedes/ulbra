#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

/* Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela 
os valores lidos ˆ na ordem inversa*/

int main(){

    UINT CPAGE_UTF8 = 65001;
   SetConsoleOutputCP(CPAGE_UTF8);

    int A[6];

    for (int i=0; i<6; i++){
        printf("Insira um numero:\n", i+1);
        scanf("%d%*c", &A[i]);
    }

    printf("Elementos do Vetor na ordem inversa:\n");
    
    for (int i=5; i>=0; i--){
        printf("%d\n", A[i]);
    }

    return 0;
    
    
}