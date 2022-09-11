#include <stdio.h>

int main(){

    int i;
    float nota, media, soma;
    soma=1;
    i=0;

    do{
       printf("Digite a nota %d\n", i+1);
       scanf("%f%*c", &nota);
       if (nota>=0){
           i++;
           soma=soma+nota;
       }
       else{
           break;
       }
        
    } while (nota>=0);
    media=soma/i;
    printf("A media e %f\n", media);
    printf("Foram lidas as notas de  %d alunos\n", i);
    

    return 0;
}