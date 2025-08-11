#include <stdio.h>

/*
Agora, escreva uma função semelhante à anterior, mas dessa vez, o vetor será passado por referência. 
A função deve não apenas contar as ocorrências do número no vetor, mas também modificar os elementos que são iguais ao número, por exemplo, alterando-os para 0.
Requisitos:
A função deve receber o vetor por referência, permitindo modificar os elementos.
A função deve contar as ocorrências do número e substituir os valores iguais ao número por 0.
O programa principal deve exibir o vetor modificado e o número de ocorrências encontradas.

*/

int validarOcorrenciasDoNumeroDentroDoVetor(int *vetor, int tamanhoDoVetor, int numero);
void mostrarVetorNaTela(int *vetor, int tamanhoDoVetor);

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
    int resultaoDaQuantidadeDeOcorrencias = validarOcorrenciasDoNumeroDentroDoVetor(vetor, tamanhoDoVetor, numero);
    printf("O numero ao qual voce informou anteriormente existe %d vezes dentro do vetor... \n", resultaoDaQuantidadeDeOcorrencias);
    mostrarVetorNaTela(vetor, tamanhoDoVetor);
    return 0;
}

int validarOcorrenciasDoNumeroDentroDoVetor(int *vetor, int tamanhoDoVetor, int numero){
    int quantidadeDeOcorrencias = 0;
    for (int indice = 0; indice < tamanhoDoVetor; indice++) {
        if(*(vetor + indice) == numero){
            *(vetor + indice) = 0;
            quantidadeDeOcorrencias++;
        }
    }
    return quantidadeDeOcorrencias;
}

void mostrarVetorNaTela(int *vetor, int tamanhoDoVetor) {
    printf("E o resultado do vetor modificado trocando todas as ocorrencias encontradas por zero ficou desta maneira abaixo: \n");
    for (int indice = 0; indice < tamanhoDoVetor; indice++) {
        printf("%d ", *(vetor + indice));
    }
    printf("\n");
}