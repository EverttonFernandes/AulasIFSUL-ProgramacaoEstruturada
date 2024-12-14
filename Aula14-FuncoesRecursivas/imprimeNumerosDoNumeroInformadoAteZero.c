#include <stdio.h>

/*
Criar um procedimento recursivo que mostra todos os numeros do numero informado até zero.
*/

void imprimir(int numeroInformado);

int main(){
    int numero;
    printf("Digite um numero \n ");
    scanf("%d", &numero);

    imprimir(numero);
}

void imprimir(int numeroInformado){
    if (numeroInformado == 0){
        printf("%d \n", numeroInformado);
    } else {
        printf("%d \n", numeroInformado);
        imprimir(numeroInformado - 1);
    }
}