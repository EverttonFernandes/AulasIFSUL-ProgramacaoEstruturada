#include <stdio.h>

void incrementar(int *valor){
    *valor = *valor + 1;
    // outras maneiras de como fazer isto:
    //(*valor)++;
    // (*valor += 1);
}

int main(){
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    incrementar(&numero);

    printf("Número depois de incrementar: %d\n", numero);

    return 0;
}
