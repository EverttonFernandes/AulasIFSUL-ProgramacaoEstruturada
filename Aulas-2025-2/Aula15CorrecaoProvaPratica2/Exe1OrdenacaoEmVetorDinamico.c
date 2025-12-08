/*
1) Ordenar vetor dinâmico (40 pontos)
Implemente um programa em C que leia floats do usuário até que seja digitado 0. O 0 não deve ser
armazenado. Todos os valores lidos devem ser guardados em uma alocação dinâmica. Após a
leitura, ordene os valores em ordem crescente e imprima o resultado. Ao final, libere toda a
memória utilizada.
Exemplo do formato de saída
Entrada: 7 3 9 1 4 0​
Saída: 1 3 4 7 9
Pontuação (40 pts)
●​ Ordenação crescente correta do vetor (objetivo principal) – 20 pts​
●​ Leitura dinâmica com realloc (iniciar em NULL, crescer a cada valor até apertar 0) – 5 pts​
●​ Controle de tamanho (contador coerente com elementos inseridos) – 5 pts​
●​ Impressão no console dos valores ordenados) – 5 pts​
●​ Liberação de memória (todas as alocações usadas) – 5 pts

*/
#include <stdio.h>
#include <stdlib.h>

int main (){

    float *vetorDinamico = NULL;
    float valorInformado;
    int tamanhoVetor = 0;

    printf("Informe os valores a serem preenchidos: \n");

    while(1){
        scanf("%f", &valorInformado);

        if(valorInformado == 0){
            break;
        }
        vetorDinamico = (float *)realloc(vetorDinamico, (tamanhoVetor + 1) * sizeof(float));
        vetorDinamico[tamanhoVetor] = valorInformado;
        tamanhoVetor++;
    }

    while(1){
        int houveTroca = 0;

        for (int i = 0; i < tamanhoVetor; i++){
            int valorAtual = *(vetorDinamico + i);
            int valorDaProximaPosicao = *(vetorDinamico + i + 1);

            if(valorAtual > valorDaProximaPosicao){
                *(vetorDinamico + i) = valorDaProximaPosicao;
                *(vetorDinamico + i + 1) = valorAtual;
                houveTroca = 1;
            }
        }
        
        if (!houveTroca){
            break;
        }
        
    }

    printf("Vetor dinâmico ordenado: \n");
    for(int i = 1; i <= tamanhoVetor; i++){
        printf("%.2f ", *(vetorDinamico + i));
    }

    free(vetorDinamico);
    return 0;
}