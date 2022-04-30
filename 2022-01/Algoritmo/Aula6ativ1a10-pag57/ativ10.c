#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <time.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    

    int d1, m1, a1, d2, m2, a2;

    printf("dia(dd):\n");
    scanf("%i%*c", &d1);

    printf("mês(mm):\n");
    scanf("%i%*c", &m1);

    printf("ano(aaaa):\n");
    scanf("%i%*c", &a1);

    printf("dia(dd):\n");
    scanf("%i%*c", &d2);

    printf("mês(mm):\n");
    scanf("%i%*c", &m2);

    printf("ano(aaaa):\n");
    scanf("%i%*c", &a2);

    if (a1>a2)
    {
        printf("A maior data é: %i/%i/%i", d1, m1, a1);
    }
    if (a2>a1)
    {
        printf("A maior data é: %i/%i/%i", d2, m2, a2);
    }
    if (m1>m2)
    {
        printf("A maior data é: %i/%i/%i", d1, m1, a1);
    }
    if (m2>m1)
    {
        printf("A maior data é: %i/%i/%i", d2, m2, a2);
    }
    if (d1>d2)
    {
        printf("A maior data é: %i/%i/%i", d1, m1, a1);
    }
    if (d2>d1)
    {
        printf("A maior data é %i/%i/%i", d2, m2, a2);
    }
    else{
        printf("As datas são iguais\n");
    }
    
    return 0;
}