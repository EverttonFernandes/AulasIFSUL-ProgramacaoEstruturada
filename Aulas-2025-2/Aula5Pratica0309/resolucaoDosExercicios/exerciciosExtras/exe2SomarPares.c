#include<stdio.h>

/* 

Crie uma função chamada somarPares que receba um vetor de inteiros por referência (usando ponteiro) e o tamanho do vetor.
A função deve percorrer o vetor com ponteiros, identificar todos os números pares e calcular a soma total desses números.
A função deve retornar a soma encontrada.

Na main, leia o vetor, chame a função e mostre a soma dos números pares.

*/

int somarPares(int *vetor, int tamanho);

int main(){
    int tamanho = 4;
    int vetor[4];
    
    printf("Informe 4 numeros:\n");
    for (int i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
    }
    
    int somaDosPares = somarPares(vetor, tamanho);

    printf("A soma dos numeros pares foi %d\n", somaDosPares); // mostra na tela a soma dos numeros pares encontrados
    
    return 0;
}

int somarPares(int *vetor, int tamanho){
    int somaDosPares = 0;

    for (int i= 0; i < tamanho; i++){
        int atualNumeroObtidoNaPosicao = *(vetor + i); // desreferencia o ponteiro para pegar o valor do vetor na posição atual(evitando tem que ficar usando * pra tudo - Assim podemos usar ponteiro uma única vez dentro do loop ;)
        if (atualNumeroObtidoNaPosicao % 2 == 0){
            somaDosPares += atualNumeroObtidoNaPosicao;  // se o atual numero for par, soma ele ao total
        }
    }
    
    return somaDosPares; // retorna a soma total dos numeros pares encontrados
}