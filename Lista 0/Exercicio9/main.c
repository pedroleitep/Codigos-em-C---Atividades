#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variáveis
    float num, den, dec;

    //Dados
    /*printf("Digite um numerador e um denominador: \n");*/
    scanf("%f %f", &num, &den);

    dec = num / den;

    printf("%.2f", dec);

    return 0;
}
