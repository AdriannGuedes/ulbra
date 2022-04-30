#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

int main(){

    UINT CPAGE_UTF8 = 65001;
   SetConsoleOutputCP(CPAGE_UTF8);

    float preco, cat, valoraument, valorim, novopreco;
    char situacao;

    printf("Digite o preço:\n");
    scanf("%f%*c", &preco);

    printf("Digite a categoria do produto(1-limpeza, 2-alimentacao, 3-vestuario):\n");
    scanf("%f%*c", &cat);

    printf("Digite a situação(R-produtos que precisam de refrigeração, N-produtos que não precisam de refrigeração):\n");
    scanf("%c%*c", &situacao);

    if (preco <= 25){
        
        if (cat == 1){
            if (situacao == 'N'){
                valoraument = preco * 5 / 100;
                printf("O valor do aumento é de: %.2f\n", valoraument);

                valorim=preco*8/100;
              printf("O valor do imposto é de: %.2f\n", valorim);

              novopreco=preco+valoraument-valorim;
              printf("O novo preço é de: %.2f\n", novopreco);
              if (novopreco<=50){
                  printf("Barato\n");
              }
              if (novopreco>50 && novopreco<120){
                  printf("Normal\n");
              }
              if (novopreco>=120)
              {
                  printf("Caro\n");
              }
            }
            if (situacao == 'R'){
              valoraument = preco * 5 / 100;
              printf("O valor do aumento é de %.2f\n", valoraument);

              valorim=preco*5/100;
              printf("O valor do imposto é de %.2f\n", valorim);

              novopreco=preco+valoraument-valorim;
              printf("O novo preço é de: %.2f\n", novopreco);
              if (novopreco<=50){
                  printf("Barato\n");
              }
              if (novopreco>50 && novopreco<120){
                  printf("Normal\n");
              }
              if (novopreco>=120){
                  printf("Caro\n");
              }
            }

        }
        
        else if (cat == 2){
            if (situacao == 'N'){
               valoraument = preco * 8 / 100;
               printf("O valor do aumento é de: %.2f\n", valoraument);

               valorim=preco*5/100;
              printf("O valor do imposto é de: %.2f\n", valorim);

              novopreco=preco+valoraument-valorim;
              printf("O novo preço é de: %.2f\n", novopreco);
              if (novopreco<=50){
                  printf("Barato\n");
              }
              if (novopreco>50 && novopreco<120){
                  printf("Normal\n");
              }
              if (novopreco>=120){
                  printf("Caro\n");
              }
              
            }
            if (situacao == 'R'){
                valoraument = preco * 8 / 100;
                printf("O valor do aumento é de: %.2f\n", valoraument);

                valorim=preco*5/100;
              printf("O valor do imposto é de: %.2f\n", valorim);

              novopreco=preco+valoraument-valorim;
              printf("O novo preco é de: %.2f\n", novopreco);
              if (novopreco<=50){
                  printf("Barato\n");
              }
              if (novopreco>50 && novopreco<120){
                  printf("Normal\n");
              }
              if (novopreco>=120){
                  printf("Caro\n");
              }
            }
        }
        
        else if (cat == 3){
            if (situacao == 'N'){
               valoraument = preco * 10 / 100;
               printf("O valor do aumento é de: %.2f\n", valoraument);

               valorim=preco*8/100;
              printf("O valor do imposto é de: %.2f\n", valorim);

              novopreco=preco+valoraument-valorim;
              printf("O novo preco é de: %.2f\n", novopreco);
              if (novopreco<=50){
                  printf("Barato\n");
              }
              if (novopreco>50 && novopreco<120){
                  printf("Normal\n");
              }
              if (novopreco>=120){
                  printf("Caro\n");
              }
            }
            if (situacao == 'R'){
                valoraument = preco * 10 / 100;
                printf("O valor do aumento é de: %.2f\n", valoraument);

                valorim=preco*5/100;
              printf("O valor do imposto é de: %.2f\n", valorim);

              novopreco=preco+valoraument-valorim;
              printf("O novo preco é de: %.2f\n", novopreco);
              if (novopreco<=50){
                  printf("Barato\n");
              }
              if (novopreco>50 && novopreco<120){
                  printf("Normal\n");
              }
              if (novopreco>=120){
                  printf("Caro\n");
              }
            }
        }

        else{
            printf("Categoria inválida, tente novamente\n");
        }
    }
    
    else if (preco > 25){
        
        if (cat == 1){
            if (situacao == 'N'){
                valoraument = preco * 12 / 100;
                printf("O valor do aumento é de: %.2f\n", valoraument);

                valorim=preco*8/100;
              printf("O valor do imposto é de: %.2f\n", valorim);

              novopreco=preco+valoraument-valorim;
              printf("O novo preco é de: %.2f\n", novopreco);
              if (novopreco<=50){
                  printf("Barato\n");
              }
              if (novopreco>50 && novopreco<120){
                  printf("Normal\n");
              }
              if (novopreco>=120){
                  printf("Caro\n");
              }
            }
            if (situacao == 'R'){
                valoraument = preco * 12 / 100;
                printf("O valor do aumento é de: %.2f\n", valoraument);

                valorim=preco*5/100;
              printf("O valor do imposto é de: %.2f\n", valorim);

              novopreco=preco+valoraument-valorim;
              printf("O novo preco é de: %.2f\n", novopreco);
              if (novopreco<=50){
                  printf("Barato\n");
              }
              if (novopreco>50 && novopreco<120){
                  printf("Normal\n");
              }
              if (novopreco>=120){
                  printf("Caro\n");
              }
            }
        }

        if (cat == 2){
            if (situacao == 'N'){
               valoraument = preco * 15 / 100;
               printf("O valor do aumento é de: %.2f\n", valoraument); 

               valorim=preco*5/100;
              printf("O valor do imposto é de: %.2f\n", valorim);

              novopreco=preco+valoraument-valorim;
              printf("O novo preco é de: %.2f\n", novopreco);
              if (novopreco<=50){
                  printf("Barato\n");
              }
              if (novopreco>50 && novopreco<120){
                  printf("Normal\n");
              }
              if (novopreco>=120){
                  printf("Caro\n");
              }
            }
            if (situacao == 'R'){
                valoraument = preco * 15 / 100;
                printf("O valor do aumento é de: %.2f\n", valoraument);

                valorim=preco*5/100;
              printf("O valor do imposto é de: %.2f\n", valorim);

              novopreco=preco+valoraument-valorim;
              printf("O novo preco é de: %.2f\n", novopreco);
              if (novopreco<=50){
                  printf("Barato\n");
              }
              if (novopreco>50 && novopreco<120){
                  printf("Normal\n");
              }
              if (novopreco>=120){
                  printf("Caro\n");
              }
            }
        }
        
        if (cat == 3){
            if (situacao == 'N'){
                valoraument = preco * 18 / 100;
                printf("O valor do aumento é de: %.2f\n", valoraument);

                valorim=preco*8/100;
              printf("O valor do imposto é de: %.2f\n", valorim);

              novopreco=preco+valoraument-valorim;
              printf("O novo preco é de: %.2f\n", novopreco);
              if (novopreco<=50){
                  printf("Barato\n");
              }
              if (novopreco>50 && novopreco<120){
                  printf("Normal\n");
              }
              if (novopreco>=120){
                  printf("Caro\n");
              }
            }
            if (situacao == 'R'){
                valoraument = preco * 18 / 100;
                printf("O valor do aumento é de: %.2f\n", valoraument);

                valorim=preco*5/100;
              printf("O valor do imposto é de: %.2f\n", valorim);

              novopreco=preco+valoraument-valorim;
              printf("O novo preco é de: %.2f\n", novopreco);
              if (novopreco<=50){
                  printf("Barato\n");
              }
              if (novopreco>50 && novopreco<120){
                  printf("Normal\n");
              }
              if (novopreco>=120){
                  printf("Caro\n");
              }
            }
        }
        else{
            printf("Categoria inválida, tente novamente\n");
        }
    }
}