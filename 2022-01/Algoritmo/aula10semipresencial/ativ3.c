#include <stdio.h>
#include <math.h>

int main(){
    
    float num1, num2, dif;

   printf("Digite o primeiro numero\n");
   scanf("%f%*c", &num1);

   printf("Digite o segundo numero:\n");
   scanf("%f%*c", &num2);

   if (num1>num2)
   {
       dif=num1-num2;
       printf("A diferenca e: %.2f\n", dif);
   }
   else if (num2>num1)
   {
       dif=num2-num1;
       printf("A diferenca e: %.2f\n", dif);
   }
   else{
       printf("Os numeros sao iguais");
   }
   return 0;
   
   

}


