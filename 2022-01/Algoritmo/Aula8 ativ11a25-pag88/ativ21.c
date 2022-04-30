#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

/*Programa que recebe o preço de um produto e seu código e de acordo com o código
informa ao consumidor a sua procedência*/

int main(){

    UINT CPAGE_UTF8 = 65001;
   SetConsoleOutputCP(CPAGE_UTF8);

    float preco, cod, proc;

    printf("==========Macromix==========\n");

    printf("Digite o preço do produto:\n");
    scanf("%f%*c", &preco);

    printf("Digite o código do produto:\n");
    scanf("%f%*c", &cod);

    if (cod==1){
        printf("Este produto vem do Sul.\n");
    }
    else if (cod==2){
        printf("Este produto vem do Norte.\n");
    }
    else if(cod==3){
        printf("Este produto vem do Leste.\n");
    }
    else if(cod==4){
        printf("Este produto vem do Oeste.\n");
    }
    else if(cod==5 && cod==6){
        printf("Este produto vem do Nordeste.\n");
    }
    else if(cod>=7 && cod<=9){
        printf("Este produto vem do Sudeste.\n");
    }
    else if(cod>=10 && cod<=20){
        printf("Este produto vem do Centro-Oeste.\n");
    }
    else if(cod>=21 && cod<=30){
        printf("Este produto vem do Nordeste.\n");
    }
    else{
        printf("Opção inválida.\n");
    }

    return 0;
}