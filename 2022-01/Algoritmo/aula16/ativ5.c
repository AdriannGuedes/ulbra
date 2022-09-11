#include <math.h>
#include <stdio.h>

int main(){

    int tlogica[15];
    int tlinguagem[10];

    for(int i=0; i<15; i++)
    {
        printf("Digite o codigo de logica\n");
       scanf("%d%*c", &tlogica);
    }
     
     for(int i=0; i<10; i++)
    {
        printf("Digite o codigo de linguagem\n");
        scanf("%d%*c", &tlinguagem);
      
    }

    for (int i=0; i<10; i++)
    {
        for (int j=0; j<15; j++)
        {
            if (tlinguagem[i]==tlogica[j]);
        {
            printf("Aluno nas duas turmas %d\n",tlinguagem[i] );
        }
        }
        
        
         
    }
    return 0;
    
    
}