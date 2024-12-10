#include <stdio.h>
#include <stdlib.h>

#define TAM 10

/*
Quest�o 3:
Fa�a um procedimento que preencha 2 vetores X e Y com 10 elementos cada um (ocupando
as posi��es de 0 a 9 em cada vetor). Fa�a um outro procedimento que receba dois vetores
preenchidos e gera um novo vetor com os elementos desses 2 vetores intercalados de tal forma
que nas posi��es �mpares do novo vetor estejam os elementos do primeiro vetor e nas posi��es
pares os elementos do segundo vetor recebido por par�metro. Fa�a um procedimento que receba
e exiba o conte�do de um vetor. Fa�a um programa que fa�a as devidas declara��es e acione os
m�dulos para exemplificar o seu uso.
Exemplo Entrada
1 3 5 7 9 11 13 15 17 19 2 4 6 8 10 12 14 16 18 20
Sa�da Esperada:
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
*/


// Procedimento para preencher um vetor com 10 elementos
void preencherVetor(int vetor[], char nome) {
    printf("Digite os elementos do vetor %c:\n", nome);
    for (int i = 0; i < TAM; i++) {
        printf("%c[%d]: ", nome, i);
        scanf("%d", &vetor[i]);
    }
}

// Procedimento para gerar um vetor intercalado a partir de dois vetores dados
void intercalarVetores(int vetorX[], int vetorY[], int vetorIntercalado[]) {
    for (int i = 0; i < TAM; i++) {
        vetorIntercalado[i * 2] = vetorX[i];        // Coloca elementos de X nas posi��es �mpares (0, 2, 4...)
        vetorIntercalado[i * 2 + 1] = vetorY[i];    // Coloca elementos de Y nas posi��es pares (1, 3, 5...)
    }
}

// Procedimento para exibir o conte�do de um vetor
void exibirVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int vetorX[TAM], vetorY[TAM];
    int vetorIntercalado[TAM * 2]; // Vetor para armazenar os elementos intercalados

    // Preenche os vetores X e Y
    preencherVetor(vetorX, 'I');
    preencherVetor(vetorY, 'P');

    // Gera o vetor intercalado
    intercalarVetores(vetorX, vetorY, vetorIntercalado);

    // Exibe o vetor intercalado
    printf("Vetor intercalado:\n");
    exibirVetor(vetorIntercalado, TAM * 2);

    return 0;
}
