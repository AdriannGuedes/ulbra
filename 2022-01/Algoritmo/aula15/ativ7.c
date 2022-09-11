#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

/*Escreva um programa que leia 10 números inteiros e os armazene em um vetor. 
Imprima  o vetor, o maior elemento e a posição em que ele se encontra.*/

int main(){

    UINT CPAGE_UTF8 = 65001;
   SetConsoleOutputCP(CPAGE_UTF8);


    int v[10];

    for (int i=0; i<10; i++){
        printf("Digite um número para ser armazenado no vetor:\n");
        scanf("%d%*c", &v[i]);
    }

    int maior= v[0];
    int posmaior=0;

    printf("O vetor é: \n%d\n", v[0]);

    for (int i=1; i<10; i++){
        printf("%d\n", v[i]);
        if (v[i]>maior){  
            maior=v[i];
            posmaior=i;
        }
        
    }

    printf("O maior elemento do vetor é: %d, na posição %d(índice %d).\n", maior, posmaior+1, posmaior);

    return 0;
    
    
}