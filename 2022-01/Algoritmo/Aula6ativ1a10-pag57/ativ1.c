#include <stdio.h>
#include <math.h>

int main()
{
    float nota_trab, aval_sem, exame, media;

    printf("Digite a nota do trabalho de laboratorio:\n");
    scanf("%f%*c", &nota_trab);

    printf("Digite a nota da avaliacao trimestral:\n");
    scanf("%f%*c", &aval_sem);

    printf("Digite a nota do exame final:\n");
    scanf("%f%*c", &exame);
    
    media= (nota_trab * 2 + aval_sem * 3 + exame * 5)/10;

    printf("Media ponderada:%.2f\n", media);

    if (media>=8 && media<=10){
        printf("Obteve Conceito A\n");
    }

    if (media>=7 && media<8){
        printf("Obteve o Conceito B\n");
        
    }
    
    if (media>=6 && media<7){
      printf("Obteve o conceito C\n");
    }

    if (media>=5 && media<6){
      printf("Obteve o conceito D");
    }

    if (media>=0 && media<5){
        printf("Obteve o conceito E\n");
    }

    return 0;
    
    
    
    
}