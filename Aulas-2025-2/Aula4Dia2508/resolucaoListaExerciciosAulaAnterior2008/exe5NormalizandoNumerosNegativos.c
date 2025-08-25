#include <stdio.h>

void normalizarNegativo(int* valor) {
    if (*valor < 0) {
        *valor = (*valor * -1);
    }
}

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("Antes da alteração: %d\n", numero);

    normalizarNegativo(&numero);

    printf("Depois da alteração: %d\n", numero);

    return 0;
}
