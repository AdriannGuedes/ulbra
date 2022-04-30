#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

/*Programa que recebe a idade calcula e mostra a categoria em que se está de acordo com a tabela*/

int main(){

    UINT CPAGE_UTF8 = 65001;
   SetConsoleOutputCP(CPAGE_UTF8);

    int idade;

    printf("Digite a sua idade:\n");
    scanf("%i%*c", &idade);

   if (idade>=5 && idade <=7)
   {
       printf("Você está na categoria Infantil\n", idade);
   }
   else if (idade>=8 && idade <=10){
       printf("Você está na categoria Juvenil\n", idade);
   }
   else if (idade>=11 && idade<=15)
   {
       printf("Você está na categoria Adolescente\n", idade);
   }
   else if (idade>=16 && idade<=30)
   {
       printf("Você está na categoria Adulto\n", idade);
   }
   else if (idade>30)
   {
       printf("Você está na categoria Senior\n", idade);
   }
   else if(idade<5 && idade>=0){
       printf("Você é muito novo ainda...\n");
   }
   return 0;
   
   
   
}