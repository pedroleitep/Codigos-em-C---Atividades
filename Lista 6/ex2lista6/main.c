#include <stdio.h>
#include <stdlib.h>

#define DIAS 31
#define MAX 40
#define MIN 15

/*Quest�o 2:
Em uma cidade, sabe-se hipoteticamente que, em janeiro de 2021, n�o ocorreu temperatura
inferior a 15�C, nem superior a 40�C. Fa�a um programa que armazene as temperaturas de cada
dia de janeiro em um vetor (de 31 posi��es), calcule e imprima:
� A menor e a maior temperatura ocorrida;
� A temperatura m�dia;
� O n�mero de dias nos quais a temperatura foi inferior a temperatura m�dia.
Exemplo Entrada
10 25 23 17 5 8 40 35 8 15 19 27 36 28 16 28 24 10 11 4 9 6 18 16
38 29 42 14 19 28 15
Sa�da Esperada:
Menor e maior temperatura: 10 e 42
M�dia de temperatura: 20.10
N�mero de dias nos quais a temperatura foi inferior a temperatura
m�dia: 13
*/

void preencherTemperaturas(float temp[]){
    for(int i = 0; i < DIAS; i++){
        printf("Temperatura do dia %d: ", i + 1);
        scanf("%d", &temp[i]);
    }
}

void calculoTemperaturas(float temp[]){
    float soma = 0, media;
    int maiorTemp = 40, menorTemp = 15, tempInf = 0;

    for(int i = 0; i < DIAS; i++){
        soma += temp[i];
    }

    media = soma/DIAS;

    for(int i = 0; i < DIAS; i++){
        if(temp[i] > maiorTemp){
            maiorTemp = temp[i];
        }

        if(temp[i] < menorTemp){
            menorTemp = temp[i];
        }
    }

    for(int i = 0; i < DIAS; i++){
        if(temp[i] < media){
            tempInf++;
        }
    }

    printf("Menor e maior temperatura: %d e %d", menorTemp, maiorTemp);
    printf("M�dia de temperatura: %f", media);
    printf("N�mero de dias nos quais a temperatura foi inferior a temperatura m�dia: %d", tempInf);
}

int main()
{
    float temp[DIAS]

    preencherTemperaturas(temp);

    calculoTemperaturas(temp);

    return 0;
}
