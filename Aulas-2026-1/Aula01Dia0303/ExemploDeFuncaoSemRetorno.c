#include<stdio.h>

// Protótipo da função para declarar uma variavel
void somar(int primeiroNumero, int segundoNumero);
void multiplicar(int primeiroNumero, int segundoNumero);
void mostraOResultadoDaVariavelGlobalQueFazAMultiplicacao();
int resultadoDaFuncaoMultiplicar; // UMA VEZ DECLARADA UMA VARIAVEL GLOBAL ELA PODE SER USADA EM QUALQUER LUGAR DO NOSSO PROGRAMA!

int main(){
    int primeiroNumero = 5;
    int segundoNumero = 5;

    somar(primeiroNumero, segundoNumero);
    multiplicar(primeiroNumero, segundoNumero);
    mostraOResultadoDaVariavelGlobalQueFazAMultiplicacao();
}

void somar(int primeiroNumero, int segundoNumero){ // podemos também chamar de procedimento!
    // A LÓGICA DESSA FUNÇÃO FICA AQUI DENTRO
    int resultado = primeiroNumero + segundoNumero;
    printf("Resultado da soma: %d\n", resultado);
}

void multiplicar(int primeiroNumero, int segundoNumero){
    resultadoDaFuncaoMultiplicar = primeiroNumero * segundoNumero;
}

void mostraOResultadoDaVariavelGlobalQueFazAMultiplicacao(){
    printf("Resultado da multiplicacao: %d\n", resultadoDaFuncaoMultiplicar);
}