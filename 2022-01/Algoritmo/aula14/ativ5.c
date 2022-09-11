#include <stdio.h>

int main(){

    float n1, n2, maior, menor;
    
    do{
        printf("Digite o primeiro numero\n");
    scanf("%f%*c", &n1);
    printf("Digite o segundo numero\n");
    scanf("%f%*c", &n2);

    if (n1==n2){
       break;
    }
    else if (n1>n2){
        maior=n1;
        menor=n2;
        printf("Os numeros %.f e %.f foram digitados na ordem Decrescente\n", maior, menor);
        
    }
    else{
        maior=n2;
        menor=n1;
         printf("Os numeros %.f e %.f foram digitados na ordem Crescente\n", menor, maior);
    }

        
    } while (n1!=0 && n2!=0 );
    

    
    return 0;
    
    
    
}