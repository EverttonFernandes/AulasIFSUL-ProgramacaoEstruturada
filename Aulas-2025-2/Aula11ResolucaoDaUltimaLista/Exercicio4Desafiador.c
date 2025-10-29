#include <stdio.h>
#include <stdlib.h>

void ordenarCrescente(int **vetor, int tamanho);

int main(void) {
    int *vetorDinamico = NULL;
    int tamanho = 0;
    int numeroInformado;

    printf("Digite inteiros (pressione 0 para parar):\n");
    
    while(1){
        scanf("%d", &numeroInformado);
        if(numeroInformado == 0){
            break;
        }
        vetorDinamico = (int *)realloc(vetorDinamico, (tamanho + 1) * sizeof(int));
        *(vetorDinamico + tamanho) = numeroInformado;
        tamanho++;
    }

    // printf("MOSTRANDO ANTES DE ORDERNAR: \n");
    // for (int i = 0; i < tamanho; i++){
    //     printf("%d ", *(vetorDinamico + i));
    // }

    printf("\n");
    ordenarCrescente(&vetorDinamico, tamanho);
    
    printf("Números ordenados: \n");
    for (int i = 1; i <= tamanho; i++){
        printf("%d ", *(vetorDinamico + i));
        printf("\n");
    }
    
    free(vetorDinamico);
    return 0;
}

void ordenarCrescente(int **vetor, int tamanho) {
    // VAMOS IMPLEMENTAR A ORDENAÇÃO?

    while(1){
        int houveTroca = 0;

        for (int i = 0; i < tamanho; i++){
            // fizemos um backup dos valores antes de sobrescrever
            int valorAtual = *(*vetor + i);
            int valorDaProximaPosicao = *(*vetor + i + 1);

            if(valorAtual > valorDaProximaPosicao){
                *(*vetor + i) = valorDaProximaPosicao;
                *(*vetor + i + 1) = valorAtual;
                houveTroca = 1;
            }
        }
        
        if (!houveTroca){
            break;
        }
        
    }
}
