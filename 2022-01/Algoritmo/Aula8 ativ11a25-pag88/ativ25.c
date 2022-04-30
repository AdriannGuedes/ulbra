#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

/*Programa que recebe a quantidade de horas e da grativficação aos funcionários com base nas 
horas extras e horas faltadas ao trabalho, de acordo com a tabela*/

int main(){

    UINT CPAGE_UTF8 = 65001;
   SetConsoleOutputCP(CPAGE_UTF8);

    int horaextra, horafalt, H;

    printf("==========Gratificação de Natal==========\n\n");

    printf("Digite a quantidade de horas extras feitas(em minutos):\n");
    scanf("%i%*c", &horaextra);

    printf("Digite a quantidade de horas de trabalho faltadas(em minutos):\n");
    scanf("%i%*c", &horafalt);

    H=horaextra-(2/3*(horafalt));

    if (H>2400){
        printf("Você recebeu uma gratificação de 500,00\n");
    }
    else if (H>=1800 && H<2400){
        printf("Você recebeu uma gratificacção de 400,00\n");
    }
    else if (H>=1200 && H<1800){
        printf("Você recebeu uma gratificação de 300,00\n");
    }
    else if (H>=600 && H<1200){
        printf("Você recebeu uma gratificação de 200,00\n");
    }
    else if (H<600){
        printf("Você recebeu uma gratificação de 100,00\n");
    }
    
    
    
    
    
    return 0;
    

}