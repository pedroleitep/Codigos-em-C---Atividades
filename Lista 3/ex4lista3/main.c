#include <stdio.h>
#include <stdlib.h>

/*
Questão 4:
. Escreva um procedimento que recebe 3 valores reais X, Y e Z e que verifique se esses valores podem
ser os comprimentos dos lados de um triângulo e, neste caso, exibe qual é o tipo de triângulo
formado. Para que X, Y e Z formem um triângulo é necessário que a seguinte propriedade seja
satisfeita: o comprimento de cada lado de um triângulo é menor do que a soma do comprimento
dos outros dois lados. O procedimento deve identificar o tipo de triângulo formado observando
as seguintes definições:
• Triângulo Equilátero: os comprimentos dos 3 lados são iguais;
• Triângulo Isósceles: os comprimentos de pelo menos 2 lados são iguais.
• Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.
Faça um programa que leia um número indeterminado (até lado negativo) de triângulos (valores
dos 3 lados) e para cada triângulo, acione o procedimento.
Exemplo Entrada
51 52 51
37 48 37
91 23 67
8 4 8
80 80 80
-1 -1 -1
Saída Esperada:
TRIANGULO ISOSCELES
TRIANGULO ISOSCELES
NÃO TRIANGULO
TRIANGULO ISOSCELES
TRIANGULO EQUILATERO
*/

void confereTriangulo(float lado1, float lado2, float lado3);
void tipoTriangulo(float l1, float l2, float l3);

int main()
{
    //variaveis
    float lado1, lado2, lado3;

    do{
        //printf("Digite os 3 lados do triangulo: \n");
        scanf("%f %f %f", &lado1, &lado2, &lado3);

        if(lado1 > 0 && lado2 > 0 && lado3 > 0){
            confereTriangulo(lado1, lado2, lado3);
        }

    }while(lado1 > 0 || lado2 > 0 || lado3 > 0);

    return 0;
}

void confereTriangulo(float lado1, float lado2, float lado3){
    float S12, S13, S23;
    S12 = lado1+lado2;
    S13 = lado1+lado3;
    S23 = lado2+lado3;

    if(lado1 > S23 || lado2 > S13 || lado3 > S12){
        printf("NÃO TRIANGULO\n");
    }else{
        tipoTriangulo(lado1, lado2, lado3);
    }

}

void tipoTriangulo(float l1, float l2, float l3){
    if(l1 == l2 && l1 == l3){
        printf("TRIANGULO EQUILATERO\n");
    }

    else if(l1 != l2 && l1 != l3 && l2 != l3){
        printf("TRIANGULO ESCALENO\n");
    }

    else{printf("TRIANGULO ISOSCELES\n");}
}
