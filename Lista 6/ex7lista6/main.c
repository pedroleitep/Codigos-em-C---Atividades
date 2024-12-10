#include <stdio.h>
#include <stdlib.h>

#define LIN 4
#define COL 6

/*Questão 7:
Faça um procedimento que preencha 2 matrizes, A 4 x 6 e B 4 x 6. Faça uma função para cada
uma das situações a seguir, que recebe duas matrizes preenchidas, calcula e retorna as matrizes
indicadas :
(a) uma matriz S que seja a soma de A e B.
(b) uma matriz D que seja a diferença de A e B. (A - B).
Faça um programa que faça as devidas declarações e acione os módulos para exemplificar o seu
uso. Escreva as matrizes resultantes do acionamento de cada uma das funções.
Exemplo Entrada
96 19 42 73 9 35 68 22 81 57 47 14 63 38 78 50 11 30 85 56 74 27 8
65 17 91 4 59 33 76 3 48 26 71 53 10 66 89 21 44 1 55 32 99 5 20 70
13 79
Saída Esperada:
113 110 46 132 42 111 71 70 107 128 100 24 129 127 99 94 12 85 117
155 79 47 78 78 79 -72 38 14 -24 -41 65 -26 55 -14 -6 4 -3 -51 57 6
10 -25 53 -43 69 7 -62 52
*/

void preencheMatriz(int M[LIN][COL])
{
    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            //printf("Digite o valor em %d x %d: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }
}

void exibeMatriz(int M[LIN][COL]){
    printf("\n");
    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
                printf("%5d", M[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void somaDeAeB(int A[LIN][COL], int B[LIN][COL], int C[LIN][COL])
{
    for(int i = 0; i < LIN; i++){
       for(int j = 0; j < COL; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void diferencaDeAeB(int A[LIN][COL], int B[LIN][COL], int D[LIN][COL])
{
    for(int i = 0; i < LIN; i++){
       for(int j = 0; j < COL; j++){
            D[i][j] = A[i][j] - B[i][j];
        }
    }
}

int main()
{
    int matrizA[LIN][COL], matrizB[LIN][COL], matrizC[LIN][COL], matrizD[LIN][COL];

    printf("Preencha a Matriz A: \n");
    preencheMatriz(matrizA);
    printf("Matriz A: \n");
    exibeMatriz(matrizA);

    printf("Preencha a Matriz B: \n");
    preencheMatriz(matrizB);
    printf("Matriz B: \n");
    exibeMatriz(matrizB);

    somaDeAeB(matrizA, matrizB, matrizC);

    printf("Soma da Matriz A e da Matriz B na Matriz C: \n");
    exibeMatriz(matrizC);

    diferencaDeAeB(matrizA, matrizB, matrizD);

    printf("Diferenca da Matriz A e da Matriz B na Matriz D: \n");
    exibeMatriz(matrizD);

    return 0;
}
