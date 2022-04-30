#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

/*Programa que recebe salrio e de acordo com a tabela  calcula o aumento e mostra o novo salario*/
int main(){

    UINT CPAGE_UTF8 = 65001;
   SetConsoleOutputCP(CPAGE_UTF8);
   

    float sal, novosal, aumento;
    

    printf("Digite o valor do seu salário:\n");
    scanf("%f%*c", &sal);

    if (sal<=300){
        
        aumento=sal*15/100;
        novosal=sal+aumento;
        printf("Seu novo salário e de: %.2f\n", novosal);
        printf("Você teve um aumento de: %.2f\n", aumento);
    }
    else if (sal>300 && sal<=600){
        
        aumento=sal*10/100;
        novosal=sal+aumento;
        printf("Seu novo salário e de: %.2f\n", novosal);
        printf("Você teve um aumento de: %.2f\n", aumento);
    }
    else if (sal>600 && sal<=900)
    {   
        aumento=sal*5/100;
        novosal=sal+aumento;
        printf("Seu novo salário e de: %.2f\n", novosal);
        printf("Você teve um aumento de: %.2f\n", aumento);
    }
    else if (sal>900)
    {
        printf("Você não tem direito a aumento.\n");
    }

    return 0;
    
    
    
    


}