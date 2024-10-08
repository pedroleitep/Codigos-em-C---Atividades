#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Variáveis
    float raio, perimetrocir, areacir;

    //leitura do raio do círculo
    //printf("\nDigite o raio do círculo: \n");
    scanf("%f", &raio);

    //calculo da area do quadrado
    perimetrocir = 2 * M_PI * raio;
    areacir = M_PI * pow(raio, 2);

    //resposta circulo
    /*printf("\nO perimetro do circulo eh: %.2f", perimetrocir);
    printf("\nA area do circulo eh: %.2f", areacir);*/
    printf("%.2f\n", perimetrocir);
    printf("%.2f\n", areacir);

    return 0;
}

