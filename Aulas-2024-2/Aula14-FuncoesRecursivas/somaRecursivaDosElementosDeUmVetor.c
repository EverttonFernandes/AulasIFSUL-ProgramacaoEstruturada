#include <stdio.h>

int somarVetor(int vetor[], int tamanho);

int main() {
    int vetor[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("Calculando a soma dos elementos do vetor: {1, 2, 3, 4, 5}\n\n");

    int soma = somarVetor(vetor, tamanho);

    printf("\nA soma dos elementos do vetor é: %d\n", soma);
    return 0;
}

int somarVetor(int vetor[], int tamanho) {
    printf("Chamando somarVetor: tamanho = %d\n", tamanho);

    // Caso base: vetor vazio, soma é 0
    if (tamanho == 0) {
        printf("Caso base alcançado: vetor vazio. Retornando 0.\n");
        return 0;
    }

    // Soma o último elemento e chama a função para o restante do vetor
    int resultado = vetor[tamanho - 1] + somarVetor(vetor, tamanho - 1);
    printf("Resolvendo somarVetor: vetor[%d] = %d, soma parcial = %d\n", tamanho - 1, vetor[tamanho - 1], resultado);

    return resultado;
}