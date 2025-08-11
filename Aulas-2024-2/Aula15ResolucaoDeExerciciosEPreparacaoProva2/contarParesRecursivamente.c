#include <stdio.h>

int contarPares(int vetor[], int tamanho);

int main() {
    int vetor[6];
    int i;

    printf("Digite 6 números inteiros:\n");
    for (i = 0; i < 6; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int quantidadePares = contarPares(vetor, 6);
    printf("\nA quantidade de números pares no vetor é: %d\n", quantidadePares);

    return 0;
}

int contarPares(int vetor[], int tamanho) {
    if (tamanho == 0) { // Caso base: tamanho é 0, parar a recursão
        return 0;
    }

    // Verifica se o último elemento é par
    if (vetor[tamanho - 1] % 2 == 0) {
        return 1 + contarPares(vetor, tamanho - 1); // Soma 1 e continua chamando recursivamente até atingir o caso base
    } else {
        return contarPares(vetor, tamanho - 1); // Apenas chama recursivamente até atingir o caso base
    }
}