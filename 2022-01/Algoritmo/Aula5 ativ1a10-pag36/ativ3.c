#include <stdio.h>

int main()

{
   float n1, n2, n3, p1, p2, p3;

   printf("Digite a nota 1: ");
   scanf("%f%*c", &n1);

   printf("Digite o peso 1: ");
   scanf("%f%*c", &p1);

   printf("Digite a nota 2: ");
   scanf("%f%*c", &n2);

   printf("Digite o peso 2: ");
   scanf("%f%*c", &p2);

   printf("Digite a nota 3: ");
   scanf("%f%*c", &n3);

   printf("Digite o peso 3: ");
   scanf("%f%*c", &p3);

   printf("A media e: %.2f", (n1*p1+n2*p2+n3*p3)/(p1+p2+p3));

   return 0;


}