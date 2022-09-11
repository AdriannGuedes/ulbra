#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

/*programa que preenche um vetor de 6 elementos e mostra:
os numeros pares do vetor;
quantos numeros pares tem;
os numeros impares do vetor;
quantos numeros impares tem;*/

int main(){

     UINT CPAGE_UTF8 = 65001;
   SetConsoleOutputCP(CPAGE_UTF8);


    int valores[6], contador=0;

    for (int i=0; i<6; i++){
        printf("Digite o número da %d posição do vetor:\n", i+1);
        scanf("%d%*c", &valores[i]);
    }

    printf("Números pares do vetor:\n");

    for (int i=0; i<6; i++){
        if (valores[i]%2==0){
        printf("%d\n", valores[i]);
        contador++;
        }
        
        
    }
    printf("Este vetor possui %d numeros pares.\n", contador);

    printf("Números impares do vetor:\n");
    contador=0;
    for (int i=0; i<6; i++){
        if (valores[i]%2!=0){
            printf("%d\n", valores[i]);
            contador++;
        }
        
    }
    printf("Este vetor tem %d números impares\n", contador);
    

    return 0;
    
}