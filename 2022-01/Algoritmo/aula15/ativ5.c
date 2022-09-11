#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

/*Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.*/

int main(){

   UINT CPAGE_UTF8 = 65001;
   SetConsoleOutputCP(CPAGE_UTF8);


    int A[10], contador=0;

    for (int i=0; i<10; i++){
        printf("Digite um número maior que 0:\n");
        scanf("%d%*c", &A[i]);
    }

    for (int i=0; i<10; i++){
        if (A[i]%2==0){
            contador=contador+1;
        }
        
    }

    printf("Esse vetor possui %d numeros páres.\n", contador);

    return 0;
    

    
    
    
}