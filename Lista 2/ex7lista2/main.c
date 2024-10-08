#include <stdio.h>
#include <stdlib.h>

/*
QUESTÃO 7:
Faça um programa que imprima os L primeiros elementos da série de Fibonacci. Por
exemplo, se o usuário digitou o número 40, deverão ser apresentados os 40 números da
sequência na tela.
*/

int main() {
    int L, i;
    long long int t1 = 1, t2 = 1, proximoTermo;

    // Entrada de dados
    //printf("Digite o numero de termos da serie de Fibonacci que deseja exibir: ");
    scanf("%d", &L);

    // Verifica se o número de termos é positivo
    if (L <= 0) {
        printf("Por favor, insira um numero inteiro positivo.\n");
        return 1; // Finaliza o programa com código de erro
    }

    // Exibe os primeiros L termos da série de Fibonacci
    //printf("Serie de Fibonacci:\n");

    for (i = 1; i <= L; i++) {
        printf("%lld ", t1);  // Exibe o termo atual

        proximoTermo = t1 + t2; // Calcula o próximo termo
        t1 = t2;  // Atualiza t1 para o próximo termo
        t2 = proximoTermo; // Atualiza t2 para o próximo termo
    }

    return 0;
}
