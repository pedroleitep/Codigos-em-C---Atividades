#include <stdio.h>
#include <stdlib.h>

/*
Questão 1:
Faça um procedimento que recebe as 3 notas de um aluno por parâmetro e uma letra. Se a letra
for ‘A’, o procedimento calcula e escreve a média aritmética das notas do aluno, se for ‘P’, calcula
e escreve a sua média ponderada (pesos: 5, 3 e 2). Faça um programa que leia 3 notas de N
alunos e acione o procedimento para cada aluno. (N deve ser lido do teclado)
Exemplo Entrada
5
9 5 5 A
8 3 9 A
5 9 0 A
5 2 7 P
5 7 4 P
Saída Esperada:
6.33
6.67
4.67
4.50
5.40
*/

void mediaAluno (float nota1, float nota2, float nota3, char tipo);

int main()
{
    //variáveis
    int N;
    float nota1, nota2, nota3;
    char tipo;

    //quantidade de alunos
    //printf("Digite a quantidade de alunos: \n");
    scanf("%d", &N);

    //repetição para ler as notas de cada aluno até N
    for(int alunos = 0; alunos < N; alunos++){
        //printf("Digite as 3 notas do aluno e a media Aritmetica(A) ou Ponderada(P): \n");
        scanf("%f %f %f %c", &nota1, &nota2, &nota3, &tipo);

        //chamar a função para calcular a média
        mediaAluno(nota1, nota2, nota3, tipo);
    }
    return 0;
}

//função que calcula a média de acordo com o tipo escolhido e imprime na tela
void mediaAluno (float nota1, float nota2, float nota3, char tipo){
    float media;

    //média aritmética
    if(tipo == 'A' || tipo == 'a'){
            media = (nota1 + nota2 + nota3) / 3;
        }

        //média ponderada
        else if(tipo == 'P' || tipo == 'p'){
            media = ((nota1 * 5) + (nota2 * 3) + (nota3 * 2)) / 10.0;
        }

        else {
            printf("Tipo de media invalido\n");
            return;
        }

        printf("%.2f\n", media);
}
