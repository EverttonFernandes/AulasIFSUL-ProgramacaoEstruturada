#include <stdio.h>
#include <string.h>

/**
O que faz: Localiza a primeira ocorrência de uma substring dentro de outra string.
Quando usar: Quando quiser procurar uma palavra específica dentro de uma frase.
 */
int main() {
    char *resultado = strstr("Olá, mundo!", "mundo");
    if (resultado) {
        printf("Substring encontrada: %s\n", resultado);
    }
    return 0;
}
