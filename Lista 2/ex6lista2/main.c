#include <stdio.h>
#include <stdlib.h>

/*
Questão 6:
Escreva um algoritmo que lê um valor n inteiro e positivo e que calcula a seguinte soma:
S = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
O algoritmo deve escrever cada termo gerado e o valor final de S.
*/

int main()
{
    //variaveis
    int n;
    float S = 0.0;

    // Entrada de dados
    //printf("Digite um valor inteiro e positivo para n: ");
    scanf("%d", &n);

    // Verifica se o número é positivo
    if (n <= 0) {
        //printf("O valor de n deve ser positivo.\n");
        return 1; // Finaliza o programa com código de erro
    }

    for (int den = 1; den <= n; den++) {
        S += 1.0 / den;
    }

    // Exibe o valor final de S
    printf("%.2f\n", S);

    return 0;
}
