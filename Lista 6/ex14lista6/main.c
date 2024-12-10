#include <stdio.h>
#include <stdlib.h>

/*
Questão 14:
Escreva um programa em C para imprimir um vetor de caracteres ao contrário usando um
ponteiro. A primeira entrada deve ser o tamanho do vetor a ser inserido.
Exemplo Entrada
10
abcdefghij
Saída Esperada:
jihgfedcba
*/

void inverteVetor(char *str, int n)
{
    char aux;
    for (int i = n - 1; i >= 0; i--) {
        printf("%c", *(str + i)); // Acessa o vetor de trás para frente usando ponteiro
    }
    printf("\n");
}

int main()
{
    int tam;
    printf("Tamanho do vetor: ");
    scanf("%d", &tam);
    getchar();

    char *string = (char*)malloc((tam + 1)* sizeof(char));

    printf("Caracteres: ");
    fgets(string, tam + 1, stdin);

    inverteVetor(string, tam);

    free(string);

    return 0;
}
