#include <stdio.h>
/*
Escreva duas funções para manipulação de caracteres:
A primeira função, converterParaMaiusculo, deve receber um caractere como parâmetro e retornar o caractere convertido para maiúsculo, caso seja uma letra minúscula.
Se o caractere não for uma letra, a função deve retornar o próprio caractere.
A segunda função, converterParaMinusculo, deve receber um caractere como parâmetro e retornar o caractere convertido para minúsculo, caso seja uma letra maiúscula.
Se o caractere não for uma letra, a função deve retornar o próprio caractere.
No programa principal, peça ao usuário para digitar um caractere e exiba o resultado das duas conversões.
Dica:
Utilize as funções isalpha() para verificar se o caractere é uma letra e toupper() e tolower() para realizar as conversões, ambas funções estão na biblioteca #include<ctype.h>.

*/

int encontrarMaiorElemento(int *vetor, int tamanho);
int encontrarMenorElemento(int *vetor, int tamanho);
void exibirVetor(int *vetor, int tamanho);

int main() {
    int vetor[10];
    int tamanhoVetor;

    printf("Digite o tamanho do vetor (até 10): ");
    scanf("%d", &tamanhoVetor);

    if (tamanhoVetor < 1 || tamanhoVetor > 10) {
        printf("Tamanho do vetor inválido.\n");
        return 1;
    }

    for (int indice = 0; indice < tamanhoVetor; indice++) {
        printf("Informe um valor para a posição %d: ", indice + 1);
        scanf("%d", &vetor[indice]);
    }

    printf("Vetor original: ");
    exibirVetor(vetor, tamanhoVetor);

    int maiorElemento = encontrarMaiorElemento(vetor, tamanhoVetor);
    int menorElemento = encontrarMenorElemento(vetor, tamanhoVetor);

    printf("\nO maior elemento do vetor é: %d\n", maiorElemento);
    printf("O menor elemento do vetor é: %d\n", menorElemento);

    return 0;
}

int encontrarMaiorElemento(int *vetor, int tamanho) {
    int maiorElemento = *vetor;
    for (int indice = 1; indice < tamanho; indice++) {
        if (*(vetor + indice) > maiorElemento) {
            maiorElemento = *(vetor + indice);
        }
    }
    return maiorElemento;
}

int encontrarMenorElemento(int *vetor, int tamanho) {
    int menorElemento = *vetor;
    for (int indice = 1; indice < tamanho; indice++) {
        if (*(vetor + indice) < menorElemento) {
            menorElemento = *(vetor + indice);
        }
    }
    return menorElemento;
}

void exibirVetor(int *vetor, int tamanho) {
    for (int indice = 0; indice < tamanho; indice++) {
        printf("%d ", *(vetor + indice));
    }
    printf("\n");
}