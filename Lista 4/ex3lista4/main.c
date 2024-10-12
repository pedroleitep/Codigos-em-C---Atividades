#include <stdio.h>
#include <stdlib.h>

//int divisao(int numerador, int denominador);
int divisaoRec(int numerador, int denominador);

int main()
{
    int num, den;

    printf("Digite o numerador e o denominador: \n");
    scanf("%d %d", &num, &den);

    //printf("O resultado da divisao eh: %d\n", divisao(num,den));
    printf("O resultado da divisao eh: %d\n", divisaoRec(num,den));

    return 0;
}

int divisao(int numerador, int denominador){
    int cont = 0;

    while(numerador >= denominador){
        numerador -= denominador;
        cont++;
    }

    return cont;
}

int divisaoRec(int numerador, int denominador){
    if(numerador < denominador) return 0;
    else return 1 + divisaoRec(numerador - denominador, denominador);
}
