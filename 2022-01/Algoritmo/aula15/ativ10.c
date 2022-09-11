#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

/*Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule e imprima a média geral.*/

int main(){

     INT CPAGE_UTF8 = 65001;
   SetConsoleOutputCP(CPAGE_UTF8);

    float v[15], media;

    for (int i=0; i<15; i++){
        printf("Digite a nota do aluno %d:\n", i+1);
        scanf("%f%*c", &v[i]);
        media+=v[i];
       
    }
    

    printf("A média geral dos 15 alunos é de: %.f", media/15);

    return 0;


    
}