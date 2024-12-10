#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Questão 10:
Escreva um programa em C para contar o número de vogais e consoantes em uma cadeia de
caracteres (vetor de char como string) usando um ponteiro.
Exemplo Entrada
string
Saída Esperada:
Vogais: 1
Consoantes: 5
*/

void contarVogaisConsoantes(char *str)
{
    int vogais = 0, consoantes = 0;

    while(*str != '\0'){
        char c = tolower(*str);
        if(c >= 'a' && c <= 'z'){
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                vogais++;
            }else {
                consoantes++;
            }
        }
        str++;
    }
    printf("Vogais: %d\n", vogais);
    printf("Consoantes: %d\n", consoantes);
}

int main()
{
    char *string = (char*)malloc(100 * sizeof(char));

    printf("Digite uma string: ");
    fgets(string, 100, stdin);

    contarVogaisConsoantes(string);

    free(string);

    return 0;
}
