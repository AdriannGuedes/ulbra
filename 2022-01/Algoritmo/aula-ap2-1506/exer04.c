#include <stdio.h>


// Faça um programa que leia um vetor de 5 posições para  números reais e, 
// depois, um código inteiro. Se o código for zero, finalize o programa; 
// se for 1, mostre o vetor na ordem  direta; se for 2, mostre o vetor na 
// ordem inversa. Caso, o código diferir de 1 e 2  escreva uma mensagem informando
//  que o código  e inválido. 

int main(){
  

  int num[5], cod;

  printf("Digite 5 numeros:\n");
  for (int i = 0; i < 5; i++){
    printf("Digite um numero:\n");
    scanf("%d%*c", &num[i]);
  }

  printf("Digite um codigo(0,1 ou 2):\n");
  scanf("%d%*c", &cod);

  switch (cod){
  case 0:
    break;

  case 1:
    for (int i = 0; i < 5; i++){
      printf("%d\n", num[i]);
    }
    break;

  case 2:
    for (int i = 4; i >= 0; i--){
      printf("%d\n", num[i]);
    }
    break;

  default:
    printf("Codigo invalido\n");
    break;
  }
}