#include <stdio.h>

int main(){

    
    printf("Os numeros que compoe a tabuada do 9:\n");
    int i=9;

    while(i<=90){
        if (i%9==0){
             printf("%d\n", i);
        }
        i++;
        
       
    }
    return 0;
    
}