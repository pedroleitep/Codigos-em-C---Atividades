#include <stdio.h>
#include <stdlib.h>

int main() {
    // Abrir o arquivo no modo de leitura
    FILE *arquivo = fopen("arquivo4.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    char texto;
    int cont = 0;
    int linha_vazia = 1;  // Assume que o arquivo pode estar vazio

    // Ler caractere por caractere até o fim do arquivo
    while (fscanf(arquivo, "%c", &texto) != EOF) {
        printf("%c", texto);

        // Conta o número de quebras de linha
        if (texto == '\n') {
            cont++;
            linha_vazia = 0; // Arquivo não está vazio
        }
    }

    // Verifica se o arquivo terminou sem quebra de linha
    if (linha_vazia == 1) {
        // Se o arquivo for vazio, não adiciona linhas
        cont = 0;
    } else if (texto != '\n') {
        // Adiciona uma linha se o arquivo não terminar com '\n'
        cont++;
    }

    printf("\n%d LINHAS\n", cont);

    // Fechar o arquivo
    fclose(arquivo);

    return 0;
}

/*
int main()
{
    // Abrir o arquivo no modo de escrita
    FILE *arquivo = fopen("arquivo4.txt", "r");

    char caractere;
    int cont = 0;

    while ((caractere = fgetc(arquivo)) != EOF) {
        printf("%c", caractere);

        // Se encontrar uma nova linha, contar como uma linha
        if (caractere == '\n') {
            cont++;
        }
    }

    if (caractere != '\n' && cont > 0) {
        cont++;
    }

    printf("%d LINHAS\n", cont);

    fclose(arquivo);

    return 0;
}
*/
