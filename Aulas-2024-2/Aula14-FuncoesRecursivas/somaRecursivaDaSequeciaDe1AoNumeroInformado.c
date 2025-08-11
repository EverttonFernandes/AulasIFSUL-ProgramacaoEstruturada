#include <stdio.h>

/*
RECURSÃO QUE FAZ A SOMA DE 1 ATÉ O NUMERO INFORMADO
*/
int soma(int n);

int main() {
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);

    printf("A soma dos números de 1 a %d é: %d\n", n, soma(n));
    return 0;
}

int soma(int n) {
    printf("Chamando soma(%d)\n", n); // Mostra cada chamada da função

    if (n == 0) { // Caso-base
        printf("Caso-base alcançado: soma(0) = 0\n");
        return 0;
    }

    int resultado = n + soma(n - 1); // Soma o número atual com o resultado da recursão
    printf("Retornando: %d + soma(%d) = %d\n", n, n - 1, resultado); // Mostra o valor retornado

    return resultado;
}
