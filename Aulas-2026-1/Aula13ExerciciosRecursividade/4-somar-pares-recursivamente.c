#include<stdio.h>

int somarParesRecursivamente(int *vetor, int quantidadeDeElementos);

int main() {
    int tamanho = 5;
    int numerosInformados[tamanho];
    int indice = 0;

    printf("Digite cinco numeros: \n");

    for(int indice = 0; indice < 5; indice++) {
        scanf("%d", &numerosInformados[indice]);
    }

    int somaDosPares = somarParesRecursivamente(numerosInformados, 5);
    printf("Soma dos numeros pares: %d\n", somaDosPares);
    return 0;
}

int somarParesRecursivamente(int *vetor, int quantidadeDeElementos) {
    if (quantidadeDeElementos == 0) {
        return 0;
    }

    int ultimoNumero = vetor[quantidadeDeElementos - 1];

    if (ultimoNumero % 2 == 0) {
        return ultimoNumero + somarParesRecursivamente(vetor, quantidadeDeElementos - 1);
    } else {
        return somarParesRecursivamente(vetor, quantidadeDeElementos - 1);
    }
}