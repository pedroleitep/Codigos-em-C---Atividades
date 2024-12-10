#include <stdio.h>
#include <stdlib.h>


/*
Questão  9:
Escreva um programa em C para ordenar um vetor de inteiros usando ponteiro. A primeira
entrada deve ser o tamanho do vetor a ser inserido.
Exemplo Entrada
8
5
7
10
2
3
9
8
75
Saída Esperada:
2 3 5 7 8 9 10 75
*/

void elementosDoVetor(int *vetor, int N)
{
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", (vetor + i));
    }
}

void ordenar(int *vetor, int N)
{
    for (int i = 0; i < N - 1; i++) {
        int *min = (vetor + i);
        for (int j = i + 1; j < N; j++) {
            if (*(vetor + j) < *min) {
                min = (vetor + j);
            }
        }

        int temp = *(vetor + i);
        *(vetor + i) = *min;
        *min = temp;
    }
}

void exibeVetoresOrdenados(int *vetor, int N)
{
    printf("Vetor ordenado:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", *(vetor + i));
    }
    printf("\n");
}

int main()
{
    int tam;
    printf("Quantos valores voce deseja ordenar? \n");
    scanf("%d", &tam);

    int* valores = (int*)malloc(tam*sizeof(int));

    elementosDoVetor(valores, tam);

    ordenar(valores, tam);

    exibeVetoresOrdenados(valores, tam);

    free(valores);

    return 0;
}
