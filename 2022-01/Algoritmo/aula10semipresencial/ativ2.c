#include <stdio.h>
#include <math.h>

int main(){

    int idade;

    printf("Digite a sua idade:\n");
    scanf("%d%*c", &idade);

    if (idade<18){
        
        printf("Voce e menor de idade\n", idade);
    }
    else if (idade>=18){
        printf("Voce e maior de idade\n");
    }
    return 0;
    
    
}