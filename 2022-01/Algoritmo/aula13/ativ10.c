#include <stdio.h>

int main(){
    int n, soma, i=0, nImpar, nPar;
    do
    {
        printf("Digite um valor inteiro\n");
        scanf("%i%*c", &n);
        soma=n+soma;

        if (n%2==0){
            printf("O numero %i e par\n", n);
            nPar++;
        }
        else if (n%2>0){
            printf("O numero %i e impar\n", n);
            nImpar++;
        }
        i++;
    } while (i<10);

    printf("Foram digitados %d numeros pares e %d numeros impares\n", nPar, nImpar);



    return 0;
    
    
}