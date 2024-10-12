#include <stdio.h>
#include <stdlib.h>

//int divisao(int numerador, int denominador);
int divisaoRec(int numerador, int denominador);

int main()
{
    int num, den;

    printf("Digite o numerador e o denominador: \n");
    scanf("%d %d", &num, &den);

    //printf("O resultado do resto da divisao eh: %d\n", divisao(num,den));
    printf("O resultado do resto da divisao eh: %d\n", divisaoRec(num,den));

    return 0;
}

int divisao(int numerador, int denominador){

    while(numerador >= denominador){
        numerador -= denominador;
    }

    return numerador;
}

int divisaoRec(int numerador, int denominador){
    if(numerador < denominador) return numerador;
    else return divisaoRec(numerador - denominador, denominador);
}

