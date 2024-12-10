#include <stdio.h>
#include <stdlib.h>

/*
Questão 13:
Escreva um programa em C para imprimir todas as letras do alfabeto maiúsculo usando um
ponteiro.
Exemplo Entrada
Saída Esperada:
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
*/

int main()
{
    char letra = 'A';      // Armazena 'A' em uma variável char
    char *ptr = &letra;    // Ponteiro aponta para a variável letra

    for (int i = 0; i < 26; i++) {
        printf("%c ", *ptr); // Imprime o valor apontado pelo ponteiro
        (*ptr)++;           // Incrementa o valor de letra (de A até Z)
    }

    printf("\n");

    return 0;
}


/*
int main() {
    char *letras = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // Ponteiro para string com as letras maiúsculas

    while (*letras != '\0') { // Enquanto não chegar no final da string
        printf("%c ", *letras); // Imprime a letra atual
        letras++; // Avança o ponteiro para a próxima letra
    }

    printf("\n"); // Nova linha após imprimir todas as letras
    return 0;
}
*/
