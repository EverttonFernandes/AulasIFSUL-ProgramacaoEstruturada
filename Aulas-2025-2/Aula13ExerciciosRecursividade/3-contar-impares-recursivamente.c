#include<stdio.h>

int contarImparesRecursivamente(int *vetor, int quantidadeDeElementos);


int main() {
    int tamanho = 5;
    int numerosInformados[tamanho];
    int indice = 0;

    printf("Digite cinco numeros: \n");

    for(int indice = 0; indice < tamanho; indice++) {
        scanf("%d", &numerosInformados[indice]);
    }

    int quantidadeDeImpares = contarImparesRecursivamente(numerosInformados, tamanho);
    printf("Quantidade de numeros impares: %d\n", quantidadeDeImpares);
    return 0;
}

int contarImparesRecursivamente(int *vetor, int quantidadeDeElementos) {
    if (quantidadeDeElementos == 0) {
        return 0;
    }

    int ultimoNumero = vetor[quantidadeDeElementos - 1];

    if (ultimoNumero % 2 != 0) {
        return 1 + contarImparesRecursivamente(vetor, quantidadeDeElementos - 1);
    } else {
        return contarImparesRecursivamente(vetor, quantidadeDeElementos - 1);
    }
}