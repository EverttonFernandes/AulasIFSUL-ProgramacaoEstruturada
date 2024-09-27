#include <stdio.h>

// Protótipos de funções
int somar(int a, int b);  // Protótipo da função com retorno
void armazenarResultado(int valor);  // Protótipo da função sem retorno

int resultado = 0;  // Variável global

int main() {
    int cinco = 5, dez = 10;
    int soma = somar(cinco, dez);  // Chama a função com retorno
    armazenarResultado(soma);  // Chama a função sem retorno
    printf("Resultado da soma: %d\n", resultado);  // Usa a variável global
    return 0;
}

// Função com retorno
int somar(int a, int b) {
    return a + b;
}

// Função sem retorno
void armazenarResultado(int valor) {
    resultado = valor;  // Modifica a variável global
}
