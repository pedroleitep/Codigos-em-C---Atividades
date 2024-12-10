#include <stdio.h>
#include <stdlib.h>

#define TAM 4

/*Questão 6:
Faça um programa para preencher uma matriz 4 x 4, em seguida apresentar na tela a soma
dos elementos abaixo da diagonal principal. Mostre na tela os elementos da diagonal principal
também.
2
Exemplo Entrada
11 58 73 33 69 6 45 21 84 8 54 91 31 78 16 42
Saída Esperada:
286
11 6 54 42
*/

void preencheMatriz(int M[TAM][TAM]){
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            //printf("Digite o valor em %d x %d: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }
}

void exibeMatriz(int M[TAM][TAM]){
    printf("\n");
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
                printf("%3d", M[i][j]);
        }
        printf("\n");
    }
}

void somaAbaixoDiagonal(int M[TAM][TAM]){
    int somaAbaixoDiagonal = 0;

    for(int i = 1; i < TAM; i++){
        for(int j = 0; j < i; j++){
                somaAbaixoDiagonal += M[i][j];
        }
    }
    printf("\nA soma dos numeros abaixo da diagonal principal eh: %d\n", somaAbaixoDiagonal);
}

void exibeDiagonalPrincipal(int M[TAM][TAM]){
     for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            if(i==j){
                printf("%d ", M[i][j]);
            }
        }
    }
}

int main()
{
    int matrizM[TAM][TAM];
    preencheMatriz(matrizM);
    exibeMatriz(matrizM);
    somaAbaixoDiagonal(matrizM);
    exibeDiagonalPrincipal(matrizM);

    return 0;
}
