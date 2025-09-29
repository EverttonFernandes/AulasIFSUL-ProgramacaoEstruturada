/* 

6) Remover numeros repetidos (int)
Objetivo: Remover repetições consecutivas do mesmo número, mantendo uma única ocorrência por bloco.
Função sugerida: int removeNumerosRepetidos(int *v, int n);

Regras: use dois ponteiros um que manipula o vetor informado e outro que vai possuir o novo tamanho sem numeros repetidos.; não criar outro vetor.

Retorno: novo tamanho lógico.
Exemplo: [2,2,2,3,3,1,1,4] → [2,3,1,4,0,0,0,0], novo tamanho: 4.

*/
#include<stdio.h>
#include<string.h>

int removerNumerosRepetidos(int * numeros, int tamanho);

int main(){
    int tamanhoMaximo;
    int numeros[tamanhoMaximo];
    int quantidade;

    printf("Digite a quantidade de numeros ");
    scanf("%d", &tamanhoMaximo);

    for(int i = 0; i < tamanhoMaximo; i++){
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Numeros originais: ");
    for(int i = 0; i < tamanhoMaximo; i++){
        printf("%d ", numeros[i]);
    }
    printf("\n");

    int novoTamanho = removerNumerosRepetidos(numeros, tamanhoMaximo);

    printf("Total de numeros MANTIDOS apos remover repeticoes: %d\n", novoTamanho);
    
    printf("Numeros sem repeticoes: ");
    for(int i = 0; i < tamanhoMaximo; i++){
        printf("%d ", numeros[i]);
    }
    printf("\n");
    
    return 0;
}

int removerNumerosRepetidos(int *ponteiroComOsNumerosOriginais, int tamanho){
    int *novoPonteiroComNumerosUnicos = ponteiroComOsNumerosOriginais;
    int contadorDeNumerosMantidos = 0;
    int ultimoValor = 0;

    for(int indice = 0; indice < tamanho; indice++){
        int valorAtual = *(ponteiroComOsNumerosOriginais + indice);
        if(valorAtual != ultimoValor){
            *novoPonteiroComNumerosUnicos = valorAtual;
            novoPonteiroComNumerosUnicos++;
            ultimoValor = valorAtual;
            contadorDeNumerosMantidos++;
        }
    }

    // Preenche o restante do vetor com zeros
    while(novoPonteiroComNumerosUnicos < ponteiroComOsNumerosOriginais + tamanho){
        *novoPonteiroComNumerosUnicos = 0;
        novoPonteiroComNumerosUnicos++;
    }

    ponteiroComOsNumerosOriginais = novoPonteiroComNumerosUnicos;
    return contadorDeNumerosMantidos;
}
