#include <stdio.h>
/*
Escreva uma função que receba um vetor de inteiros com tamanho 4 e um valor a ser somado. 
A função deve somar esse valor a cada elemento do vetor, modificando o vetor original 
(somando o valor ao número na posição 0, depois na posição 1, e assim por diante).
Requisitos:
O vetor original deve ser modificado diretamente pela função.
A função deve somar o valor fornecido a cada elemento do vetor, 
modificando os elementos do vetor original.
O programa principal deve exibir os valores do vetor original antes de chamar a função e após a função, para mostrar as alterações.
Dicas:
Ao passar um vetor para uma função em C, estamos implicitamente passando o vetor por referência 
(não é necessário o uso explícito de ponteiros ou * no parâmetro da função). 
Isso significa que o vetor original será modificado dentro da função que não precisa retornar um ponteiro, podendo ser ela uma função void.
Não há passagem por valor direta de vetores em C. A função irá operar diretamente sobre o vetor original, modificando-o.
*/

void somarValorAoVetor(int vetor[], int valorASerSomado, int tamanho);
void mostrarVetorNaTela(int vetor[], int tamanho);

int main() {
    int vetor[4] = {1, 2, 3, 4};
    int valorASerSomado;
    int tamanho = 4;

    printf("Vetor original: \n");
    mostrarVetorNaTela(vetor, tamanho);

    printf("\nDigite o valor a ser somado aos elementos do vetor: ");
    scanf("%d", &valorASerSomado);

    somarValorAoVetor(vetor, valorASerSomado, tamanho);

    printf("\nVetor modificado: \n");
    mostrarVetorNaTela(vetor, tamanho);
    return 0;
}


void somarValorAoVetor(int vetor[], int valorASerSomado, int tamanho) {
    for (int indice = 0; indice < tamanho; indice++) {
        vetor[indice] += valorASerSomado;
    }
}

void mostrarVetorNaTela(int vetor[], int tamanho){
    for (int indice = 0; indice < tamanho; indice++) {
        printf("%d ", vetor[indice]);
    }
    printf("\n");
}