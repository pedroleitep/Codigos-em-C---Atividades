#include <stdio.h>
#include <stdlib.h>

/*
Questão 10:
Faça uma função que recebe a idade de um nadador por parâmetro e retorna a categoria desse
nadador de acordo com a tabela abaixo.
Idade (Anos) Categoria
5 a 7 F
8 a 10 E
11 a 13 D
14 a 15 C
16 a 17 B
Acima de 18 A
Faça um programa que lê a idade de um nadador e imprime a categoria retornada pela função.
4
Exemplo Entrada
5
41
17
9
15
11
Saída Esperada:
A
B
E
C
D
*/

char catNadador(int idade);

int main()
{
    int N, idade;
    //printf("Digite a quantidade de nadador: \n");
    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        //printf("Digite a idade do nadador %d: ", i+1);
        scanf("%d", &idade);
        printf("%c\n", catNadador(idade));
    }

    return 0;
}

char catNadador(int idade){
    char categoria;

    if(idade >= 5 && idade <= 7){
        return categoria = 'F';
    }
    else if(idade >= 8 && idade <= 10){
        return categoria = 'E';
    }
    else if(idade >= 11 && idade <= 13){
        return categoria = 'D';
    }
    else if(idade >= 14 && idade <= 15){
        return categoria = 'C';
    }
    else if(idade >= 16 && idade <= 17){
        return categoria = 'B';
    }
    else if(idade >= 18){
        return categoria = 'A';
    }
    else{
        printf("Idade menor que o necessario.\n");
    }
}
