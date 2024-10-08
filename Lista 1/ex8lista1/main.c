#include <stdio.h>
#include <stdlib.h>

/*
Questão 8:
Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal,
tilizando as seguintes fórmulas (onde h é a altura):
• para homens(H): (72.7 * h) – 58.
• para mulheres(M): (62.1 * h) – 44.7.
Exemplo Entrada
1.80
H
Saída Esperada:
72.86
*/

int main()
{
    //Variáveis
    float altura, pesoIdeal;
    char sexo;

    //Dados
    //printf("Altura: \n");
    scanf("%f", &altura);

    //printf("Sexo (H/M): \n");
    scanf(" %c", &sexo);

    //Calcular
    if(sexo == 'H'){
        pesoIdeal = (72.7 * altura) - 58;
    }
    else{
        pesoIdeal =  (62.1 * altura) - 44.7;
    }


    //Exibir
    printf("%.2f", pesoIdeal);

    return 0;
}
