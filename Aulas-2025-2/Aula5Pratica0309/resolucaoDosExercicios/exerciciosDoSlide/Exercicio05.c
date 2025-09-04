#include <stdio.h>

/*
Exercício 5: Manipulação de Ponteiros com Inteiros
Analise o código abaixo, que utiliza ponteiros para manipular valores inteiros. Você deve explicar linha por linha o que está acontecendo
*/

int main() {
    int numero = 10;
    int *ponteiro = &numero;

    printf("Valor original: %d\n", numero);
    printf("Valor do ponteiro: %d\n", *ponteiro);

    printf("Endereço de numero: %p\n", &numero);
    printf("Endereço guardado em ponteiro: %p\n", ponteiro);
    printf("Endereço de memória oficial do ponteiro: %p\n", &ponteiro); // COLOQUEI DE PROPÓSITO PARA VERMOS O ENDEREÇO OFICIAL DO PONTEIRO(endereço de nascimento dele)

    *ponteiro = 20;

    printf("Valor após modificação pelo ponteiro: %d\n", numero);

    int outroNumero = 50;
    ponteiro = &outroNumero;

    printf("Novo endereço em ponteiro: %p\n", ponteiro);
    printf("Endereço de memória da variavel outroNumero: %p\n", &outroNumero);
    printf("Endereço de memória oficial do ponteiro QUE SEGUE SENDO O MESMO: %p\n", &ponteiro); // COLOQUEI DE PROPÓSITO PARA VERMOS O ENDEREÇO OFICIAL DO PONTEIRO
    printf("Valor de outroNumero: %d\n", *ponteiro);

    return 0;
}
