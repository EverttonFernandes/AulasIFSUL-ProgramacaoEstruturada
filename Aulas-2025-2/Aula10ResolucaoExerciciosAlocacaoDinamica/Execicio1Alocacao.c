/* 

1) Permitir que o usuário digite quantos inteiros quiser, com parada ao pressionar apenas 0. Cada número digitado deve ser adicionado a um vetor dinâmico usando realloc. Em seguida, enviar esse vetor para uma função que percorra os valores e construa uma nova alocação contendo apenas os números > 10 e pares, também usando realloc a cada inclusão dentro do mesmo laço. Por fim, liberar a primeira alocação, imprimir a nova alocação e liberá-la.

Função sugerida:
void filtrarMaioresQue10Pares(int **vetorOriginal, int tamanhoOriginal);

Regras:

Iniciar leitura com int *vetorInicial = NULL e crescer com realloc a cada número até ENTER.

Na função de filtro, iniciar int *vetorComParesMaiorQueDez = NULL e usar realloc a cada inclusão (>10 e par).

Ordem de liberação: free(vetorInicial) (alocação original) → imprimir filtrado → free(vetorComParesMaiorQueDez).

Não usar variáveis globais. Não criar vetor estático (somente alocação dinâmica).

Exemplo de como deve ser o retorno no console:
Entrada (valores digitados): [12, 7, 18, 9, 22, 3, 10, 11, 14]
Saída (>10 e pares): [12, 18, 22, 14]

*/

#include <stdio.h>
#include <stdlib.h>

void filtrarMaioresQue10Pares(int **vetorOriginal, int tamanhoOriginal);

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
    filtrarMaioresQue10Pares(&vetorInicial, tamanhoInicial);
    free(vetorInicial);
    return 0;
}

void filtrarMaioresQue10Pares(int **vetorOriginal, int tamanhoOriginal){
    int *vetorComParesMaiorQueDez = NULL;
    int tamanhoDoVetorDinamicoComParesMaiorQueDez = 0;

    for(int i = 0; i < tamanhoOriginal; i++){
        int valorAtual = *(*vetorOriginal + i);
        if(valorAtual > 10 && valorAtual % 2 == 0){
            vetorComParesMaiorQueDez = (int *)realloc(vetorComParesMaiorQueDez, (tamanhoDoVetorDinamicoComParesMaiorQueDez + 1 ) * sizeof(int));
            *(vetorComParesMaiorQueDez + tamanhoDoVetorDinamicoComParesMaiorQueDez) = valorAtual;
            tamanhoDoVetorDinamicoComParesMaiorQueDez++;
        }
    }

    printf("Números > 10 e pares: \n");
    for(int i = 0; i < tamanhoDoVetorDinamicoComParesMaiorQueDez; i++){
        printf("%d", *(vetorComParesMaiorQueDez + i));
        printf(" ");
    }
    printf("\n");

    free(vetorComParesMaiorQueDez);
}
