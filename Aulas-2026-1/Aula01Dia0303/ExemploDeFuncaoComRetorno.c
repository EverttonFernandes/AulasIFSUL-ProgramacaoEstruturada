#include<stdio.h>

// int/char/float nomeDaFuncao();
// void nomeDaFuncao();

int retornarUmSeForMaiorDeIdade(int idadeRecebida);

int main(){
    int idadeInformada = 18;
    int resultadoDaFuncao = retornarUmSeForMaiorDeIdade(int idadeInformada)

    if (resultadoDaFuncao == 1){
        printf("A pessoa é maior de idade!\n");
    } else {
        printf("A pessoa é menor de idade!\n");
    }
    
}

int retornarUmSeForMaiorDeIdade(int idadeRecebida){
    if (idadeRecebida > 18){
        return 1;
    } else {
        return 0;
    }
}