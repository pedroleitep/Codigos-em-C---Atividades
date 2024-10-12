#include <stdio.h>
#include <stdlib.h>

/*
Faça uma função recursiva que calcula o valor de S da série a seguir para n > 0:
S = 1/1! + 1/2! + 1/3! + ... + 1/N!
double serie (int n)
Faça um programa principal que leia um número, acione a função e exiba o resultado gerado.
Exemplo Entrada
5
Saída Esperada:
1.72
*/

// Função recursiva para calcular o fatorial
double fatorial(int n) {
    if (n == 0 || n == 1)
        return 1.0;
    return n * fatorial(n - 1);
}

// Função recursiva para calcular o valor da série
double serie(int n) {
    if (n == 1)
        return 1.0;
    return (1.0 / fatorial(n)) + serie(n - 1);
}

int main() {
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);

    if (n > 0) {
        double resultado = serie(n);
        printf("Resultado da série: %.2f\n", resultado);
    } else {
        printf("O número deve ser maior que 0.\n");
    }

    return 0;
}
