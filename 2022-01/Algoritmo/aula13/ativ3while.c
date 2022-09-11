#include <stdio.h>
#include <math.h>

int main(){

    int n1, n2;
    
    printf("Digite o primeiro numero:\n");
    scanf("%d%*c", &n1);
    printf("Digite o segundo numero:\n");
    scanf("%d%*c", &n2);

    int i=n1;



    while (i<=n2){
        
        if (i%2!=0){
            printf("Os numeros impares sao: %d\n", i);
        }
        i++;
        
    }
    
    return 0;
    
}