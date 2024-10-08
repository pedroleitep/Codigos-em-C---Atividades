#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
Questão 7:
Faça uma função que recebe um valor inteiro e verifica se o valor é positivo ou negativo. A função
deve retornar um valor lógico (true ou false). Faça um programa que lê N números e para cada
um deles exibe uma mensagem informando se ele é positivo ou não, dependendo se foi retornado
verdadeiro ou falso pela função.
Exemplo Entrada
5
13
23
51
0
-4
3
Saída Esperada:
SIM
SIM
SIM
NAO
NAO

*/

bool verifica(int V);
//bool verifica2(int V);

int main()
{
    int N, valor;

    //printf("Digite N: \n");
    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        //printf("Digite um valor: \n");
        scanf("%d", &valor);

        if(verifica(valor)){
            printf("SIM\n");
        }else{
            printf("NAO\n");
        }
    }

    return 0;
}

bool verifica(int V){
    return V > 0;
}

/*
bool verifica2(int V){
    if(V > 0){
        return true;
    }else {
        return false;
    }
}
*/
