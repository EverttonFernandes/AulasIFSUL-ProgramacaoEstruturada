#include<stdio.h>

int removerNegativos(float *ponteiroComOsValoresOriginais, int tamanho);

int main(){
    int tamanhoMaximo;
    float valores[tamanhoMaximo];

    printf("Quantos valores tu deseja ter no vetor float? ");
    scanf("%d", &tamanhoMaximo);

    for(int indice = 0; indice < tamanhoMaximo; indice++){
        printf("Valor %d: ", indice + 1);
        scanf("%f", &valores[indice]);
    }

    printf("Valores originais: ");
    for(int indice = 0; indice < tamanhoMaximo; indice++){
        printf("%.1f ", valores[indice]);
    }
    printf("\n");

    int quantidadeDeNaoNegativos = removerNegativos(valores, tamanhoMaximo);

    printf("Quantidade de numeros >= 0: %d\n", quantidadeDeNaoNegativos);
    
    printf("Vetor apos remocao dos negativos: ");
    for(int indice = 0; indice < tamanhoMaximo; indice++){
        printf("%.1f ", valores[indice]);
    }
    
    printf("\n");

    return 0;
}

int removerNegativos(float *ponteiroComOsValoresOriginais, int tamanho){
    float *ponteiroComFloatsPositivos = ponteiroComOsValoresOriginais; // atribui a primeira posição do vetor original ao ponteiro que vai guardar os floats positivos
    int contadorDeFloatsPositivos = 0;

    for(int indice = 0; indice < tamanho; indice++){
        float valorAtualNoIndice = *(ponteiroComOsValoresOriginais + indice); // desreferencia o valor atual do índice (acessa o valor atual dentro da posição do índice)

        if(valorAtualNoIndice >= 0.0f){
            *ponteiroComFloatsPositivos = valorAtualNoIndice;
            ponteiroComFloatsPositivos++; // Anda para a próxima posição para se colocar a disposição do um próximo valor >= 0
            contadorDeFloatsPositivos++; // aumenta o contador, justamente porque foi encontrado um valor float >= 0.0
        }

    }

    // o ponteiro ponteiroComFloatsPositivos neste momento está apontando 
    while(ponteiroComFloatsPositivos < ponteiroComOsValoresOriginais + tamanho){ // enquanto o ponteiro com os floats positivos não ter o mesmo tamanho do vetor original
        *ponteiroComFloatsPositivos = 0.0f; // preenche as posições restantes com 0.0
        ponteiroComFloatsPositivos++; // anda para a próxima posição para preencher com 0.0
    }

    return contadorDeFloatsPositivos;
}
