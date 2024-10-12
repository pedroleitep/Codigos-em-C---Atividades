#include <stdio.h>
#include <stdlib.h>

int digitos2(int val);

//int digitos (int numero);

int main()
{
    int valor;

    printf("Digite um valor: \n");
    scanf("%d", &valor);

    //printf("Digitos: %d\n", digitos(valor));
    printf("Digitos: %d\n", digitos2(valor));

    return 0;
}

int digitos (int numero){
    int conta = 0, quociente;

    quociente = numero/10;

    while(quociente > 0){
        conta++;
        numero = quociente;
        quociente = numero/10;
    }

    conta++;

    return conta;
}

int digitos2(int val){
    if(val < 10) return 1;
    else return (1 + digitos2(val/10));
}

