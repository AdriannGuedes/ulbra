#include <stdio.h>
#include <math.h>

int main(){
  /*programa usando (do-while)*/

   int numero, soma;
   soma=0;
   int i=0;

   do{
       printf("Digite o numero %d\n",i+1);
     scanf("%d%*c", &numero);
     soma=numero+soma;
     i++;
   } 
   while(i<10);{
       printf("A soma e %d\n", soma);
     
    }
    

    return 0;

}


   