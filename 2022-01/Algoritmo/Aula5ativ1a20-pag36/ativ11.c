#include <stdio.h>
#include <math.h>

int main()
{
    float num, quad,cubo, r2, r3;

    printf("Insira um numero");
    scanf("%f%*c", &num);

    quad = pow(num,2);
    cubo = pow(num,3);
    
    r2 = sqrt(num);
    r3 = cbrt(num);

    printf("Esse numero elevado ao quadrado e : %.2f/n\n", quad);
    
    printf("Esse numero elevado ao cubo e : %.2f/n\n", cubo);
    
    printf("A raiz quadrada desse numero e :%.2f/n\n", r2);
    
    printf("A raiz cubida desse numero e :%.2f/n\n", r3);
    





   return 0;


}