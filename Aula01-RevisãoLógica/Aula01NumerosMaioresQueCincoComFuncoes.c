#include <stdio.h>

// Função para preencher um vetor com valores fornecidos pelo usuário
void preencherVetorComValores(int numeros[], int tamanhoDoVetor) {
    for (int indice = 0; indice < tamanhoDoVetor; indice++) {
        printf("Digite o %d° valor: ", indice + 1);
        fflush(stdout);  // Força a exibição imediata
        scanf("%d", &numeros[indice]);
    }
}

// Função para exibir números maiores que 5
void exibirNumerosMaioresQueCinco(const int numeros[], int tamanhoDoVetor) {
    printf("Números maiores que cinco:\n");
    for (int indice = 0; indice < tamanhoDoVetor; indice++) {
        if (numeros[indice] > 5) {
            printf("%d\n", numeros[indice]);
            fflush(stdout);  // Força a exibição imediata
        }
    }
}

int main() {
    const int tamanhoDoVetor = 10;
    int numeros[tamanhoDoVetor];  // Vetor com 10 posições

    // Preenche o vetor com os valores fornecidos pelo usuário
    preencherVetorComValores(numeros, tamanhoDoVetor);

    // Exibe os números maiores que cinco
    exibirNumerosMaioresQueCinco(numeros, tamanhoDoVetor);

    return 0;
}
