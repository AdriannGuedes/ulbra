#include <stdio.h>
#include <math.h>

int main(){

    int num1, num2, num3, num4;

    printf("Digite o primeiro numero:\n");
    scanf("%d%*c", &num1);

     printf("Digite o segundo numero:\n");
    scanf("%d%*c", &num2);

     printf("Digite o terceiro numero:\n");
    scanf("%d%*c", &num3);

     printf("Digite o quarto numero:\n");
    scanf("%d%*c", &num4);

    if (num1%2==0){
        printf("O valor %d e divisivel de 2\n", num1);
        
    
    }
    else if (num1%3==0){
        printf("O valor %d e divisivel de 3\n", num1);
    }
    else{
        printf("Valor ivalido\n");
    }
    if (num2%2==0){
        printf("O valor %d e divisivel de 2\n", num2);
        
    
    }
    else if (num2%3==0){
        printf("O valor %d e divisivel de 3\n", num2);
    }
    else{
        printf("Valor ivalido\n");
    }
    if (num3%2==0){
        printf("O valor %d e divisivel de 2\n", num3);
        
    
    }
    else if (num3%3==0){
        printf("O valor %d e divisivel de 3\n", num3);
    }
    else{
        printf("Valor ivalido\n");
    }
    if (num4%2==0){
        printf("O valor %d e divisivel de 2\n", num4);
        
    
    }
    else if (num4%3==0){
        printf("O valor %d e divisivel de 3\n", num4);
    }
    else{
        printf("Valor ivalido\n");
    }

    return 0;
}