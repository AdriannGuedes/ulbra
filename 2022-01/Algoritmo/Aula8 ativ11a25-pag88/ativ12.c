#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

/*Programa que recebe o salario de um funcionario, da a gratificação de acordo com a tabela
e desconta 7% sobre o salario sem a gratufucação*/

int main(){

    UINT CPAGE_UTF8 = 65001;
   SetConsoleOutputCP(CPAGE_UTF8);

    float sal, valrec, desc, grat;

    printf("Digite o valor do seu salário:\n");
    scanf("%f%*c", &sal);

    if (sal<=350){
        desc=sal*7/100;
        grat=100;
        valrec=sal+grat-desc;
        printf("O valor a receber é de: %.2f\n");
    }
    else if (sal<350 && sal>=600){
         desc=sal*7/100;
        grat=75;
        valrec=sal+grat-desc;
        printf("O valor a receber é de: %.2f\n");
    }
    else if (sal<600 && sal>=900){
        desc=sal*7/100;
        grat=50;
        valrec=sal+grat-desc;
        printf("O valor a receber é de: %.2f\n");
    }
    else if (sal<900){
        desc=sal*7/100;
        grat=35;
        valrec=sal+grat-desc;
        printf("O valor a receber é de: %.2f\n");
    }

    return 0;
    
    
    
    
}