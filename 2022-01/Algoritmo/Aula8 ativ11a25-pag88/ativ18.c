#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <windows.h>
/*Programa que recebe a idade de uma pessoa e mostra mensagem de maior idade ou não*/

int main(){

    UINT CPAGE_UTF8 = 65001;
   SetConsoleOutputCP(CPAGE_UTF8);

    int idade;

    printf("Digite a sua idade:\n");
    scanf("%f%*c", &idade);

    if (idade>=18){
        printf("Você é maior de idade\n", idade);
    
    }else{
        printf("Você é menor de idade\n");
    }
    return 0;
}