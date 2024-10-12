#include <stdio.h>
#include <stdlib.h>

/*
Fa�a uma fun��o recursiva que calcula o valor de S da s�rie a seguir para n > 0:
S = 1/1! + 1/2! + 1/3! + ... + 1/N!
double serie (int n)
Fa�a um programa principal que leia um n�mero, acione a fun��o e exiba o resultado gerado.
Exemplo Entrada
5
Sa�da Esperada:
1.72
*/

// Fun��o recursiva para calcular o fatorial
double fatorial(int n) {
    if (n == 0 || n == 1)
        return 1.0;
    return n * fatorial(n - 1);
}

// Fun��o recursiva para calcular o valor da s�rie
double serie(int n) {
    if (n == 1)
        return 1.0;
    return (1.0 / fatorial(n)) + serie(n - 1);
}

int main() {
    int n;
    printf("Digite um n�mero: ");
    scanf("%d", &n);

    if (n > 0) {
        double resultado = serie(n);
        printf("Resultado da s�rie: %.2f\n", resultado);
    } else {
        printf("O n�mero deve ser maior que 0.\n");
    }

    return 0;
}
