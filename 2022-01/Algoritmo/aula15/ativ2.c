#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

/* Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os
 valores lidos. */


int main(){

    UINT CPAGE_UTF8 = 65001;
   SetConsoleOutputCP(CPAGE_UTF8);


    int valores[6], i;

    

    for ( i=0; i<6; i++){
        printf("Digite o valor:\n");
        scanf("%d%*c", &valores[i]);
        
    }

    for ( i=0; i<6; i++){
        printf("Valor digitado %d\n", valores[i]);
    }
    
    return 0;
    
}