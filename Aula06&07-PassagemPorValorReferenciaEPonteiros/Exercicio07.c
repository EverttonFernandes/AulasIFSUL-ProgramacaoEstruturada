#include <stdio.h>

/*
Exercício 7: Aritmética de Ponteiros com Vetores
Analise o código abaixo, que utiliza ponteiros e aritmética de ponteiros para manipular um vetor de inteiros. 
Explique o que será impresso na tela após cada printf.
*/

int main() {
    int numeros[] = {10, 20, 30, 40, 50};
    int *p = numeros;

    printf("Valor de *p: %d\n", *p);

    p++;
    printf("Valor de *p após p++: %d\n", *p);

    p += 2;
    printf("Valor de *p após p += 2: %d\n", *p);

    p--;
    printf("Valor de *p após p--: %d\n", *p);

    return 0;
}
