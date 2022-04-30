#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

/*Programa que recebe o peso e a idade, calcula e mostra de acordo com a tabela o
grupo de risco baseado nos mesmos*/

int main(){

    UINT CPAGE_UTF8 = 65001;
   SetConsoleOutputCP(CPAGE_UTF8);

    float idade, peso, gr;

    printf("Digite o seu peso:\n");
    scanf("%f%*c", &peso);

    printf("Digite a sua idade:\n");
    scanf("%f%*c", &idade);

    if(idade<20){
        if(peso<=60){
            printf("Você está no grupo de risco 9,\n");

        }
        if (peso>60 && peso<=90){
            printf("Você está no grupo de risco 8.\n ");
        }
        if (peso>90)
        {
            printf("Você está no grupo de risco 7.\n");
        }
        
    }
    else if(idade>=20 && idade<50){
        if(peso<=60){
            printf("Você está no grupo de risco 6.\n");

        }
        if (peso>60 && peso<=90){
            printf("Você está no grupo de risco 5.\n");
        
        }
        if(peso>90){
            printf("Você está no grupo de risco 4.\n");
        }
        
    }
    else if (idade>50){
        if(peso<=60){
            printf("Você está no grupo de risco 3,\n");

        }
        if(peso>60 && peso<=90){
            printf("Você está no grupo de risco 2,\n");
        }
        if(peso>90){
            printf("Você está no grupo de risco 1.\n");
        }
    }

    return 0;
}
    