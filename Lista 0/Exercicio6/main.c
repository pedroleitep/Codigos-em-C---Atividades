#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variáveis
    float razao, termo1, termo10;

    //Dados
    //printf("Digite a razao da PA e o primeiro termo: \n");
    scanf("%f %f", &razao, &termo1);

    //Cálculo da PA
    termo10 = termo1 + 9 * razao;

    //Exibir
    printf("%.0f", termo10);


    return 0;
}
