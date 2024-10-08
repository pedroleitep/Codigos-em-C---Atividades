#include <stdio.h>
#include <stdlib.h>

    /*
    Questão 4:
    Escrever um algoritmo que lê um valor N inteiro e positivo e que calcula e escreve o valor
    de E:
    E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + .... + 1 / N!
    */

// Função para calcular o fatorial de um número
int fatorial(int valor)
{
    int fat = 1;
    for(int num = valor; num > 1; num--)
    {
        fat *= num;
    }
    return fat;
}

float calculaE(int N)
{
    float E = 0;
    for(int den = 0; den <= N; den++)
    {
        E += 1.0/fatorial(den);
    }
    return E;
}

int main()
{
    int denFinal;
    //printf("Digite N: ");
    scanf("%d", &denFinal);
    printf("%.2f", calculaE(denFinal));

    return 0;
}
