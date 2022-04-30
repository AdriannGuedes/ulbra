#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

/*Programa que recebe a senha 4531 e é válidada, tendo como resultado a mensagem de acesso
permitido ou negado*/

int main(){

    UINT CPAGE_UTF8 = 65001;
   SetConsoleOutputCP(CPAGE_UTF8);

    int senha;

    printf("==========PneuFree==========\n\n");

    printf("Senha:\n");
    scanf("%i%*c", &senha);

    if (senha==4531){
        printf("Acesso permitido\n", senha);
    }
    else{
        printf("Acesso negado\n");
    }
    return 0;
}