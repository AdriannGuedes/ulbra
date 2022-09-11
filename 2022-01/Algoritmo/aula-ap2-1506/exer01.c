#include <stdio.h>
#include <locale.h>
#include <windows.h>

// Faça um programa que leia 10 números inteiros, armazene-os em um vetor, solicite um valor de referência inteiro e: 
// a) imprima os números do vetor que são maiores que o valor referência 
// b) retorne quantos números armazenados no vetor são menores que o valor de referência 
// c) retorne quantas vezes o valor de referência aparece no vetor 


int main(){
    UINT CPAGE_UTF8 = 65001;
   SetConsoleOutputCP(CPAGE_UTF8);

    int numero[10], num, i, contador=0;

    for ( i=0; i<10; i++){
        printf("Digite o %d número do vetor\n",i+1);
        scanf("%d%*c", &numero[i]);
    }

    printf("Digite um número de referência:\n");
    scanf("%d%*c", &num);

  for (i=0; i<10; i++){
       if (numero[i]>num){
          printf("O número %d é maior que o número de referência\n", numero[i]);
        }


        else if (numero[i]<num){
            printf("O número %d é menor que o número de referência\n", numero[i]);
        }
        else if(numero[i]==num){
            contador=contador+1;
        }
        
        
    }
    printf("O número de referência aparece %d vezes no vetor\n", contador);

   return 0;
    

    
    
}
    


   