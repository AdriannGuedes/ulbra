#include <stdio.h>
#include <time.h>
#include <locale.h>

/*Programa que mostra o horario e o mês escrito por extenso*/

struct rgAgora{

   int dia, mes, ano, h, m, s;
   
}

;int main(){
    
    struct tm tempo;
    time_t tempoSeg;

    time(&tempoSeg);
    tempo = *localtime(&tempoSeg);

    struct rgAgora agora;

    agora.dia = tempo.tm_mday;
    agora.mes = tempo.tm_mon + 1;
    agora.ano = tempo.tm_year + 1900;
    agora.h = tempo.tm_hour;
    agora.m = tempo.tm_min;
    agora.s = tempo.tm_sec;

    printf("Data:\n");
    printf("%02d/%02d/%d", agora.dia, agora.mes, agora.ano);

    if (agora.mes = tempo.tm_mon + 1 ==1)
    {
        printf(" Janeiro\n");
    }
    if (agora.mes = tempo.tm_mon + 1 ==2)
    {
        printf(" Fevereiro\n");
    }
    if (agora.mes= tempo.tm_mon +1 ==3)
    {
        printf(" Março\n");
    }
    if (agora.mes = tempo.tm_mon +1 ==4)
    {
        printf(" Abril\n", agora.mes);
    }
    if (agora.mes = tempo.tm_mon +1 ==5)
    {
        printf(" Maio\n");
    }
    if (agora.mes = tempo.tm_mon +1 ==6)
    {
        printf(" Junho\n");
    }
    if (agora.mes = tempo.tm_mon +1 ==7)
    {
        printf(" Julho\n");
    }
    if (agora.mes = tempo.tm_mon +1 ==8)
    {
        printf(" Agosto\n");
    }
    if (agora.mes = tempo.tm_mon +1 ==9)
    {
        printf(" Setembro\n");
    }
    if (agora.mes = tempo.tm_mon +1 ==10)
    {
        printf(" Outubro\n");
    }
    if (agora.mes = tempo.tm_mon +1 ==11)
    {
        printf(" Novembro\n");
    }
    if (agora.mes = tempo.tm_mon +1 ==12)
    {
        printf(" Dezembro\n");
    }
    
    printf("Hora:\n");
    printf("%02d:%02d:%02d horas.\n", agora.h, agora.m, agora.s);

    return 0;
}

