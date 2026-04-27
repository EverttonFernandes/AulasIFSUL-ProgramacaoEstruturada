#include <stdio.h>

/*
Escreva uma função que receba um vetor de inteiros e um número como parâmetros. 
A função deve contar quantas vezes o número aparece no vetor. 
Nesse caso, o vetor será passado por valor, ou seja, a função não poderá modificar os elementos do vetor original, apenas deverá contar as ocorrências do número.
Requisitos:
A função deve receber o vetor e o número a ser contado como parâmetros.
A função não deve modificar o vetor original.
O programa principal deve exibir o número de vezes que o valor aparece no vetor.
*/

void validarOcorrenciasDoNumeroDentroDoVetor(int *vetor, int tamanhoDoVetor, int numero);

int main() {
    int vetor[4];
    int tamanhoDoVetor = 4;
    int numero;

    printf("\nDigite os valores a serem inseridos no vetor: \n");
    for (int indice = 0; indice < tamanhoDoVetor; indice++){
        scanf("%d", &vetor[indice]);
    }
    
    printf("\nDigite um valor existente dentro do vetor que você deseja descobrir a quantidade de ocorrencias: ");
    scanf("%d", &numero);
    validarOcorrenciasDoNumeroDentroDoVetor(vetor, tamanhoDoVetor, numero);
    return 0;
}

void validarOcorrenciasDoNumeroDentroDoVetor(int *vetor, int tamanhoDoVetor, int numero){
    int quantidadeDeOcorrencias = 0;
    for (int indice = 0; indice < tamanhoDoVetor; indice++) {
        if(*(vetor + indice) == numero){
            quantidadeDeOcorrencias++;
        }
    }    
    printf("O numero ao qual voce informou anteriormente existe %d vezes dentro do vetor! \n", quantidadeDeOcorrencias);
}