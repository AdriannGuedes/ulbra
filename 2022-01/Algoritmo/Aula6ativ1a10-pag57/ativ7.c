#include <stdio.h>
#include <math.h>

int main()

{
    float A, B, C;
    int I;

    printf("Digite um valor para A:\n");
    scanf("%f%*c", &A);

    printf("Digite um valor para B:\n");
    scanf("%f%*c", &B);

    printf("Digite um valor para C:\n");
    scanf("%f%*c", &C);

    printf("Digite um valor para I (1, 2 ou 3):\n");
    scanf("%i%*c", &I);

    if (I=1){
        if(A<B && A<C){
            if(B>C){
                printf("A ordem crescente dos numeros e: %f - %f - %f\n", A, B, C );
            }else{
                printf("A ordem crescente dos numeros e: %f - %f - %f\n", A, C , B);
            }
        }
        if (B<A && B<C){
            if (A<C){
                printf("A ordem crescente dos numeros e: %f - %f - %f\n", B, A, C);
            }else{
                printf("A ordem crescente dos numeros e: %f - %f - %f\n", B, C, A);
            }
            
        }
        if (C<A && C<B){
            if (A<B){
                printf("A ordem crescente dos numeros e: %f - %f - %f\n", C, A, B);
            }else{
                printf("A ordem crescente dos numeros e: %f - %f - %f\n", C, B, A);
            }
            
        }
        
        

        
    }

    if (I=2){
        if (A<B && A>C){
            if (B>C){
                printf("A ordem decrescente dos numeros e: %f - %f - %f\n", B, A, C);
            }else{
                printf("A ordem decrescente dos numeros e: %f - %f - %f\n", A, C, B);
            }
            
        }
        if (B>A && B>C){
            if (A>C){
                printf("A ordem decrescente dos numeros e: %f - %f - %f\n", B, A ,C);
                
            }else{
                printf("A ordem dos numeros e: %f - %f - %f\n", B, C, A);
            }
            
        }
        if (C>A && C>B){
            if (A>B){
                printf("A ordem dos numeros e: %f - %f - %f\n", C, A, B);
            }else{
                printf("A ordem dos numeros e: %f - %f - %f\n", C ,B ,A);
            }
        }
    }

    if (I=3){
            if (A>B && A>C){
                printf("A ordem desejada e: %f - %f - %f\n", B, A, C);
            }
            if (B>A && B>C){
                printf("A ordem desejada e: %f - %f - %f\n", A, B, C);
            }
            if (C>B && C>A){
                printf("A ordem desejada e: %f - %f - %f\n", A, C, B);
            }
            
    }
        
        
        
    
    
    


}