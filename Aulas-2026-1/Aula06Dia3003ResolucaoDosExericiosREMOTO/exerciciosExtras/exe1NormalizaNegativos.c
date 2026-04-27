#include<stdio.h>

/* 

Crie função chamada normalizarNegativos que receba um vetor de números inteiros por referência (usando ponteiro) 
e o tamanho do vetor.
A função deve percorrer o vetor através de ponteiros e transformar em positivo apenas os valores que forem negativos, 
além de retornar a quantidade de números negativos encontrados.

Na main, mostre o vetor antes e depois da normalização, junto com o número de valores alterados retornados pela função.

*/



int normalizarNegativos(int *vetor, int tamanho);

int main(){
    int tamanho = 4; // tamanho fixo
    int vetor[4];
    
    printf("Informe 4 numeros:\n");
    for (int i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
    }
    
    int quantidadeDeNumerosTransformados = normalizarNegativos(vetor, tamanho);

    printf("A quantidade de numeros transformados foi %d\n", quantidadeDeNumerosTransformados);

    printf("Vetor transformado via ponteiro:\n");
    for (int i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    return 0;
}

int normalizarNegativos(int *vetor, int tamanho){
    int contadorDeNumerosTransformados = 0;

    for (int i= 0; i < tamanho; i++){
        if (*(vetor + i) < 0){
            *(vetor + i) = *(vetor + i) * -1;
            contadorDeNumerosTransformados++;    
        }
        
    }
    
    return contadorDeNumerosTransformados;
}