#include <stdio.h>
#include <stdlib.h>

/*
QUESTÃO 3:
Faça um programa que receba dez números e verifique se eles são divisíveis por 3 e 9 (ao
mesmo tempo), por 2 e por 5. Caso algum número não seja divisível por nenhum desses
números mostre a mensagem “Número não é divisível pelos valores”. Apresente também
ao final a quantidade de números divisíveis por 3 e 9, por 2 e por 5.
*/

int main()
{
    // variáveis
    float N;
    int div3e9 = 0, div2 = 0, div5 = 0;

    for (int num = 0; num < 10; num++) {
        // Leitura do número
        scanf("%f", &N);

        // Verifica se o número é um inteiro antes de aplicar os testes de divisibilidade
        if ((int)N % 3 == 0 && (int)N % 9 == 0) {
            div3e9++;
        }

        if ((int)N % 2 == 0) {
            div2++;
        }

        if ((int)N % 5 == 0) {
            div5++;
        }

        if (!((int)N % 3 == 0 && (int)N % 9 == 0) && !((int)N % 2 == 0) && !((int)N % 5 == 0)) {
            printf("Número não é divisível pelos valores\n");
        }
    }

    printf("%d Números são divisíveis por 3 e por 9\n", div3e9);
    printf("%d Números são divisíveis por 2\n", div2);
    printf("%d Números são divisíveis por 5\n", div5);

    return 0;
}

