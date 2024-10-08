/*Sabendo que 100 kilowatt de energia custa um sétimo do salário mínimo, faça um
algoritmo que leia o valor do salário mínimo e a quantidade de kilowatt gasta por uma
residência, calcule e mostre: o valor em reais de cada kilowatt; o valor em reais a ser pago;
e o novo valor a ser pago por essa residência com um desconto de 10%*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variaveis
    float salario_minimo, qtd_kw, valor_kw, valor_a_pagar, valor_com_desconto;


    //obtenção de dados
    /*printf("Qual eh o salario minimo?\n");
    scanf(" %f", &salario_minimo);

    printf("Quantidade de kilowatt gasto: \n");
    scanf(" %f", &qtd_kw);*/
    scanf("%f %f", &salario_minimo, &qtd_kw);

    //calculo do valor do kilowatt
    valor_kw = (salario_minimo / 7) / 100;

    //calculo do valor a ser pago
    valor_a_pagar = valor_kw * qtd_kw;

    //calculo do novo valor com desconto
    valor_com_desconto = valor_a_pagar * 0.9;

    //exibir resultados
    /*printf("\nValor de cada kilowatt: %.2f\n", valor_kw);
    printf("Valor a ser pago: %.2f\n", valor_a_pagar);
    printf("Valor com desconto de 10%%: %.2f\n", valor_com_desconto);*/
    printf("%.2f\n", valor_kw);
    printf("%.2f\n", valor_a_pagar);
    printf("%.2f\n", valor_com_desconto);

    return 0;
}
