#include <stdio.h>
#include <stdlib.h>

/*Questão 8:
Escrever um procedimento que preenche uma matriz M(10,10) e a escreve. Faça outros procedimentos que recebam uma matriz preenchida, realize as trocas indicadas a seguir (um procedimento para cada uma delas) e exiba a matriz resultante da troca:
(a) a linha 2 com a linha 8
(b) a coluna 4 com a coluna 10
(c) a diagonal principal com a diagonal secundária
(d) a linha 5 com a coluna 10.
Faça um programa que faça as devidas declarações e acione os módulos para exemplificar o seu
uso.
Exemplo Entrada
160 70 42 185 124 6 110 86 51 182 68 13 73 197 150 84 32 176 178 61
54 58 166 79 15 109 39 44 9 27 192 105 11 67 129 173 182 35 156 53
76 94 199 146 169 157 36 159 133 98 176 43 90 123 187 40 178 52 17
102 194 68 126 85 188 96 88 131 77 29 37 34 146 192 112 105 49 84
100 71 47 63 120 81 195 93 18 182 20 45 60 62 59 169 134 10 113 64
3 99

Saída Esperada:
182 70 42 185 124 6 110 86 51 68
68 178 73 197 150 84 32 176 178 178
54 58 44 79 15 109 39 44 9 73
192 105 11 182 129 173 182 35 156 197
76 94 199 146 157 157 36 159 133 150
176 43 90 123 187 187 178 52 17 84
194 68 126 85 188 96 85 131 77 32
68 13 73 197 150 84 32 73 178 176
47 63 120 81 195 93 18 182 63 178 60 62 59 169 134 10 113 64 3 178
*/

#define TAM 10

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
                printf("%5d", M[i][j]);
        }
        printf("\n");
    }
}

void trocaLinha2ComLinha8(int M[TAM][TAM]) {
    for (int j = 0; j < TAM; j++) {
        int temp = M[1][j];
        M[1][j] = M[7][j];
        M[7][j] = temp;
    }
}

void trocaColuna4ComColuna10(int M[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        int temp = M[i][3];
        M[i][3] = M[i][9];
        M[i][9] = temp;
    }
}

void trocaDiagonalPrincipalComDiagonalSecundaria(int M[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        int temp = M[i][i];
        M[i][i] = M[i][TAM - 1 - i];
        M[i][TAM - 1 - i] = temp;
    }
}

void trocaLinha5ComColuna10(int M[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        int temp = M[4][i];
        M[4][i] = M[i][9];
        M[i][9] = temp;
    }
}

int main()
{
    int matrizM[TAM][TAM];

    preencheMatriz(matrizM);
    printf("Matriz original:");
    exibeMatriz(matrizM);

    trocaLinha2ComLinha8(matrizM);
    printf("\nMatriz após trocar linha 2 com linha 8:");
    exibeMatriz(matrizM);

    trocaColuna4ComColuna10(matrizM);
    printf("\nMatriz após trocar coluna 4 com coluna 10:");
    exibeMatriz(matrizM);

    trocaDiagonalPrincipalComDiagonalSecundaria(matrizM);
    printf("\nMatriz após trocar diagonal principal com diagonal secundária:");
    exibeMatriz(matrizM);

    trocaLinha5ComColuna10(matrizM);
    printf("\nMatriz após trocar linha 5 com coluna 10:");
    exibeMatriz(matrizM);

    return 0;
}

