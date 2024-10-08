#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variaveis
    int numero, invertido, centena, dezena, unidade;

    //printf("Digite um numero inteiro com tres digitos: \n");
    scanf(" %d", &numero);

    //calcular a inversão
    centena = numero / 100;
    dezena = (numero / 10) % 10;
    unidade = numero % 10;

    //formar o numero invertido
    invertido = (unidade * 100) + (dezena * 10) + centena;

    //exibir numero invertido
    //printf("O numero invertido eh: %d\n", invertido);
    printf("%d\n", invertido);

    return 0;
}
