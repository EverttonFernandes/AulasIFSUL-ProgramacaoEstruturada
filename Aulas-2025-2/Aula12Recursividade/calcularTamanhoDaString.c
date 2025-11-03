#include <stdio.h>

/*
RECURSÃO QUE OBTEM A STRING INFORMADA E COMEÇA NO INDICE ZERO ATÉ CHEGAR NO CASO BASE QUE É O \0
*/
int calcularTamanho(char *str, int indice);

int main() {
    char palavra[30];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("\nCalculando o tamanho da palavra '%s'...\n\n", palavra);

    int tamanho = calcularTamanho(palavra, 0);

    printf("\nO tamanho da palavra '%s' é: %d\n", palavra, tamanho);
    return 0;
}

int calcularTamanho(char *str, int indice) {
    printf("Chamando calcularTamanho: índice = %d, caractere = '%c'\n", indice, str[indice]);

    // Caso base: chegou ao final da string (caractere '\0')
    if (*(str + indice) == '\0') {
        printf("Caso base alcançado: índice = %d, caractere '\\0'. Retornando 0.\n", indice);
        return 0;
    }

    // Soma 1 para o caractere atual e chama a função para o próximo índice
    int resultado = 1 + calcularTamanho(str, indice + 1);
    printf("Resolvendo calcularTamanho: índice = %d, caractere = '%c'. Tamanho parcial = %d\n", indice, str[indice], resultado);

    return resultado;
}
