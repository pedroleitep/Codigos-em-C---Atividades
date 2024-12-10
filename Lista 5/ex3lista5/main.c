#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo = fopen("C:\\Users\\pedro\\OneDrive\\Documentos\\aeds 1\\Lista 5\\ex2lista5\\texto_usuario.txt","r");
    char texto;
    int cont = 0;

    while(fscanf(arquivo,"%c",&texto) != EOF){
        if(texto == 'a' || texto == 'A'){
            cont++;
        }
    }
    printf("%d CARACTERES\n", cont);

    return 0;
}
