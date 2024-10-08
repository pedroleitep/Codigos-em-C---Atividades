#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variáveis
    float A, B, aux;

    //Dados
    /*printf("Digite dois numeros  reais: \n");*/
    scanf("%f %f", &A, &B);

    aux = A;
    A = B;
    B = aux;

    printf("%.2f %.2f", A, B);

    return 0;
}
