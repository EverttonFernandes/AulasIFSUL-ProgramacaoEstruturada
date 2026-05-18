#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanhoDoVetorDinamico;
    
    printf("Digite o número de elementos: ");
    scanf("%d", &tamanhoDoVetorDinamico);
    
    int *vetorDinamico = (int *)malloc(tamanhoDoVetorDinamico * sizeof(int));

    if (vetorDinamico == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    for (int i = 0; i < tamanhoDoVetorDinamico; i++) {
        printf("Digite o valor para vetorDinamico[%d]: ", i);
        scanf("%d", &vetorDinamico[i]);
    }

    printf("Valores armazenados:\n");
    for (int i = 0; i < tamanhoDoVetorDinamico; i++) {
        printf("%i \n", vetorDinamico[i]);
    }

    free(vetorDinamico); // libera a memória alocada pelo vetor dinâmico
    return 0;
}
