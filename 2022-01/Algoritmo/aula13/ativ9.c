#include <stdio.h>

int main(){

    int n, resul;
     
    printf("Digite um numero para saber quais numeros correspondem a tabuada do mesmo:\n");
    scanf("%i%*c", &n);

    for(int i=1; i<=10; i++){
     resul=n*i;   
    printf("%i X %i = %i:\n",n, i, resul);
        
        
        
    }
    return 0;
    
}