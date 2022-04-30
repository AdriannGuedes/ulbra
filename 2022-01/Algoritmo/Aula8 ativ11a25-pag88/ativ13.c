#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

/*Programa que recebe o preço de um produto, calcula de acordo com a tabela, 
e mostra o valor e a classificação do mesmo*/

int main(){

    UINT CPAGE_UTF8 = 65001;
   SetConsoleOutputCP(CPAGE_UTF8);

    float preco, novopreco;

    printf("Digite o preço do produto:\n");
    scanf("%f%*c", &preco);

    if (preco<=50){
        novopreco=preco+preco*5/100;
        printf("O preço atualizado deste produto é de: %.2f\n", novopreco);
        if (novopreco<=80){
            printf("==========Barato==========\n");
        }
        if (novopreco>80 && novopreco<=120){
            printf("==========Normal==========\n");
        }
        if (novopreco>120 && novopreco<=200){
            printf("==========Caro==========\n");
        }
        if (novopreco>200){
            printf("==========Muito caro==========\n");
        }
    }
    else if (preco>50 && preco<=100){
        novopreco=preco+preco*10/100;
        printf("O preço do produto atualizado é de: %.2f\n", novopreco);
        if (novopreco<=80){
            printf("==========Barato==========\n");
        }
        if (novopreco>80 && novopreco<=120){
            printf("==========Normal==========\n");
        }
        if (novopreco>120 && novopreco<=200){
            printf("==========Caro==========\n");
        }
        if (novopreco>200){
            printf("==========Muito caro==========\n");
        }
    }
    else if (preco>100){
        novopreco=preco+preco*15/100;
        printf("O preço do produto atualizado é de: %.2f\n", novopreco);
        if (novopreco<=80){
            printf("==========Barato==========\n");
        }
        if (novopreco>80 && novopreco<=120){
            printf("==========Normal==========\n");
        }
        if (novopreco>120 && novopreco<=200){
            printf("==========Caro==========\n");
        }
        if (novopreco>200){
            printf("==========Muito caro==========\n");
        }
    }

    return 0;
    
    
    
}