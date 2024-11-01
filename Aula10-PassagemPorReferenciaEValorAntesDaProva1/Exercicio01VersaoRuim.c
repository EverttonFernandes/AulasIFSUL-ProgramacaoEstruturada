#include <stdio.h>

/*
Escreva uma função que receba um caractere e determine se ele é:
Um número (0-9),
Uma vogal (a, e, i, o, u, maiúsculas ou minúsculas),
Uma consoante,
Ou um símbolo especial (qualquer outro caractere).
A função deve exibir uma mensagem correspondente para cada tipo de caractere.
Dica: Você pode utilizar as funções isalpha() para verificar se o caractere é uma letra e toupper() e tolower()
para realizar as conversões, ambas funções estão na biblioteca #include<ctype.h>.
Dica: Você pode usar a Tabela ASCII para descobrir o dígito de cada caractere, usando o código ASCII.

*/
void carac(char caracter) {

    if (caracter >= 'A' && caracter <= 'Z') { // A até Z maiusculo
        if (caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U') { // Vogais em maiusculo
            printf("\nO caracter informado e uma vogal de letra maiscula \n \n");
        }
        else {
            printf("\nO caracter e consoante de letra maiscula \n \n");
        }
    }
    else if (caracter >= 97 && caracter <= 122) { // A até Z minusculo
        if (caracter == 97 || caracter == 101 || caracter == 105 || caracter == 111 || caracter == 117) {// Vogais em minusculo
            printf("\nO caracter informado e uma vogal de letra minuscula \n \n");
        }
        else {
            printf("\nO caracter e consoante de letra minuscula \n \n");
        }
    }
    else {
        if (caracter >= 48 && caracter <= 57) { // 0 a 9
            printf("\nO caracter informado e um numero \n \n");
        }
        else {
            printf("\nO caracter informado e um simbolo \n \n");
        }
    }
}
int main() {
    char caracter;
    printf("Informe um caracter: \n");
    caracter = getchar();
    carac(caracter);
    return 0;
}