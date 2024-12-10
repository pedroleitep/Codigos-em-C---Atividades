#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    char caractere;

    // Abrir o arquivo no modo de escrita
    arquivo = fopen("texto_usuario.txt", "w");

    printf("Digite o texto (pressione Enter para terminar):\n");

    // Ler caractere por caractere e gravar no arquivo até encontrar Enter (nova linha)
    while ((caractere = getchar()) != '\n') {
        fputc(caractere, arquivo);  // Grava o caractere no arquivo
    }

    fclose(arquivo);

    return 0;
}
