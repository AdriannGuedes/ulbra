#include <stdio.h>
#include <math.h>

int main(){

    int i;
    float a, b, c;

    

    printf("Digite o segundo numero:\n");
    scanf("%f%*c", &a);

     printf("Digite o segundo numero:\n");
    scanf("%f%*c", &b);

    printf("Digite o segundo numero:\n");
    scanf("%f%*c", &c);

    printf("1-Mostra os numeros em ordem crescente\n");
    printf("2-Mostra os nuneros em ordem decrescente\n");
    printf("3-Mostra os 3 valores de forma que o maior valor entre a, b, c fica entre os outros dois.\n");


    printf("Digite o primeiro numero(1, 2 ou 3)\n");
    scanf("%d%*c", &i);

    float maior, menor, meio;

    if (a>b && a>c){
        maior=a;
        if (b>c){
           meio=b;
           menor=c;   
        }
        else{
            meio=c;
            menor=b;
        }
        
    }
    else if (b>a && b>c){
        maior=b;
        if (a>c){
            meio=a;
            menor=c;
        }
        else{
            meio=c;
            menor=a;
        }
        
    }
    else{
        maior=c;
        if (a>b){
            meio=a;
            menor=b;
        }
        else{
            meio=b;
            menor=a;
        }
        
    }

    switch (i){
    case 1:
    printf("Os numeros em ordem crescente: %f, %f, %f\n", menor, meio, maior);
    break;

    case 2:
    printf("Os numeros em ordem decrescente: %f, %f, %f\n", maior, meio, menor);
    break;

    case 3:
    printf("O maior numero fica no meio: %f, %f, %f\n", meio, maior, menor);

    
    default:
    printf("Os numeros sao iguais");
        break;
    }

    return 0;
    
    
   

   
    



}