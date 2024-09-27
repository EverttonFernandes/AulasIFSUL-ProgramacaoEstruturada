
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
float obtemOPrimeiroNumeroDoUsuario();
float obtemOSegundoNumeroDoUsuario();
float obtemOTerceiroNumeroDoUsuario();
float calcularMedia(int primeiroNumero, int segundoNumero, int terceiroNumero);
void mostrarResultadoDaMediaNaTela(float resultadoDaMedia);

int main() {
    mostrarResultadoDaMediaNaTela(calcularMedia(obtemOPrimeiroNumeroDoUsuario(), obtemOSegundoNumeroDoUsuario(), obtemOTerceiroNumeroDoUsuario()));
}

float obtemOPrimeiroNumeroDoUsuario(){
    float primeiroNumero;
    printf("Informe o primeiro numero: ");
    scanf("%f", &primeiroNumero);
    return primeiroNumero; 
}

float obtemOSegundoNumeroDoUsuario(){
    float segundoNumero;
    printf("Informe o segundo numero: ");
    scanf("%f", &segundoNumero);
    return segundoNumero; 
}

float obtemOTerceiroNumeroDoUsuario(){
    float terceiroNumero;
    printf("Informe o terceiro numero: ");
    scanf("%f", &terceiroNumero);
    return terceiroNumero; 
}

float calcularMedia(int primeiroNumero, int segundoNumero, int terceiroNumero) {
    return (primeiroNumero + segundoNumero + terceiroNumero) / 3;
}

void mostrarResultadoDaMediaNaTela(float resultadoDaMedia){
    printf("O resultado da media com base nos 3 valores informados e: %.2f \n", resultadoDaMedia);
}