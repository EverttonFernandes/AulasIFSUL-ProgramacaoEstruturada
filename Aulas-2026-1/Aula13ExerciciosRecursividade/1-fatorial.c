/*
1) Fatorial de um número (recursivo)
Objetivo:
Ler um inteiro n ≥ 0 e calcular n! de forma recursiva.
O que é fatorial? Pegamos o número n e vamos multiplicando por todos os inteiros positivos até chegar em 1 (ex.: 5! = 5×4×3×2×1). Por convenção, 0! = 1.

Função sugerida:
int fatorialRec(int n);

Regras:

Validar entrada negativa (não calcular ou avisar).

Sem variáveis globais.

*/
#include <stdio.h>

int fatorial(int numero);

int main(){
    printf("O resultado da fatorial do numero informado eh : %i" , fatorial(5));
}

int fatorial(int numero){

    if(numero == 1){
        return 1;
    }

    return numero * fatorial(numero - 1);

}

