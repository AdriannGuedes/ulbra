#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

/*Programa que recebe um valor e possui dois tipos de investimento,
de acodo com a tabela, calcula e mostra o novo valor ja com rendimento de acordo 
com a opção selecionada.*/

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);


    float valor, op, valorcorrigido;

    printf("==========Contas==========\n\n\n");

    printf("Digite o valor que deseja investir:\n");
    scanf("%f%*c", &valor);

    printf("Para abrir uma conta poupanca digite 1, e para fundos de renda fixa digite 2:\n");
    scanf("%f%*c", &op);

    if (op==1){
        valorcorrigido=valor+valor*3/100;
        printf("Ao final do mes você terá o valor de: R$%.2f\n", valorcorrigido);
    }
    else if (op==2){
        valorcorrigido=valor+valor*4/100;
        printf("Ao final do mês voce terá o valor de: R$%.2f\n", valorcorrigido);
    }
    else{
        printf("Opção inválida\n");
    }
    
    return 0;
}