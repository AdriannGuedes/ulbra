#include <stdio.h>

int main(){

    int n;

    do{
        printf("Digite o valor a ser testado\n");
    scanf("%d%*c", &n);
    if (n<=0){
        break;
    }
    else{
        if (n%2==0){
            printf("O numero testado e par\n");
        }
        else{
            printf("O numero e impar\n");
        }
        
    }
    

   
       
    
    } while (n>0);
    

    

    return 0;
    
}