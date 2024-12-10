#include <stdio.h>
#include <stdlib.h>

#define TAM 10  // Define o tamanho da turma como 10

// Procedimento para preencher o vetor com as notas dos alunos
void preencherNotas(float notas[]) {
    for (int i = 0; i < TAM; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
}

// Procedimento para calcular a média e contar quantos alunos estão acima da média
void calcularMediaEContar(float notas[]) {
    float soma = 0, media;
    int acimaMedia = 0;

    // Calcula a soma das notas
    for (int i = 0; i < TAM; i++) {
        soma += notas[i];
    }

    // Calcula a média
    media = soma / TAM;

    // Conta quantos alunos estão acima da média
    for (int i = 0; i < TAM; i++) {
        if (notas[i] > media) {
            acimaMedia++;
        }
    }

    // Exibe os resultados
    printf("Média: %.2f\n", media);
    printf("Alunos acima da média: %d\n", acimaMedia);
}

int main() {
    float notas[TAM];

    // Chama o procedimento para preencher as notas
    preencherNotas(notas);

    // Chama o procedimento para calcular a média e contar os alunos acima da média
    calcularMediaEContar(notas);

    return 0;
}
