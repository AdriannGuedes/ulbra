#include <stdio.h>
#include <math.h>

int main()
{
    float alt_degrau,alt_usuario,qtdd_degraus;

    printf("Digite a altura do degrau:\n");
    scanf("%f%*c", &alt_degrau);

    printf("Digite a altura que o usuario deseja chegar:\n");
    scanf("%f%*c", &alt_usuario);

    qtdd_degraus = alt_usuario/alt_degrau;

    printf("Degrais que o usuario ira subir:%.1f/n\n", qtdd_degraus);

    return 0;
}