#include <stdio.h>
#include <stdlib.h>

void redimensionarVetor(int **vetor, int tamanhoAtual, int novoTamanho);

int main() {
    int tamanhoInicial = 5;
    int novoTamanho = 10;

    // Alocação inicial que começa com 5 posições alocadas na memória
    int *vetor = (int *)malloc(tamanhoInicial * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Inicializa o vetor que pega valores de 1 até 5 que são salvos nas posições 0,1,2,3 e 4.
    for (int i = 0; i < tamanhoInicial; i++) {
        vetor[i] = i + 1;
    }

    printf("Vetor inicial:\n");
    for (int i = 0; i < tamanhoInicial; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Redimensiona o vetor
    redimensionarVetor(&vetor, tamanhoInicial, novoTamanho);

    if (vetor != NULL) {
        printf("Vetor redimensionado:\n");
        for (int i = 0; i < novoTamanho; i++) {
            printf("%d ", vetor[i]);
        }
        printf("\n");
    }

    // Libera a memória alocada
    free(vetor);

    return 0;
}

// Função que redimensiona um vetor usando realloc
void redimensionarVetor(int **vetor, int tamanhoAtual, int novoTamanho) {
    // Realloc redimensiona e mantém os valores até o menor tamanho
    int *temp = realloc(*vetor, novoTamanho * sizeof(int));
    if (temp == NULL) {
        printf("Erro ao realocar memória.\n");
        free(*vetor); // Libera a memória previamente alocada
        *vetor = NULL; // Evita ponteiro danificado
        return;
    }
    *vetor = temp; // Atualiza o ponteiro original com o novo endereço

    // Inicializa os novos elementos, caso o vetor tenha crescido
    for (int i = tamanhoAtual; i < novoTamanho; i++) {
        (*vetor)[i] = i + 1; // Exemplo de inicialização
    }
}
