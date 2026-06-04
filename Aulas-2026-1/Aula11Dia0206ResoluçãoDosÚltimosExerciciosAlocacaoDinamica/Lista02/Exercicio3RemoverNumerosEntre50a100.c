/*
3) Remover números entre 50 & 100 com contador sendo passado por referência.

Permitir que o usuário digite quantos inteiros quiser, com parada ao pressionar 0. Cada número digitado deve ser adicionado a um vetor dinâmico usando realloc. Em seguida, enviar esse vetor e o novoTamanho por referência para uma função que percorra os valores e construa uma nova alocação que DESCONSIDERA todos os números entre 50 e 100. A função deve retornar a nova alocação e preencher *novoTamanho com a quantidade resultante. No final, a main deve imprimir a nova alocação com um for até novoTamanho e liberar as memórias.

Função sugerida:
int* excluirIntervalo50a100(const int *vetorOriginal, int tamanhoOriginal, int *novoTamanho);

Regras:

Iniciar leitura com int *vetorInicial = NULL e crescer com realloc a cada número até o usuário digitar 0 (o 0 não deve ser armazenado).

Na função, iniciar int *vetorFiltrado = NULL e usar realloc a cada inclusão de valores fora do intervalo [50, 100].

Retornar vetorFiltrado e preencher *novoTamanho com a quantidade de elementos filtrados.

Ordem de liberação (na main): free(vetorInicial) → imprimir vetorFiltrado usando novoTamanho → free(vetorFiltrado).

Sem variáveis globais. Sem vetor estático. Checar realloc com ponteiro temporário.

Exemplo de como deve ser o retorno no console:
Entrada (valores digitados): [45, 50, 60, 22, 101, 100, 7, 0]
Saída (excluídos 50..100): [45, 22, 101, 7]

*/

#include <stdio.h>
#include <stdlib.h>

int* excluirIntervalo50a100(const int *vetorOriginal, int tamanhoOriginal, int *novoTamanho);

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

    int novoTamanho = 0;
    int *novaAlocacao = excluirIntervalo50a100(vetorInicial, tamanhoInicial, &novoTamanho);

    printf("Vetor filtrado (excluídos 50..100):\n");
    for(int i = 0; i < novoTamanho; i++){
        printf("%d ", *(novaAlocacao + i));
    }
    printf("\n");

    free(vetorInicial);
    free(novaAlocacao);
    
    return 0;
}

int* excluirIntervalo50a100(const int *vetorOriginal, int tamanhoOriginal, int *novoTamanho){
    int *vetorFiltrado = NULL;

    for(int i = 0; i < tamanhoOriginal; i++){

        int valorAtual = *(vetorOriginal + i);
        
        if(valorAtual < 50 || valorAtual > 100){
            vetorFiltrado = (int *)realloc(vetorFiltrado, (*novoTamanho + 1) * sizeof(int));
            *(vetorFiltrado + *novoTamanho) = valorAtual;
            (*novoTamanho)++;
        }

    }

    return vetorFiltrado;
}