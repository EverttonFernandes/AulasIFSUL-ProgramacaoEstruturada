#include<stdio.h>

// PROTÓTIPO DE FUNÇÃO!
// AQUI ESTAMOS USANDO UMA FUNÇÃO SEM RETORNO, POR ESTE MOTIVO TEM O VOID
void verificaSeONumeroEPar(int numeroRecebidoPorParametro);

int main(){
    int primeiroNumeroInformado;
    int segundoNumeroInformado;

    printf("Informe um numero \n");
    scanf("%i", &primeiroNumeroInformado);

    printf("Informe outro numero \n");
    scanf("%i", &segundoNumeroInformado);
    
    verificaSeONumeroEPar(primeiroNumeroInformado);
    verificaSeONumeroEPar(segundoNumeroInformado);
}

void verificaSeONumeroEPar(int numeroRecebidoPorParametro){
    if (numeroRecebidoPorParametro % 2 == 0){
        printf("O numero informado e par! \n");
    } else {
        printf("O numero informado e impar! \n");
    }
}