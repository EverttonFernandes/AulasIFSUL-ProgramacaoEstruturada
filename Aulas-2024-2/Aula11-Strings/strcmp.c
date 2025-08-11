#include<stdio.h>
#include<string.h>

/*
strcmp é usado quando queremos COMPARAR duas strings! 
A função strcmp vai retornar 0 se as strings forem iguais, um valor negativo se a primeira string for menor que a segunda 
e um valor positivo se a primeira string for maior que a segunda string.
*/
int main(){
    /// CONSIDEREM FORTEMENTE O EXEMPLO 1, o 2 e 3 é somente para vocês saberem!
    // Exemplo 1: Comparar strings para igualdade
    if (strcmp("casa", "casa") == 0) {
        printf("Exemplo 1: Strings são iguais.\n");
    }

    // Exemplo 2: Verificar se a primeira string é menor que a segunda
    if (strcmp("borracha", "casa") < 0) {
        printf("Exemplo 2: 'borracha' é menor que 'casa'.\n");
        /// como b na tabela ASCII é menor que c a função entende que borracha é menor
    }

    // Exemplo 3: Verificar se a primeira string é maior que a segunda
    if (strcmp("zebra", "gato") > 0) {
        printf("Exemplo 3: 'zebra' é maior que 'gato'.\n");
        /// como z na tabela ASCII é maior que c a função entende que zebra é menor
    }

    return 0;
}
