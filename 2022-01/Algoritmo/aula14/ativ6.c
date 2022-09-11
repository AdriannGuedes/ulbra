#include <stdio.h>

int main(){

    int s, i;
    i=0;
    

    do{
         printf("Digite a senha:\n");
    scanf("%d%*c", &s);

    if (s!=1234){
        i++;
        printf("Acesso negado, tente novamente\n");
        
    }
    else{
        printf("Acesso permitido\n");
        printf("Foram digitadas %d senhas incorretas\n", i);
        
    }

        
    } while (s!=1234);

   
    

   
    return 0;
    


}