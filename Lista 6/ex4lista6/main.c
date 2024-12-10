#include <stdio.h>
#include <stdlib.h>

/*
Quest�o 4:
Escreva um programa em C para encontrar o maior elemento em um vetor de inteiros usando a
Aloca��o de Mem�ria Din�mica. Pe�a para o usu�rio inserir inicialmente o tamanho do vetor a
ser criado, e ap�s, pe�a para ele inserir um a um todos os valores do vetor.
Exemplo Entrada
7
5
8
6
2
7
6
1
Sa�da Esperada:
8
*/

int main() {
    int tamanho, *vetor, maior;

    // Solicita o tamanho do vetor ao usu�rio
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    // Aloca dinamicamente a mem�ria para o vetor
    vetor = (int *)malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar mem�ria.\n");
        return 1;  // Encerra o programa se a aloca��o falhar
    }

    // Solicita ao usu�rio que insira os elementos do vetor
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Inicializa o maior valor com o primeiro elemento do vetor
    maior = vetor[0];

    // Encontra o maior elemento no vetor
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    // Exibe o maior elemento
    printf("Maior elemento: %d\n", maior);

    // Libera a mem�ria alocada para o vetor
    free(vetor);

    return 0;
}
