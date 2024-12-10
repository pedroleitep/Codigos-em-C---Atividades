#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa em C para calcular a soma de todos os elementos em um vetor de inteiros
usando ponteiros. A primeira entrada deve ser o tamanho do vetor a ser inserido.
Exemplo Entrada
7
1
2
3
4
5
6
7

Saída Esperada:
28
*/

void elementosDoVetor(int *vetor, int N)
{
    printf("\nDigite os elementos do vetor:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", (vetor + i));
    }
    printf("\n");
}

void somaVetor (int *vetor, int N)
{
    int soma = 0;
    for(int i = 0; i  < N; i++){
        soma += *(vetor + i);
    }
    printf("Soma dos elementos do vetor: %d\n", soma);
}

int main()
{
    int tam;
    printf("Quantos valores voce deseja ordenar? \n");
    scanf("%d", &tam);

    int* valores = (int*)malloc(tam*sizeof(int));

    elementosDoVetor(valores, tam);

    somaVetor(valores, tam);

    return 0;
}
