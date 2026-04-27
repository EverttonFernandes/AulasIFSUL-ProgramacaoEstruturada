#include <stdio.h>

/*
Escreva uma função que receba um vetor de inteiros com tamanho 4 e um valor a ser somado. A função deve somar esse valor a cada elemento do vetor, 
modificando o vetor original (somando o valor ao número na posição 0, depois na posição 1, e assim por diante).
Requisitos:
O vetor original deve ser modificado diretamente pela função.
A função deve somar o valor fornecido a cada elemento do vetor, modificando os elementos do vetor original.
O programa principal deve exibir os valores do vetor original antes de chamar a função e após a função, para mostrar as alterações.
Dicas:
Ao passar um vetor para uma função em C, estamos implicitamente passando o vetor por referência 
(não é necessário o uso explícito de ponteiros ou * no parâmetro da função). 
Isso significa que o vetor original será modificado dentro da função que não precisa retornar um ponteiro, podendo ser ela uma função void.
Não há passagem por valor direta de vetores em C. A função irá operar diretamente sobre o vetor original, modificando-o.

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