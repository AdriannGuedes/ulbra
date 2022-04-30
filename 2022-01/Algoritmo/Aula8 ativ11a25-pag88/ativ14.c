#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

/*Programa que recebe o salário calcula e mostra o novo salário*/

int main(){

    UINT CPAGE_UTF8 = 65001;
   SetConsoleOutputCP(CPAGE_UTF8);

    float sal, novosal;

    printf("Digite o valor do seu salário:\n");
    scanf("%f%*c", &sal);

    if (sal<=300){
        novosal=sal+sal*50/100;
        printf("Seu novo salário é de: %.2f\n", novosal);
    }
    else if (sal>300 && sal<=500){
        novosal=sal+sal*40/100;
        printf("Seu novo salário é de: %.2f\n", novosal);
    }
    else if (sal>500 && sal<=700){
        novosal=sal+sal*30/100;
        printf("Seu novo salário é de: %.2f\n", novosal);
    }
    else if (sal>700 && sal<=800){
        novosal=sal+sal*20/100;
        printf("Seu novo salário é de: %.2f\n", novosal);
    }
    else if (sal>800 && sal<=1000){
        novosal=sal+sal*10/100;
        printf("Seu novo salário é de: %.2f\n", novosal);
    }
    else if (sal>1000){
        novosal=sal+sal*5/100;
        printf("Seu novo salário é de: %.2f\n", novosal);
    }

    return 0;
    
    
    
    
    
    
}