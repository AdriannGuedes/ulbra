#include <stdio.h>

int main(){

    int soma, n;
    int i=1;
    
    soma=0;

    printf("Digite um numero:\n");
    scanf("%d%*c", &n);

    do{
         soma=soma+i;
        i++;
    }
    while (i<=n);
    printf("A soma do numero 1 ate o numero %d e de: %d\n", n, soma );

    return 0;
    
}