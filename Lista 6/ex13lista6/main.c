#include <stdio.h>
#include <stdlib.h>

/*
Quest�o 13:
Escreva um programa em C para imprimir todas as letras do alfabeto mai�sculo usando um
ponteiro.
Exemplo Entrada
Sa�da Esperada:
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
*/

int main()
{
    char letra = 'A';      // Armazena 'A' em uma vari�vel char
    char *ptr = &letra;    // Ponteiro aponta para a vari�vel letra

    for (int i = 0; i < 26; i++) {
        printf("%c ", *ptr); // Imprime o valor apontado pelo ponteiro
        (*ptr)++;           // Incrementa o valor de letra (de A at� Z)
    }

    printf("\n");

    return 0;
}


/*
int main() {
    char *letras = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // Ponteiro para string com as letras mai�sculas

    while (*letras != '\0') { // Enquanto n�o chegar no final da string
        printf("%c ", *letras); // Imprime a letra atual
        letras++; // Avan�a o ponteiro para a pr�xima letra
    }

    printf("\n"); // Nova linha ap�s imprimir todas as letras
    return 0;
}
*/
