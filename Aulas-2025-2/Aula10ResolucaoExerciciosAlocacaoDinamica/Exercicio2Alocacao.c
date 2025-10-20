/*

2) Permitir que o usuário digite quantos inteiros quiser, com parada ao pressionar zero. Cada número digitado deve ser adicionado a um vetor dinâmico usando realloc. Em seguida, enviar esse vetor para uma função que percorra os valores e construa uma nova alocação contendo apenas os números > 10 e ímpares, usando realloc a cada inclusão dentro do mesmo laço. Dessa vez, a função deve retornar a nova alocação ao chamador.
Função sugerida:
int* filtrarImparesMaioresQue10(int **vetorOriginal, int tamanhoOriginal, size_t *tamanhoFiltrado);

Regras:

Iniciar leitura com int *vetorInicial = NULL e crescer com realloc a cada número até ENTER.

Na função de filtro, iniciar int *vetorImparesMaiorQueDez = NULL e usar realloc a cada inclusão (>10 e ímpar); retornar esse ponteiro e preencher *tamanhoFiltrado.

Ordem de liberação no programa principal: após chamar a função, free(vetorInicial), imprimir o vetor retornado (usando tamanhoFiltrado) e, ao final, free(vetorImparesMaiorQueDez).

Não usar variáveis globais. Não criar vetor estático (somente alocação dinâmica).

Retornar o ponteiro para a função main que receberá um ponteiro como resultado.

Ao fim o ponteiro retornado deve ser percorrido e mostrado na tela

Exemplo de como deve ser o retorno no console:
Entrada (valores digitados): [12, 7, 18, 9, 22, 3, 10, 11, 14, 15, 27]
Saída (>10 e ímpares): [11, 15, 27]

*/

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int* filtrarImparesMaioresQue10(int **vetorOriginal, int tamanhoOriginal);

int main(){
    int *vetorInicial = NULL;
    int tamanhoInicial = 0;
    int numero;

    printf("Digite inteiros (pressione 0 para parar):\n");
    
    while(1){
        scanf("%d", &numero);
        if(numero == 0){
            break;
        }
        vetorInicial = (int *)realloc(vetorInicial, (tamanhoInicial + 1) * sizeof(int));
        *(vetorInicial + tamanhoInicial) = numero;
        tamanhoInicial++;
    }

    int *retornoDoPonteiro = filtrarImparesMaioresQue10(&vetorInicial, tamanhoInicial);

    printf("Números > 10 e ímpares: \n");
    
    if(retornoDoPonteiro != NULL){
        for (int i = 0; *(retornoDoPonteiro + i) != 0; i++){
            printf("%d ", *(retornoDoPonteiro + i));
        }
    }
    printf("\n");

    free(vetorInicial);
    free(retornoDoPonteiro);
    return 0;
}

int *filtrarImparesMaioresQue10(int **vetorOriginal, int tamanhoOriginal){
    int *vetorComParesMaiorQueDez = NULL;
    int tamanhoDoVetorDinamicoComParesMaiorQueDez = 0;

    for(int i = 0; i < tamanhoOriginal; i++){
        int valorAtual = *(*vetorOriginal + i);
        if(valorAtual > 10 && valorAtual % 2 != 0){
            vetorComParesMaiorQueDez = (int *)realloc(vetorComParesMaiorQueDez, (tamanhoDoVetorDinamicoComParesMaiorQueDez + 1 ) * sizeof(int));
            *(vetorComParesMaiorQueDez + tamanhoDoVetorDinamicoComParesMaiorQueDez) = valorAtual;
            tamanhoDoVetorDinamicoComParesMaiorQueDez++;
        }
    }

    return vetorComParesMaiorQueDez;
}
