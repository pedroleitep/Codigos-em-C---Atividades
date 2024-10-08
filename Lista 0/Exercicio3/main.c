#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //declaração de variáveis
    float altura, base, area, perimetro, diagonal;

    //leitura da base
    //printf("Digite a base do retangulo: \n");
    scanf(" %f", &base);

    //leitura da altura
    //printf("\nDigite a altura do retangulo: \n");
    scanf(" %f", &altura);

    //calcular area
    area = base * altura;

    //calcular perímetro
    perimetro = 2 * (base + altura);

    // Calcular a diagonal usando o teorema de Pitágoras
    diagonal = sqrt(pow(base, 2) + pow(altura, 2));

    //mostrar resultados
    /*printf("\nArea do retangulo: %.2f", area);
    printf("\nPerimetro do retangulo: %.2f", perimetro);
    printf("\nDiagonal do retangulo: %.2f\n", diagonal);*/
    printf("%.2f\n", perimetro);
    printf("%.2f\n", area);
    printf("%.2f\n", diagonal);

    return 0;
}
