
/*
4) Função com Retorno (Média de Três Números)
Cenário: Dado que você tem uma função que deve calcular a média de três números inteiros, 
então a função main deve chamar essa função e exibir o resultado da média na tela.

Exercício:
Escreva uma função chamada calcularMedia que receba três números inteiros e devolva a média deles.
A função main deve pedir ao usuário que insira três números, passar esses números para a função calcularMedia, 
receber o resultado e exibir a média na tela.

Dica:  A fórmula da média de três números é (n1 + n2 + n3) / 3..

*/
#include <stdio.h>

float calcularMedia(int primeiroNumero, int segundoNumero, int terceiroNumero);

int main() {
    float primeiroNumero;
    printf("Informe o primeiro numero: ");
    scanf("%f", &primeiroNumero);

    float segundoNumero;
    printf("Informe o segundo numero: ");
    scanf("%f", &segundoNumero);

    float terceiroNumero;
    printf("Informe o terceiro numero: ");
    scanf("%f", &terceiroNumero);

    float resultadoDaMedia = calcularMedia(primeiroNumero, segundoNumero, terceiroNumero);

    printf("O resultado da media com base nos 3 valores informados e: %.2f \n", resultadoDaMedia);
}

float calcularMedia(int primeiroNumero, int segundoNumero, int terceiroNumero) {
    return (primeiroNumero + segundoNumero + terceiroNumero) / 3;
}
