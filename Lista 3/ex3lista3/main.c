#include <stdio.h>
#include <stdlib.h>

/*
Questão 3:
Faça um procedimento que recebe 3 valores inteiros por parâmetro e os exiba em ordem crescente.
Faça um programa que leia N conjuntos de 3 valores e acione o procedimento para cada conjunto.
(N deve ser lido do teclado)
1
Exemplo Entrada
5
417 526 597
300 820 82
671 788 112
384 68 736
803 642 681
Saída Esperada:
417 526 597
82 300 820
112 671 788
68 384 736
642 681 803
*/

#include <stdio.h>

void exibirEmOrdemCrescente(int a, int b, int c);
//void convertOrdemCrescente(int N1, int N2, int N3);

int main() {
    // Variáveis
    int N, N1, N2, N3;

    //Lê a quantidade de conjuntos
    //printf("Digite a quantidade de conjuntos de valores: \n");
    scanf("%d", &N);

    //Lê os N conjuntos de 3 números e os exibe em ordem crescente
    for (int i = 0; i < N; i++) {
        //printf("\nDigite 3 valores inteiros: \n");
        scanf("%d %d %d", &N1, &N2, &N3);

        exibirEmOrdemCrescente(N1, N2, N3);
        //convertOrdemCrescente(N1, N2, N3);
    }

    return 0;
}

void exibirEmOrdemCrescente(int a, int b, int c) {
    int aux;

    // Usando uma lógica simples de ordenação
    if (a > b) { aux = a; a = b; b = aux; }
    if (a > c) { aux = a; a = c; c = aux; }
    if (b > c) { aux = b; b = c; c = aux; }

    // Exibe os números em ordem crescente
    printf("%d %d %d\n", a, b, c);
}

/*
void convertOrdemCrescente(int N1, int N2, int N3) {
    int maior, medio, menor;

    // Determina o maior valor
    if (N1 > N2 && N1 > N3) {
        maior = N1;
        if (N2 > N3) {
            medio = N2;
            menor = N3;
        } else {
            medio = N3;
            menor = N2;
        }
    } else if (N2 > N1 && N2 > N3) {
        maior = N2;
        if (N1 > N3) {
            medio = N1;
            menor = N3;
        } else {
            medio = N3;
            menor = N1;
        }
    } else {
        maior = N3;
        if (N1 > N2) {
            medio = N1;
            menor = N2;
        } else {
            medio = N2;
            menor = N1;
        }
    }

    // Exibe os valores em ordem crescente
    printf("\n%d %d %d\n", menor, medio, maior);
}
*/
