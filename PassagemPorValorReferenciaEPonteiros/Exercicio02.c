#include <stdio.h>

/*
Escreva uma função que receba um vetor de inteiros por referência com o tamanho 4, e um valor que vai ser somado a cada iteração
(somado com o número na posição 0, depois na 1 e assim por diante) . A função deve somar o valor a cada elemento.
Requisitos:
O vetor original deve ser modificado diretamente pela função.
Utilize ponteiros para realizar a modificação dos elementos dentro da função.
O programa deve exibir o vetor antes e depois de ser modificado pela função
(use uma função para isso, assim você reaproveita código, já que o código que mostra o vetor antes e depois será o mesmo).
Dicas:
Não será necessário retornar um novo vetor, pois a função modificará o vetor original diretamente.
Utilize ponteiros para acessar e modificar os elementos do vetor.
*/

void somarValorAoVetor(int *vetor, int tamanhoDoVetor, int valorASerSomado);
void mostrarVetorNaTela(int *vetor, int tamanhoDoVetor);

int main() {
    int vetor[4] = { 1, 2, 3, 4 };
    int tamanhoDoVetor = 4;
    int valorASerSomado;

    printf("Vetor original: \n");
    mostrarVetorNaTela(vetor, tamanhoDoVetor);

    printf("\nDigite o valor a ser somado aos elementos do vetor: ");
    scanf("%d", &valorASerSomado);

    somarValorAoVetor(vetor, tamanhoDoVetor, valorASerSomado);

    printf("\nVetor modificado: \n");
    mostrarVetorNaTela(vetor, tamanhoDoVetor);
    return 0;
}

void somarValorAoVetor(int *vetor, int tamanhoDoVetor, int valorASerSomado) {
    for (int indice = 0; indice < tamanhoDoVetor; indice++) {
        *(vetor + indice) += valorASerSomado;
    }
}

void mostrarVetorNaTela(int *vetor, int tamanhoDoVetor) {
    for (int indice = 0; indice < tamanhoDoVetor; indice++) {
        printf("%d ", *(vetor + indice));
    }
    printf("\n");
}