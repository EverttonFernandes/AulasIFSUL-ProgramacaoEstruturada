#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho = 10;

    // Aloca um vetor dinâmico de 10 caracteres com calloc
    char *vetor = (char *)calloc(tamanho, sizeof(char));
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Exibe os valores inicializados
    printf("Vetor inicializado com calloc:\n");
    for (int i = 0; i < tamanho; i++) {
        // Ao usar o calloc nosso vetor dinâmico já nasce inicializado, neste caso todos os valores na posição são 0
        printf("vetor[%d] = '%c' (ASCII: %d)\n", i, vetor[i], vetor[i]);
        // No caso do vetor char ele nasce com \0, que é o mesmo que nulo
        // Se fosse int seria todos os inteiros 0
    }

    // Libera a memória alocada
    free(vetor);

    return 0;
}
