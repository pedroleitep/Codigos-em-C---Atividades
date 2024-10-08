#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variáveis
    int hora, min, totalMin;

    //Dados
    /*printf("Hello world!\n");*/
    scanf("%i %i", &hora, &min);

    //Cálculo
    totalMin = (hora * 60) + min;

    //Exibir
    printf("%i", totalMin);

    return 0;
}
