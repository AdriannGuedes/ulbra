#include <stdio.h>

int main(){

    float n, soma;
    

    for (int i=0; i<5; i++){
        printf("Digite um numero:\n");
        scanf("%f%*c", &n);
        soma=n+soma;

        if (n<0){
            printf("Este numero negativo\n", n);
        }
        else if (n==0){
            printf("Este numero e nulo\n", n);
        }
        else if (n>0){
            printf("Este numero e positivo\n");
        }
        
        
        
    }
    
    return 0;

}