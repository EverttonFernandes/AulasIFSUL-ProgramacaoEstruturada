#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho = 5;

    // Aloca um vetor dinâmico de 5 inteiros com calloc
    int *vetor = (int *)calloc(tamanho, sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Exibe os valores inicializados
    printf("Vetor inicializado com calloc:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    // Libera a memória alocada
    free(vetor);

    return 0;
}
