#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declarar ponteiros para os três arquivos
    FILE *arquivo1, *arquivo2, *arquivo3;
    char caractere;

    // Abrir o primeiro arquivo no modo de leitura
    arquivo1 = fopen("arquivo1.txt", "r");
    if (arquivo1 == NULL) {
        printf("Erro ao abrir o primeiro arquivo!\n");
        return 1;
    }

    // Abrir o segundo arquivo no modo de leitura
    arquivo2 = fopen("arquivo2.txt", "r");
    if (arquivo2 == NULL) {
        printf("Erro ao abrir o segundo arquivo!\n");
        fclose(arquivo1); // Fechar o primeiro arquivo se houver erro no segundo
        return 1;
    }

    // Abrir o terceiro arquivo no modo de escrita (onde será gravada a concatenação)
    arquivo3 = fopen("arquivo3.txt", "w");
    if (arquivo3 == NULL) {
        printf("Erro ao criar o terceiro arquivo!\n");
        fclose(arquivo1);
        fclose(arquivo2);
        return 1;
    }

    // Copiar o conteúdo do primeiro arquivo para o terceiro
    while ((caractere = fgetc(arquivo1)) != EOF) {
        fputc(caractere, arquivo3);
    }

    fprintf(arquivo3, "\n");

    // Copiar o conteúdo do segundo arquivo para o terceiro
    while ((caractere = fgetc(arquivo2)) != EOF) {
        fputc(caractere, arquivo3);
    }

    // Fechar todos os arquivos
    fclose(arquivo1);
    fclose(arquivo2);
    fclose(arquivo3);

    printf("Conteúdo dos arquivos concatenado com sucesso no terceiro arquivo.\n");

    return 0;
}
