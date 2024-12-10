#include <stdio.h>
#include <string.h>
#include <string.h>

/*
Questão 12:
Escreva um programa em C para imprimir todas as permutações de um vetor de char usando
ponteiros.
Exemplo Entrada
abcd
Saída Esperada:
As permutações da string são:
abcd abdc acbd acdb adcb adbc bacd badc bcad bcda bdca bdac cbad
cbda cabd cadb cdab cdba db ca dbac dcba dcab dacb dabc
*/

void permutar(char *str, int inicio, int fim) {
    if (inicio == fim) {
        printf("%s ", str);
    } else {
        for (int i = inicio; i <= fim; i++) {
            // Troca o caractere atual com o inicial
            char temp = *(str + inicio);
            *(str + inicio) = *(str + i);
            *(str + i) = temp;

            // Chama recursivamente a função com o próximo índice
            permutar(str, inicio + 1, fim);

            // Desfaz a troca para restaurar a string original
            temp = *(str + inicio);
            *(str + inicio) = *(str + i);
            *(str + i) = temp;
        }
    }
}

int main() {
    char str[100];
    printf("Digite a string: ");
    scanf("%s", str);

    int n = strlen(str);
    printf("As permutações da string são:\n");
    permutar(str, 0, n - 1);
    printf("\n");

    return 0;
}
