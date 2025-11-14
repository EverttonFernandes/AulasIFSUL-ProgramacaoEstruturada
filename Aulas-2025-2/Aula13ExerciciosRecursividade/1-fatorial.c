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
#include<stdio.h>
int fatorial(int n);

int main() {
    int numero;
    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &numero);

    int resultado = fatorial(numero);
    printf("O fatorial de %d é: %d\n", numero, resultado);
    return 0;
}

// exemplo de função recursiva para calcular fatorial
// vamos calcular o fatorial de 5 que é 5*4*3*2*1
int fatorial(int n) {

    if (n == 0) { // caso base: fatorial de 0 é 1
        return 1;
    }

    // calcula o fatorial do número anterior
    int fatorialAnterior = fatorial(n - 1);

    // resultado dessa chamada = n * fatorial(n-1)
    return n * fatorialAnterior;
}