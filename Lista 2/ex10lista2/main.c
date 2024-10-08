#include <stdio.h>
#include <stdlib.h>

/*
Questão 10:
Em uma eleição presidencial existem quatro candidatos. Os votos são informados através
de códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte
codificação:
1,2,3,4 = voto para os respectivos candidatos;
5 = voto nulo;
6 = voto em branco;
Elabore um algoritmo que leia o código do candidado em um voto. Calcule e escreva:
- total de votos para cada candidato;
- total de votos nulos;
- total de votos em branco.

Como finalizador do conjunto de votos, tem-se o valor 0.
*/

int main()
{
    //variaveis
    int voto, voto1 = 0, voto2 = 0, voto3 = 0, voto4 = 0, nulos = 0, brancos = 0;

    //Menu
    /*
        printf("1- Candidato 1\n");
        printf("2- Candidato 2\n");
        printf("3- Candidato 3\n");
        printf("4- Candidato 4\n");
        printf("5- Nulo\n");
        printf("6- Branco\n");
    */

    //contagem
    do{
        //printf("Digite seu voto: \n");
        scanf("%d", &voto);

        if(voto > 0){
            if(voto == 1){
                voto1++;
            }
            else if(voto == 2){
                voto2++;
            }
            else if(voto == 3){
                voto3++;
            }
            else if(voto == 4){
                voto4++;
            }
            else if(voto == 5){
                nulos++;
            }
            else if(voto == 6){
                brancos++;
            }
            else{
                printf("Numero invalido.\n");
            }
        }
    }while(voto > 0);

    //exibir
    printf("%d\n", voto1);
    printf("%d\n", voto2);
    printf("%d\n", voto3);
    printf("%d\n", voto4);
    printf("%d\n", nulos);
    printf("%d\n", brancos);

    return 0;
}
