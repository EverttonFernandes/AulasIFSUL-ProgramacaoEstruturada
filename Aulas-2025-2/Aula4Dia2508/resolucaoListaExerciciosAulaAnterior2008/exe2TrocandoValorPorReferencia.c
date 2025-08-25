#include <stdio.h>

void trocar(int *primeiroNumero, int *segundoNumero){
    int variavelBackup = *primeiroNumero;
    *primeiroNumero = *segundoNumero;
    *segundoNumero = variavelBackup;
}

int main(){
    int primeiro, segundo;

    printf("Digite o primeiro número: ");
    scanf("%d", &primeiro);

    printf("Digite o segundo número: ");
    scanf("%d", &segundo);

    printf("Antes da troca: primeiro = %d, segundo = %d\n", primeiro, segundo);

    trocar(&primeiro, &segundo);

    printf("Depois da troca: primeiro = %d, segundo = %d\n", primeiro, segundo);

    return 0;
}
