#include <stdio.h>
#include <stdlib.h>

/*
Questão 2:
A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes, coletando dados sobre
o salário e número de filhos. Faça um procedimento que leia esses dados para um número não
determinado de pessoas, calcule e exiba a média de salário da população (a condição de parada
deve ser um flag com salário negativo). Faça um programa que acione o procedimento.
Exemplo Entrada
3665.00 4
7870.00 8
33599.00 5
2750.00 9
-1 -1
Saída Esperada:
11971.00
*/

void dados();

int main()
{
    dados();
    return 0;
}

void dados()
{
    float salario, salarioTotal = 0, mediaSalarial;
    int populacao = 0, filhos;


    do{
        //printf("Salario e numero de filhos (salario negativo encerra): \n");
        scanf("%f %d", &salario, &filhos);

        if(salario > 0){
            populacao++;
            salarioTotal += salario;
        }

     }while(salario > 0);

     if (populacao > 0) {
        printf("%.2f\n", salarioTotal / populacao);
    } else {
        printf("Nenhum dado valido foi inserido.\n");
    }

}
