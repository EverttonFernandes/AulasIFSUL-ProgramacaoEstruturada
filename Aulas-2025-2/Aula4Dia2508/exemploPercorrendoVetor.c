#include<stdio.h>

int main(){
    int vetor[5] = {10, 20, 30, 40, 50};
    int *p = vetor; // Ponteiro aponta para o primeiro elemento do vetor

    printf("%d", (*p + 2));
    return 0;
}

/*
*p                  | Acessa o valor armazenado no endereço
(*p)++ ou (*p += 1) | Acessa o endereço e incrementa o valor armazenado lá dentro do endereço
*p++                | Avança o ponteiro para o próximo elemento (muito usado em vetores)
*(p+i)              | Acessa o elemento na posição i (usado para percorrer um vetor)
*p + 5              | Acessa o endereço e soma 5 ao valor armazenado
*(p+5)              | Acessa o valor que está na posição 5 de um vetor, ou seja faz o vetor pular 5 posições a frente
*/