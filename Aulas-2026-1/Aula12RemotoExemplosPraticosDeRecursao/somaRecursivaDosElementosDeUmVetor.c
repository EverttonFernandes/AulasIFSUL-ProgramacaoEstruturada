#include <stdio.h>

int somarVetorDeFormaRecursiva(int *vetor, int quantidadeDeElementos);

int main() {
    int vetor[] = {1, 2, 3, 4, 5};
    int quantidadeDeElementos = sizeof(vetor) / sizeof(vetor[0]);

    printf("Calculando a soma dos elementos do vetor: {1, 2, 3, 4, 5}\n\n");

    int soma = somarVetorDeFormaRecursiva(vetor, quantidadeDeElementos);

    printf("\nA soma dos elementos do vetor é: %d\n", soma);
    return 0;
}

int somarVetorDeFormaRecursiva(int *vetor, int quantidadeDeElementos) {
    printf("[entrar] faltam %d elementos\n", quantidadeDeElementos);

    if (quantidadeDeElementos == 0) { // caso base: não tem mais nada pra somar
        printf("[base] faltam 0 → retorna 0\n");
        return 0;
    }

    // pega o ÚLTIMO elemento desse pedaço do vetor
    int ultimoValor = vetor[quantidadeDeElementos - 1];
    
    // soma do RESTO do vetor (tudo que veio antes do último)
    int somaDoResto = somarVetorDeFormaRecursiva(vetor, quantidadeDeElementos - 1);

    // resultado dessa chamada = último que faltava + soma do resto
    return ultimoValor + somaDoResto;
}
