#include <stdio.h>
#include <stdlib.h>

/*
Questão 8:
Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de
S, calculado segundo a fórmula abaixo.
S = 2/4+ 5/5 + 10/6 + 17/7 + 26/8 + ... + (n2 + 1)/(n + 3)
Faça um programa que leia N e imprima o valor retornado pela função.
Exemplo Entrada
3
Saída Esperada:
3.166667
*/

// Função para calcular o valor de S com base na fórmula fornecida
float calculaS(int N) {
    float S = 0.0;

    for (int i = 1; i <= N; i++) {
        S += (float)(i * i + 1) / (i + 3);
    }

    return S;
}

int main() {
    int N;

    //printf("Digite um valor inteiro e positivo para N: ");
    scanf("%d", &N);

    if (N > 0) {
        // Chama a função que calcula S e imprime o resultado
        float resultado = calculaS(N);
        printf("%.6f\n", resultado);
    } else {
        printf("Por favor, insira um valor positivo.\n");
    }

    return 0;
}

