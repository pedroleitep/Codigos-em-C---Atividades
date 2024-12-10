#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo = fopen("arquivo1.txt","w");

    for(int i = 1; i <= 10; i++)
    {
        fprintf(arquivo, "%d\n", i);
    }

    fclose(arquivo);

    return 0;
}
