#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
Exercício 3: Comparação de Duas Strings
Crie um programa que peça ao usuário para digitar duas palavras. Utilize a função strcmp para verificar e exibir:
Se as palavras são iguais.
*/
int compararPalavras(char primeiraPalavra[], char segundaPalavra[]);

int main() {
    char primeiraPalavra[20];
    char segundaPalavra[20];

    printf("Digite uma frase: ");
    fgets(primeiraPalavra, sizeof(primeiraPalavra), stdin);

    printf("Digite uma frase: ");
    fgets(segundaPalavra, sizeof(segundaPalavra), stdin);

    if (strcmp(primeiraPalavra, segundaPalavra) == 0) {
        printf("Sao iguais! \n");
    } else {
        printf("Sao diferentes! \n");
    }

}