#include <stdio.h>
#include <stdlib.h>

/*
Questão 6:
Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de
S, calculado segundo a fórmula abaixo.
S = 1 +
1
1! +
1
2! +
1
3! + ... +
1
N!
Faça um programa que leia N e imprima o valor retornado pela função.
Exemplo Entrada
14
Saída Esperada:
2.718282
*/

int fatorial(int valor){
    int fat = 1;

    for(int num = valor; num > 1; num --){
        fat *= num;
    }

    return fat;
}

float calculaS(int N){
    float S = 0;
    for(int den = 0; den <= N; den++){
        S += 1.0/fatorial(den);
    }

    return S;
}

int main()
{
    int denFinal;
    //printf("Digite N: \n");
    scanf("%d", &denFinal);
    printf("%f", calculaS(denFinal));

    return 0;
}
