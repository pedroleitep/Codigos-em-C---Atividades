#include <stdio.h>
#include <stdlib.h>

/*
QUESTÃO 5:
A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o
salário e número de filhos de cada habitante. A prefeitura deseja saber:
a) média do salário da população;
b) média do número de filhos;
c) maior salário;
d) percentual de pessoas com salário até R$100,00.
O final da leitura de dados se dará com a entrada de um salário negativo.
*/

int main()
{
    //variaveis
    float salario, salarioTotal = 0, perc_sal_ate_100, mediaSalarial, maiorSalario = 0;
    int populacao = 0, filhos, filhosTotais = 0, mediaNumFilhos, sal_ate_100 = 0;

     do{
        //printf("Salario e numero de filhos: \n");
        scanf("%f %d", &salario, &filhos);
        filhosTotais += filhos;

        if(salario > 0){
            populacao++;
            salarioTotal += salario;

            if(salario > maiorSalario){
                maiorSalario = salario;
            }

            if(salario <= 100){
                sal_ate_100++;
            }

        }
     }while(salario > 0);

     //contas
     //a)
     mediaSalarial = salarioTotal / populacao;

     //b)
     mediaNumFilhos = filhosTotais / populacao;

     //d)
     perc_sal_ate_100 = (sal_ate_100 / (float)populacao) * 100;

     //exibir
     /*
     printf("Media do salario da populacao: %.2f\n", mediaSalarial);
     printf("Media do numero de filhos: %d\n", mediaNumFilhos);
     printf("Maior salario: %.2f\n", maiorSalario);
     printf("Percentual de pessoas com salario até R$100,00: %.2f%%\n", perc_sal_ate_100);
     */

     printf("%.2f\n", mediaSalarial);
     printf("%d\n", mediaNumFilhos);
     printf("%.2f\n", maiorSalario);
     printf("%.2f\n", perc_sal_ate_100);

    return 0;
}
