#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

/*Crie um programa que lê 6 valores num vetor inteiros pares e,
 em seguida, mostre na tela os valores ˆ lidos na ordem inversa.*/


int main(){

    UINT CPAGE_UTF8 = 65001;
   SetConsoleOutputCP(CPAGE_UTF8);

    int V[6];

    for (int i=0; i<6; i++){
        printf("Digite um valor par:\n");
        scanf("%d%*c", &V[i]);
        if (V[i]%2==0){
            
        }
        else{
            printf("Numero inválido\n");
            i--;

        }
        
    }

    printf("Elementos do vetor na ordem inversa:\n");
    for (int i=5; i>=0; i--){
        printf("%d\n", V[i]);

    }

    return 0;
    
    
}