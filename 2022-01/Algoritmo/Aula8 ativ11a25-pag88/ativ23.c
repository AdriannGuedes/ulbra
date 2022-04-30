#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

/*Programa que recebe código e quantidade de produtos, calcula e mostra de acordo com as tabelas 
e mostra o valor unitário do produto, o preço total da nota, o valor do desconto, o desconto 
aplicado no preço final, e o valor final ja com o desconto aplicado*/ 

int main(){

    UINT CPAGE_UTF8 = 65001;
   SetConsoleOutputCP(CPAGE_UTF8);

    float cod, quant, precouni, precototal, valordesc, precofinal;

    printf("Insira o código do produto:\n");
    scanf("%f%*c", &cod);

    printf("Digite a quantidade que deseja:\n");
    scanf("%f%*c", &quant);

    if(cod>=1 && cod<=10){
        precouni=10;
        printf("Valor unidade: %.2f\n", precouni);
        
        precototal=precouni*quant;
        printf("Preço total: %.2f\n", precototal);
        
        if (precototal<=250){
            valordesc=precototal*5/100;
            printf("Desconto: %.2f\n", valordesc);
            printf("Desconto sob o valor total: %.2f-%.2f\n", precototal, valordesc);

            precofinal=precototal-valordesc;
            printf("Valor final: %.2f", precofinal);
        }
        if(precototal>250 && precototal<=500){
            valordesc=precototal*10/100;
            printf("Desconto: %.2f\n", valordesc);
            printf("Desconto sob o valor total: %.2f-%.2f\n", precototal, valordesc);

            precofinal=precototal-valordesc;
            printf("Valor final: %.2f\n", precofinal);
        }
        if (precototal>500){
            valordesc=precofinal*15/100;
            printf("Desconto: %.2f\n", valordesc);
            printf("Desconto sob o valor total: %.2f-%.2f\n", precototal, valordesc);

            precofinal=precototal-valordesc;
            printf("Valor final: %.2f\n", precofinal);
          
        }
    }
    else if (cod>=11 && cod<=20)
    {
        precouni=15;
        printf("Valor unidade: %.2f\n", precouni);

        precototal=precouni*quant;
        printf("Preço total: %.2f\n", precototal);

        if (precototal<=250){
            valordesc=precototal*5/100;
            printf("Valor desconto: %.2f\n", valordesc);
            printf("Desconto sob o valor total: %.2f-%.2f\n", precototal, valordesc);

            precofinal=precototal-valordesc;
            printf("Valor final: %.2f\n", precofinal);
        }
        if (precototal>250 && precototal<=500){
            valordesc=precototal*10/100;
            printf("Valor desconto: %.2f\n", valordesc);
            printf("Desconto sob o valor total: %.2f-%.2f\n", precototal, valordesc);

            precofinal=precototal-valordesc;
            printf("Valor final: %.2f\n", precofinal);
        }
        if (precototal>500){
            valordesc=precototal*15/100;
            printf("Valor desconto: %.2f\n", valordesc);
            printf("Desconto sob o valor total: %.2f-%.2f\n", precototal, valordesc);

            precofinal=precototal-valordesc;
            printf("Preço final: %.2f\n", precofinal);
        }
    }
    else if (cod>=21 && cod<=30)
    {
        precouni=20;
        printf("Valor unidade: %.2f\n", precouni);

        precototal=precouni*quant;
        printf("Preço total: %.2f\n", precototal);

        if (precototal<=250){
            valordesc=precototal*5/100;
            printf("Valor desconto: %.2f\n", valordesc);
            printf("Desconto sob o valor total: %.2f-%.2f\n", precototal, valordesc);

            precofinal=precototal-valordesc;
            printf("Valor final: %.2f\n", precofinal);
        }
        if (precototal>250 && precototal<=500){
            valordesc=precototal*10/100;
            printf("Valor desconto: %.2f\n", valordesc);
            printf("Desconto sob o valor total: %.2f-%.2f\n", precototal, valordesc);

            precofinal=precototal-valordesc;
            printf("Valor final: %.2f\n", precofinal);
        }
        if (precototal>500){
            valordesc=precototal*15/100;
            printf("Valor desconto: %.2f\n", valordesc);
            printf("Desconto sob o valor total: %.2f-%.2f\n", precototal, valordesc);

            precofinal=precototal-valordesc;
            printf("Preço final: %.2f\n", precofinal);
        }
    }
    else if (cod>=31 && cod<=40)
    {
        precouni=30;
        printf("Valor unidade: %.2f\n", precouni);

        precototal=precouni*quant;
        printf("Preço total: %.2f\n", precototal);

        if (precototal<=250){
            valordesc=precototal*5/100;
            printf("Valor desconto: %.2f\n", valordesc);
            printf("Desconto sob o valor total: %.2f-%.2f\n", precototal, valordesc);

            precofinal=precototal-valordesc;
            printf("Valor final: %.2f\n", precofinal);
        }
        if (precototal>250 && precototal<=500){
            valordesc=precototal*10/100;
            printf("Valor desconto: %.2f\n", valordesc);
            printf("Desconto sob o valor total: %.2f-%.2f\n", precototal, valordesc);

            precofinal=precototal-valordesc;
            printf("Valor final: %.2f\n", precofinal);
        }
        if (precototal>500){
            valordesc=precototal*15/100;
            printf("Valor desconto: %.2f\n", valordesc);
            printf("Desconto sob o valor total: %.2f-%.2f\n", precototal, valordesc);

            precofinal=precototal-valordesc;
            printf("Preço final: %.2f\n", precofinal);
        }
    }
    else{
        printf("Codigo invalido, tente novamente.\n");
    }

    return 0;
    
    
    

}