#include <stdio.h>
#include <stdlib.h>

//int somaDigitos (int numero);
//int somaDigitos2 (int numero);
int somaDigitos3 (int val);

int main()
{
    int valor;

    printf("Digite um valor: \n");
    scanf("%d", &valor);

    //printf("Soma dos Digitos: %d\n", somaDigitos(valor));
    //printf("Soma dos Digitos: %d\n", somaDigitos2(valor));
    printf("Soma dos Digitos: %d\n", somaDigitos3(valor));

    return 0;
}

int somaDigitos (int numero){
    int quociente, soma = 0;

    quociente = numero/10;
    soma += (numero % 10);

    while(quociente > 0){

        numero = quociente;
        quociente = numero/10;

        soma += (numero % 10);
    }

    return soma;
}

int somaDigitos2 (int numero){
    int quociente, soma = 0;

    quociente = numero/10;

    while(quociente > 0){

        soma += (numero % 10);
        numero = quociente;
        quociente = numero/10;

    }
    soma += numero;

    return soma;
}

int somaDigitos3 (int val){
    if(val < 10) return val;
    else return ((val%10) + somaDigitos3(val/10));
}
