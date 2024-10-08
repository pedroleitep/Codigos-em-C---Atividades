#include <stdio.h>
#include <stdlib.h>

/*
Questão 9:
Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele
comercializa. Para isto, mandou digitar uma linha para cada mercadoria com o preço de
compra e de venda de cada uma. A última linha contém preço de compra igual a 0. Escreva
um programa que:
a) Determine e escreva quantas mercadorias proporcionaram:
i) Lucro < 10%
ii) 10% <= lucro <= 20%
iii) Lucro > 20%
b) Determine e escreva o valor total de compra e de venda de todas as mercadorias,
assim como o lucro total.
*/

int main() {
    float precoCompra, precoVenda;
    int lucroMenor10 = 0, lucroEntre10e20 = 0, lucroMaior20 = 0;
    float totalCompra = 0.0, totalVenda = 0.0, lucroTotal = 0.0;
    float lucroPercentual;

    // Entrada de dados
    //printf("Digite o preco de compra e venda das mercadorias (digite 0 no preco de compra para encerrar):\n");

    // Lê o primeiro valor fora do laço


    // Laço controlado pela condição (precoCompra > 0)
    do {
        //printf("Preco de compra e Preco de venda: ");
        scanf("%f %f", &precoCompra, &precoVenda);


        if (precoCompra > 0) {
        // Calcula o lucro percentual
        lucroPercentual = ((precoVenda - precoCompra) / precoCompra) * 100;

        // Classifica o lucro em uma das três faixas
        if (lucroPercentual < 10) {
            lucroMenor10++;
        } else if (lucroPercentual >= 10 && lucroPercentual <= 20) {
            lucroEntre10e20++;
        } else {
            lucroMaior20++;
        }

        // Acumula os valores de compra, venda e lucro
        totalCompra += precoCompra;
        totalVenda += precoVenda;
        lucroTotal += (precoVenda - precoCompra);
        }

    }while (precoCompra > 0);
/*
    // Exibe os resultados
    printf("\nResultados:\n");
    printf("Quantidade de mercadorias com lucro < 10%%: %d\n", lucroMenor10);
    printf("Quantidade de mercadorias com 10%% <= lucro <= 20%%: %d\n", lucroEntre10e20);
    printf("Quantidade de mercadorias com lucro > 20%%: %d\n", lucroMaior20);
    printf("Valor total de compra: %.2f\n", totalCompra);
    printf("Valor total de venda: %.2f\n", totalVenda);
    printf("Lucro total: %.2f\n", lucroTotal);

*/

    printf("%d\n", lucroMenor10);
    printf("%d\n", lucroEntre10e20);
    printf("%d\n", lucroMaior20);
    printf("%.2f\n", totalCompra);
    printf("%.2f\n", totalVenda);
    printf("%.2f\n", lucroTotal);

    return 0;
}
