#include<stdio.h>

/* 

Crie uma função chamada maiorElemento que receba um vetor de inteiros por referência (usando ponteiro) e o tamanho do vetor.
A função deve percorrer o vetor via ponteiros e encontrar o maior valor armazenado nele.
A função deve retornar esse maior valor.

Na main, leia os valores do vetor, chame a função e mostre qual foi o maior número encontrado.

*/

int maiorElemento(int *vetor, int tamanho);

int main(){
    int tamanho = 4;
    int vetor[4];
    
    printf("Informe 4 numeros:\n");
    for (int indice = 0; indice < tamanho; indice++){
        scanf("%d", &vetor[indice]);
    }
    
    int maiorNumero = maiorElemento(vetor, tamanho);

    printf("O maior numero encontrado foi %d\n", maiorNumero);
    
    return 0;
}

int maiorElemento(int *vetor, int tamanho){
    int maiorNumeroEncontrado = 0; // inicializa com zero, pois qualquer numero do vetor será maior que ele

    for (int indice = 0; indice < tamanho; indice++){
        
        int numeroAtualDentroDoVetor = *(vetor + indice); // desreferencia o ponteiro para pegar o valor do vetor na posição atual(evitando tem que ficar usando * pra tudo ;)
        if (numeroAtualDentroDoVetor > maiorNumeroEncontrado){
            maiorNumeroEncontrado = numeroAtualDentroDoVetor;  
        }
        
    }
    
    return maiorNumeroEncontrado;
}