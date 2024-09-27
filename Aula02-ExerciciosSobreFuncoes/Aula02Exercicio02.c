#include <stdio.h>

/*
2)   Função com condicional (Verificar Par ou ímpar) 
Cenário: Dado que você tem uma função que deve verificar se um número inteiro é par ou ímpar, 
então a função main deve chamar essa função e exibir a mensagem correspondente na tela.

Exercício:
Escreva uma função chamada verificarParImpar que receba um número inteiro e devolva 1 se o número for par e 0 se for ímpar.
A função main deve pedir ao usuário que insira um número, chamar a função verificarParImpar, 
e então exibir "O número é par" ou "O número é ímpar", dependendo do resultado.

Dica: Use a operação de resto (%) para verificar se o número é divisível por 2.
*/
int verificarParImpar(int numeroInformadoPeloUsuario);

int main() {
    int numeroInformadoPeloUsuario;
    printf("Digite um numero inteiro: ");
    scanf("%i", &numeroInformadoPeloUsuario);

    int resultadoDaFuncaoParOuImpar = verificarParImpar(numeroInformadoPeloUsuario);

    if(resultadoDaFuncaoParOuImpar == 1){
        printf("O numero informado e par!\n");
    } else {
        printf("O numero informado e impar!\n");
    }
}

int verificarParImpar(int numeroInformadoPeloUsuario) {
    if(numeroInformadoPeloUsuario % 2 == 0){
        return 1;
    } else {
        return 0;
    }
}
