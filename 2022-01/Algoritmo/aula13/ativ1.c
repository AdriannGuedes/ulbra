#include <stdio.h>
#include <math.h>

int main(){
  /*programa usando (for)*/

   int numero, soma;
   soma=0;

   for(int i=0; i<10; i++){
     printf("Digite o numero %d\n",i+1);
     scanf("%d%*c", &numero);
     soma=numero+soma;
    }
    printf("A soma e %d\n", soma);

    return 0;

}


   