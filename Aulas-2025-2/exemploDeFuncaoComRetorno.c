#include<stdio.h>

// PROTÓTIPO DE FUNÇÃO!
// AQUI ESTAMOS USANDO UMA FUNÇÃO COM RETORNO, POR ESTE MOTIVO TEM UMA TIPAGEM (QUE PODERIA SER, INT, CHAR, FLOAT E etc...)
int somarNumeros(int primeiroNumeroRecebido, int segundoNumeroRecebido);

int main(){
    int primeiroNumero;
    int segundoNumero;

    printf("Informe o primeiro numero \n");
    scanf("%i", &primeiroNumero);

    printf("Informe o segundo numero \n");
    scanf("%i", &segundoNumero);

    int resultado = somarNumeros(primeiroNumero, segundoNumero);

    printf("O resultado da soma eh %i ", resultado);
}

int somarNumeros(primeiroNumero, segundoNumero){
    int resultadoDaSoma = 0;
    resultadoDaSoma = primeiroNumero + segundoNumero
    return resultadoDaSoma;
}


