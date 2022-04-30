#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

/*Programa que recebe a altura e o sexo, calcula e mostra o peso ideal para o mesmo*/

int main (){

    UINT CPAGE_UTF8 = 65001;
   SetConsoleOutputCP(CPAGE_UTF8);

    float alt, pesoid;
    char sexo;

    printf("Digite a sua altura:\n");
    scanf("%f%*c", & alt);

    printf("Digite M para masculino ou F para feminino:\n");
    scanf("%c%*c", &sexo);

    if (sexo=='M'){
        
        pesoid=(72.7*alt)-58;
        printf("O peso ideal para você é de:%.2f\n", pesoid);
    }
    else if (sexo=='F'){
        pesoid=(62.1*alt)-44.7;
        printf("O peso ideal para você é de:%.2f\n", pesoid);
    }
    else{
        printf("Caracter inválido, tente novamente");
    }
    return 0;
    
    




}