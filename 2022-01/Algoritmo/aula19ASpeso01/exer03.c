#include <stdio.h>
#include <string.h>

/* Fazer um algorítimo que seja lido uma palavra e imprima:
A quantidade de vogais que compõe a palavra.
A quantidade de letras dessa palavra.*/


int main(){

    char p[20];
    int i, cont=0, carac=0;

    printf("Digite uma palavra:\n");
    scanf("%s", p);

    
    
// Função contador
//   for ( i=0; i<20; i++){
//         if(p[i]=='\0'){
//             break;
//         }
//         carac++;
//     }

carac=strlen(p);

printf("%d", carac);
printf("%s", p);
   
   
   

    

    for ( i=0; i<carac; i++){
        if (p[i]=='A' || p[i]=='a' || p[i]=='E' || p[i]=='e' || p[i]=='I' || p[i]=='i' || p[i]=='O' || p[i]=='o' || p[i]=='U' || p[i]=='u'){
            cont++;
        }
        
    }
    printf("Esta palavra contem %d vogais e %d caracteres\n", cont, carac);
    

    
    
    
}