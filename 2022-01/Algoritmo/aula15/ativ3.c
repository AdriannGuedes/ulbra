#include <stdio.h>
#include<math.h>
#include <locale.h>
#include <windows.h>

/* Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das 
componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos têm 10
 elementos cada. Imprimir todos os conjuntos. */


int main(){

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);


    int A[10], B[10], i;
   


    for (i=0; i<10; i++){
        printf("Digite um numero:\n");
        scanf("%d%*c", &A[i]);
    }

    
    for (i=0; i<10; i++){
        B[i]= A[i]*A[i];
        

    }

    for (i=0; i<10;i++){
        printf("Conjunto 1:\n");
        printf("%d\n", A[i]);
    }

    for (i=0; i<10; i++){
         printf("Conjunto 2:\n");
         printf("%d\n", B[i]);
    }

    return 0;
    
    
    
    
    
}