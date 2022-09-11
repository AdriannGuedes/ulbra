#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

/*Faça um programa que leia um vetor de 8 posições e, em seguida, leia
 também dois valores X e Y quaisquer correspondentes a duas posições no
  vetor. Ao final, seu programa deverá escrever a soma dos valores encontrados
   nas respectivas posições  X e Y . */


int main(){

    UINT CPAGE_UTF8 = 65001;
   SetConsoleOutputCP(CPAGE_UTF8);


    double A[8];
    int X, Y, i, soma;

    for (int i=0; i<8; i++){
        printf("Digite a %d  posição do vetor\n", i+1);
        scanf("%d%*c", &A[i]);
    }

    do{
        printf("Digite X:\n");
        scanf("%d%*c", &X);
        
    } while (X>=8);

    do
    {
        printf("Digite Y:\n");
    scanf("%d%*c", &Y);
    } while (Y>=8);

    printf("O valor da posição X %d é [%d]\n", X, A[X]);
    printf("O valor da posição Y %d é [%d]\n", Y, A[Y]);

    soma=A[X]+A[Y];
    printf("A soma é: %d\n", soma);
    
    return 0;


    
}