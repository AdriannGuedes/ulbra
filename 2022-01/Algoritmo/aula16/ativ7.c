#include <stdio.h>
#include <math.h>

int main(){

    float numero[10], soma=0;
    int i, contador=0;

    for (i=0; i<10; i++){
        printf("Digite um numero\n");
        scanf("%f%*c", &numero[i]);

        if (numero[i]>=0){
            soma=soma+numero[i];
        }
        else if (numero[i]<0)
    {
            contador=contador+1;
        }
        
        
    }
    
    printf("Este vetor possui %d numeros negativos e a soma dos numeros positivos e %.2f\n", contador, soma);

    return 0;
    
    
}