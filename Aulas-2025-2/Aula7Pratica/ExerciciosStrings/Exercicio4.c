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

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    char *palavraEncontrada = strstr(frase, palavra);
    
    // Aula de *"Programacao" Estruturada
    
    // [P,r,o,g,r,a,m,a,c,a,o,\0]

    if (palavraEncontrada != NULL) {
        printf("A palavra encontrada foi: %s\n", palavraEncontrada);
    } else {
        printf("A palavra informada nao consta na frase!");
    }
    
    return 0;

}