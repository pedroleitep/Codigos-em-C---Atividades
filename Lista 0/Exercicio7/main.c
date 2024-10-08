#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Variáveis
    float razao, termo1, termo5;

    //Dados
    //printf("Digite a razao da PA: \n");
    scanf("%f %f", &razao, &termo1);

    //Cálculo da PA
    termo5 = termo1 * pow(razao,4);//Fórmula an = a1 * r^(n-1)

    //Exibir
    printf("%.0f", termo5);


    return 0;
}
