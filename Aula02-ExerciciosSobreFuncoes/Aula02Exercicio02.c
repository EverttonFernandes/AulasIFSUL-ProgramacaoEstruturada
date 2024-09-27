#include <stdio.h>

int retornaNumeroInformadoPeloUsuario();
int verificarParImpar(int numeroInformadoPeloUsuario);
void verificaResultadoDaFuncao(int resultadoDaFuncaoParOuImpar);

int main() {
    int recebeONumeroInformadoPeloUsuario = retornaNumeroInformadoPeloUsuario();

    int resultadoDaFuncaoParOuImpar = verificarParImpar(recebeONumeroInformadoPeloUsuario);

    verificaResultadoDaFuncao(resultadoDaFuncaoParOuImpar);
}

int retornaNumeroInformadoPeloUsuario(){
    int numeroInformadoPeloUsuario;
    printf("Digite um numero inteiro: ");
    scanf("%i", &numeroInformadoPeloUsuario);
    return numeroInformadoPeloUsuario; 
}

int verificarParImpar(int numeroInformadoPeloUsuario) {
    if(numeroInformadoPeloUsuario % 2 == 0){
        return 1;
    } else {
        return 0;
    }
}

void verificaResultadoDaFuncao(int resultadoDaFuncaoParOuImpar){
    if(resultadoDaFuncaoParOuImpar == 1){
        printf("O numero informado e par!\n");
    } else {
        printf("O numero informado e impar!\n");
    }
}
