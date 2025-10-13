#include<stdio.h>

/* 

Escreva uma função transformarNegativoEmPositivo(int numeroNegativo) que
receba um número inteiro negativo como passagem de parâmetros por valor e valida se o valor é
negativo ou seja menor que zero, caso for menor que zero a função deve ser capaz de retornar o
número positivo. Ao fim mostre na tela este número transformado!

*/

int transformarNegativoEmPositivo(int numeroInformado);

int main(){
    int numero = 9;

    int resultadoDaFuncao = transformarNegativoEmPositivo(numero);

    printf("Resultado da funcao: %i\n", resultadoDaFuncao);
}


int transformarNegativoEmPositivo(int numeroInformado){
    if (numeroInformado < 0){
        return numeroInformado * -1;
    } else {
        printf("O numero não foi convertido, pois era positivo! \n");
        return numeroInformado;
    }
}

