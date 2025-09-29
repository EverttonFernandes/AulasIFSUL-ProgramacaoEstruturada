#include<stdio.h>

/*
2) Remover numeros fora do Intervalo [primeiroNumero, segundoNumero] (int) com retorno do novo tamanho
Objetivo: Manter somente elementos dentro de [primeiroNumero, segundoNumero]; o resto sai; compactar; preencher sobras com 0.
Função sugerida: int filtrarPorFaixa(int *v, int n, int L, int R);

Regras: ponteiros; não criar outro vetor.

Retorno: novo tamanho lógico.
Exemplo: primeiroNumero=10, segundoNumero=20,
Entrada[5, 12, 19, 30]
Saída [12, 19], novo tamanho: 2.

*/
int filtrarPorFaixa(int *ponteiroComOsValoresOriginais, int tamanho, int limiteInferior, int limiteSuperior);

int main(){
    int tamanhoMaximo;
    int valores[tamanhoMaximo];
    int quantidade;
    int limiteInferior;
    int limiteSuperior;

    printf("Quantos valores inteiros deseja informar? ");
    scanf("%d", &tamanhoMaximo);

    for(int indice = 0; indice < tamanhoMaximo; indice++){
        printf("Valor %d: ", indice + 1);
        scanf("%d", &valores[indice]);
    }


    printf("Informe o primeiro numero que será usado como limite inferior: ");
    scanf("%d", &limiteInferior);

    printf("Informe o segundo numero que será usado como limite superior: ");
    scanf("%d", &limiteSuperior);

    if(limiteInferior > limiteSuperior){
        printf("Limites invalidos: inferior nao pode ser maior que superior.\n");
        return 1;
    }

    printf("Valores originais: \n");
    for(int indice = 0; indice < tamanhoMaximo; indice++){
        printf("%d ", valores[indice]);
    }
    printf("\n");

    int quantidadeDentroDaFaixa = filtrarPorFaixa(valores, tamanhoMaximo, limiteInferior, limiteSuperior);

    printf("Quantidade de numeros dentro da faixa: %d\n", quantidadeDentroDaFaixa);
    
    printf("Vetor apos a filtragem de valores que estão entre %d e %d: \n", limiteInferior, limiteSuperior);
    for(int indice = 0; indice < tamanhoMaximo; indice++){
        printf("%d ", valores[indice]);
    }
    printf("\n");

    return 0;
}

int filtrarPorFaixa(int *ponteiroComOsValoresOriginais, int tamanho, int limiteInferior, int limiteSuperior){
    int *ponteiroComValoresDentroDaFaixa = ponteiroComOsValoresOriginais; // atribui a primeira posição do vetor original ao ponteiro que vai guardar os valores dentro da faixa
    int contadorDeNumerosQueEstaoDentroDaFaixa = 0; // contador de números que estão dentro da faixa

    for(int indice = 0; indice < tamanho; indice++){
        int valorAtual = *(ponteiroComOsValoresOriginais + indice);

        if(valorAtual >= limiteInferior && valorAtual <= limiteSuperior){ // se o valor atual for menor que o limite inferior e superior (significa que ele está dentro da faixa)
            *ponteiroComValoresDentroDaFaixa = valorAtual; // atribui este valor que está dentro da faixa ao ponteiro que guarda os valores dentro da faixa
            ponteiroComValoresDentroDaFaixa++; // anda para a próxima posição para se colocar a disposição do um próximo valor que esteja dentro da faixa
            contadorDeNumerosQueEstaoDentroDaFaixa++; // aumenta o contador, justamente porque foi encontrado um valor que está dentro da faixa
        }
        
    }

    while(ponteiroComValoresDentroDaFaixa < ponteiroComOsValoresOriginais + tamanho){ // enquanto o ponteiro com os valores dentro da faixa não ter o mesmo tamanho do vetor original
        *ponteiroComValoresDentroDaFaixa = 0; // preenche as posições restantes com 0
        ponteiroComValoresDentroDaFaixa++; // fazendo o ponteiro andar sempre para a próxima posição para que seja possível preencher com 0
    }

    return contadorDeNumerosQueEstaoDentroDaFaixa;
}
