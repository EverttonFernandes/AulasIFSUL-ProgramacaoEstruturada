#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * Exercício 4: Verificar Palavra em uma Frase
Peça ao usuário para digitar uma frase e, em seguida, uma palavra. Use a função strstr para verificar se a palavra está presente na frase.
Exiba uma mensagem informando:
Se a palavra foi encontrada na frase.
Caso contrário, informe que a palavra não está presente.
Dica: strstr retorna um ponteiro para a primeira ocorrência da palavra ou NULL se não for encontrada.
 */

int main() {
    char frase[20];
    char palavra[20];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    printf("Digite uma frase: ");
    fgets(palavra, sizeof(palavra), stdin);

    char *resultado = strstr(frase, palavra);
    if (resultado) {
        printf("A palavra encontrada foi: %s\n", resultado);
    } else {
        printf("A palavra informada nao consta na frase!");
    }
    return 0;

}