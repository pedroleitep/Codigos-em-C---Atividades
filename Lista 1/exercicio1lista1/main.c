#include <stdio.h>
#include <stdlib.h>

/*
Questão 1:
Faça um programa que receba três números e mostre o maior.
Exemplo Entrada
10 20 30
Saída Esperada:
30
*/

int main()
{
    //variáveis
    int N1, N2, N3, maior;

    //Dados
    //printf("Digite tres numeros: \n");
    scanf("%d %d %d", &N1, &N2, &N3);

    //Estrutura condicional
    if(N1>N2 && N1>N3){
        maior = N1;
    }
    else if(N2>N1 && N2>N3){
        maior  = N2;
    }
    else maior = N3;

    //Resultado
    printf("%0.d", maior);

    return 0;
}
