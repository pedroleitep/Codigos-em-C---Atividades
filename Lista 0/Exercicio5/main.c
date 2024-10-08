#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Variáveis
    float cateto1, cateto2, hipotenusa;

    //Dados
    //printf("Digite os dois catetos: \n");
    scanf("%f %f", &cateto1, &cateto2);

    //Cálculo da Hipotenusa
    hipotenusa = sqrt(pow(cateto1,2) + pow(cateto2,2));

    //Exibir
    printf("%.2f", hipotenusa);

    return 0;
}
