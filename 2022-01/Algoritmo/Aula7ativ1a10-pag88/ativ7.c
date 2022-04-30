#include <stdio.h>
#include <math.h>

int main(){

    float sal, novo_sal;

    printf("Digite o valor do seu salario:\n");
    scanf("%f%*c", &sal);

    novo_sal=sal+(sal*30/100);

    if (sal<=500)
    {
        printf("Voce recebeu um aumento de 30/ e seu novo salario e de %.2f:\n", novo_sal);
    }
    else{
        printf("Voce nao tem direito a aumento\n");
    }
    
    return 0;
}