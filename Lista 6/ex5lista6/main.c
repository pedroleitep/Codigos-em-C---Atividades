#include <stdio.h>
#include <stdlib.h>

#define TAM 5
/*Questão 5:
Faça um procedimento que preencha uma matriz M 5 x 5. Faça uma função que receba uma
matriz preenchida, calcule e retorne cada uma das somas a seguir (uma função para cada letra
abaixo):
(a) da linha 4 de M
(b) da coluna 2 de M
(c) da diagonal principal
(d) da diagonal secundária
(e) de todos os elementos da matriz.
Faça um programa que faça as devidas declarações e acione os módulos para exemplificar o seu
uso.
Exemplo Entrada
72 19 88 45 53 9 61 34 97 26 15 79 68 3 59 40 81 10 92 56 24 67 48
7 93
Saída Esperada:
239
307
386
106
1246
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

void somaLinha4(int M[TAM][TAM]){
    int somaLin4 = 0;

        for(int j = 0; j < TAM; j++){
             somaLin4 += M[4][j];
        }

    printf("\na) A soma da linha 4 de M eh: %d\n", somaLin4);
}

void somaColuna2(int M[TAM][TAM]){
    int somaCol2 = 0;

        for(int i = 0; i < TAM; i++){
             somaCol2 += M[i][2];
        }

    printf("b) A soma da coluna 2 de M eh: %d\n", somaCol2);
}

void somaDiagonalPrincipal(int M[TAM][TAM]){
    int somaDiagonal = 0;

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            if(i==j){
                somaDiagonal += M[i][j];
            }
        }
    }
    printf("c) A soma da diagonal principal eh: %d\n", somaDiagonal);
}

void somaDiagonalSecundaria(int M[TAM][TAM]){
    int somaDiagonalSecundaria = 0;

    for(int i = 0; i < TAM; i++){
            somaDiagonalSecundaria += M[i][TAM - i - 1];
    }
    printf("d) A soma da diagonal secundaria eh: %d\n", somaDiagonalSecundaria);
}

void somaElementos(int M[TAM][TAM]){
    int somaTotal = 0;
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
                somaTotal += M[i][j];
        }
    }
    printf("e) A soma de todos os elementos da matriz eh: %d\n", somaTotal);
}

int main()
{
    int matrizM[TAM][TAM];
    preencheMatriz(matrizM);
    exibeMatriz(matrizM);
    somaLinha4(matrizM);
    somaColuna2(matrizM);
    somaDiagonalPrincipal(matrizM);
    somaDiagonalSecundaria(matrizM);
    somaElementos(matrizM);

    return 0;
}
