#include<stdio.h>

void mudaValorPorReferencia(int valor){
    *valor = 11;
    printf("O resultado atual da variavel valor agora eh: {%i} \n", *valor);
}

int main(){
    int valor = 10;
    mudaValorPorReferencia(&valor); // & é usado para passagem por referencia!
    valor++;
    printf("O resultado atual da variavel valor agora eh: {%i} \n", valor);
}