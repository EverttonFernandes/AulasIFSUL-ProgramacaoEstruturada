#include <stdio.h>
#include <ctype.h>
/*
Escreva duas funções para manipulação de caracteres:
A primeira função, converterParaMaiusculo, deve receber um caractere como parâmetro e retornar o caractere convertido para maiúsculo, caso seja uma letra minúscula.
Se o caractere não for uma letra, a função deve retornar o próprio caractere.
A segunda função, converterParaMinusculo, deve receber um caractere como parâmetro e retornar o caractere convertido para minúsculo, caso seja uma letra maiúscula.
Se o caractere não for uma letra, a função deve retornar o próprio caractere.
No programa principal, peça ao usuário para digitar um caractere e exiba o resultado das duas conversões.
Dica:
Utilize as funções isalpha() para verificar se o caractere é uma letra e toupper() e tolower() para realizar as conversões, ambas funções estão na biblioteca #include<ctype.h>.

*/

char converterParaMaiusculo(char caractere);
char converterParaMinusculo(char caractere);

int main() {
    char caractereDigitado;

    printf("Digite um caractere: ");
    caractereDigitado = getchar();

    char letraMaiuscula = converterParaMaiusculo(caractereDigitado);
    char letraMinuscula = converterParaMinusculo(caractereDigitado);

    if (isalpha(caractereDigitado)) {
        printf("Original: %c\n", caractereDigitado);
        printf("Convertido para maiúsculo: %c\n", letraMaiuscula);
        printf("Convertido para minúsculo: %c\n", letraMinuscula);
    }
    else {
        printf("O caractere digitado não é uma letra.\n");
    }

    return 0;
}

char converterParaMaiusculo(char caractere) {
    if (isalpha(caractere)) {
        return toupper(caractere);
    }
    return caractere;
}

char converterParaMinusculo(char caractere) {
    if (isalpha(caractere)) {
        return tolower(caractere);
    }
}