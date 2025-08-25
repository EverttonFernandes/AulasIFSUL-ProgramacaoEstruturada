#include <stdio.h>

void alterarParaZero(int *valor){
    *valor = 0;
}

int main(){
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("Antes da alteração: %d\n", numero);

    alterarParaZero(&numero);

    printf("Depois da alteração: %d\n", numero);

    return 0;
}
