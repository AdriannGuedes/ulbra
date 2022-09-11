#include <stdio.h>
#include <math.h>

int main(){

    float nota, soma, media;
    soma=0;
    

    for ( int i=0; i<10; i++){
        printf("Digite a nota do aluno %d\n", i+1);
        scanf("%f%*c", &nota);
        soma=nota+soma;
       

       
    


    }
     media=soma/10;
    printf("A media da turma e: %.2f\n", media);
    
    return 0;
    
}