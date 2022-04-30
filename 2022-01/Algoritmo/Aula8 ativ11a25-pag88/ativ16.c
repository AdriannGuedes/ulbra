#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

/*Programa que recebe um valor de produto e seu código e calcula e mostra o valor do 
desconto e o novo preço do produto*/

int main(){

    UINT CPAGE_UTF8 = 65001;
   SetConsoleOutputCP(CPAGE_UTF8);

    float valoratual, desc, novopreco, cod;

    printf("Digite o valor do produto:\n");
    scanf("%f%*c", &valoratual);

    printf("Digite o código do produto:\n");
    scanf("%f%*c", &cod);

    if (valoratual<30)
    {
        if (cod==555321){
         novopreco=valoratual;
         desc=0;
        
         printf("O valor do produto é de:%.2f\n", novopreco); 
         printf("O valor do desconto é de:%.2f\n", desc);
        
        }else{
            printf("Código inválido, tente novamente\n", cod);
        }
        
    }
    if (valoratual>30 && valoratual<100){
        if (cod==432456)
        {
         novopreco=valoratual-desc;
         desc=valoratual-valoratual*10/100;
        
         printf("O valor do produto é de:%.2f\n", novopreco); 
         printf("O valor do desconto é de:%.2f\n", desc);
        
        }else{
            printf("Código inválido, tente novamente\n", cod);
        }
        
    }
    if (valoratual>=100){
        if (cod==968708){
         novopreco=valoratual-desc;
         desc=valoratual-valoratual*15/100;
        
         printf("O valor do produto é de:%.2f\n", novopreco); 
         printf("O valor do desconto é de:%.2f\n", desc);
        
        }else{
            printf("Código inválido, tente novamente\n", cod);
        }
        
    }
    return 0;
    
    
    
}