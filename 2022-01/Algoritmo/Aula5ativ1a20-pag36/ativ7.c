#include <stdio.h>

int main()
{
    float sal, salrec, imp;

    printf("Digite seu salario:");
    scanf("%f%*c", &sal);
    

    imp = sal*10/100;
    salrec = sal+50-imp;

    printf("Salario a receber: %.2f\n",salrec);

    return 0;

}