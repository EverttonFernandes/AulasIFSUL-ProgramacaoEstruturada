#include<stdio.h>

int main() {
    int indiceQuePercorreOVetorParaObterOsValores = 0;
    int vetorComTamanhoDez[10];  // Vetor com 10 posições
    int indiceQuePercorreOVetorParaDescobrirNumerosMaioresQueCinco = 0;

    // Preenchendo o vetor
    do {
        printf("Digitando o %d° valor dentro do vetor: ", indiceQuePercorreOVetorParaObterOsValores + 1);
        fflush(stdout);  // usando para forçar os prints do programa
        scanf("%d", &vetorComTamanhoDez[indiceQuePercorreOVetorParaObterOsValores]);
        indiceQuePercorreOVetorParaObterOsValores++;  // Incrementa o índice
    } while (indiceQuePercorreOVetorParaObterOsValores < 10);

    // Verificando números maiores que cinco
    while (indiceQuePercorreOVetorParaDescobrirNumerosMaioresQueCinco < 10) {
        if (vetorComTamanhoDez[indiceQuePercorreOVetorParaDescobrirNumerosMaioresQueCinco] > 5) {
            printf("Maior que cinco: %d\n", vetorComTamanhoDez[indiceQuePercorreOVetorParaDescobrirNumerosMaioresQueCinco]);
            fflush(stdout);  // usando para forçar os prints do programa
        }
        indiceQuePercorreOVetorParaDescobrirNumerosMaioresQueCinco++;  // Incrementa o índice
    }
}
