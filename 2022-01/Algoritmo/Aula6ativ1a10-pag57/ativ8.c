#include <stdio.h>
#include <math.h>

int main(){

    float num1, num2, soma, raiz, op;

    printf("////Menu////\n");
    printf("1  Somar dois numeros\n");
    printf("2 Raiz quadrada de um numero\n");

    printf("Digite sua opcao:\n");
    scanf("%f%*c", &op);

    if (op == 1){
        printf("Digite o valor do primeiro numero:\n");
        scanf("%f%*c", &num1);
        printf("Digite o valor do segundo numero:\n");
        scanf("%f%*c", &num2);

        soma = num1+num2;

        printf("A soma de %.f e %.f e igual a %.f.\n", num1, num2, soma);
    }
    
    if (op == 2){    
        printf("Digite um valor:\n");
        scanf("%f%*c", &num1);
        raiz = sqrt(num1);
        printf("A raiz quadrada de %.f e %.f.\n", num1, raiz);

    }
    else{
        printf("Comando invalido\n");
    }

    return 0;
    
    

}