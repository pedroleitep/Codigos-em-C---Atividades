#include <stdio.h>
#include <stdlib.h>

/*
Questão 5:
Faça um procedimento que recebe a média final de um aluno, identifica e exibe o seu conceito,
conforme a tabela abaixo. Faça um programa que leia a média de N alunos, acionando o procedimento para cada um deles. (N deve ser lido do teclado)

Nota Conceito
Até 39 F
40 a 59 E
60 a 69 D
70 a 79 C
80 a 89 B
A partir de 90 A

Exemplo Entrada
5
14
0
98
11
60
Saída Esperada:
F
F
A
F
D
*/

void exibeConceito(int N);

int main()
{
    int N;

    //printf("Digite a quantidade de alunos: \n");
    scanf("%d", &N);

    exibeConceito(N);

    return 0;
}

void exibeConceito(int N){
    float media;

    for(int i = 0; i < N; i++){
        //printf("Digite a média final do aluno %d: ", i+1);
        scanf("%f", &media);

        if(media <= 39){
            printf("F\n");
        }

        if(media >= 40 && media <= 59){
            printf("E\n");
        }

        if(media >= 60 && media <= 69){
            printf("D\n");
        }

        if(media >= 70 && media <= 79){
            printf("C\n");
        }

        if(media >= 80 && media <= 89){
            printf("B\n");
        }

        if(media >= 90){
            printf("A\n");
        }
    }
}
