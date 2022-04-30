#include <stdio.h>
#include <math.h>

int main()
{
    float nota1, nota2, nota3, media, nota_exame;

    printf("Digite a primeira nota:\n");
    scanf("%f%*c", &nota1);

    printf("Digite a segunda nota:\n");
    scanf("%f%*c", &nota2);

    printf("Digite a terceira nota:\n");
    scanf("%f%*c", &nota3);

    media = (nota1+nota2+nota3)/3;

    printf("Media Aritmetica:\n", media);

    if (media>=7 && media<=10){
        printf("Aprovado\n");
    }
    else if (media>=3 && media<7){
        printf("Exame\n");
    
    nota_exame = 12-media;

    printf("Deve tirar a nota %f para ser aprovado", nota_exame);
    
    }

    else{
        printf("Reprovado\n");
    }

    

    

    return 0;
    
    
    
    






}