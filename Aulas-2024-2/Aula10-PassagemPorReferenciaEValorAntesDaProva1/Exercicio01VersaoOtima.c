#include <stdio.h>
#include <ctype.h>
#include <stdbool.h> // Para usar true e false

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

void identificarTipoDeCaractere(char caractereDigitado);
bool verificaSeOCaracterEUmNumero(char caractereDigitado);
int verificaSeOCaracterEUmaVogal(char caractereDigitado);
void verificarSeCaracterMaiusculoEVogalOuConsoante(int ehVogal);
void verificarSeCaracterMinusculoEVogalOuConsoante(int ehVogal);

int main() {
    char caractereDigitado;
    printf("Informe um caractere: ");
    caractereDigitado = getchar();
    identificarTipoDeCaractere(caractereDigitado);
    return 0;
}

void identificarTipoDeCaractere(char caractereDigitado) {
    if (verificaSeOCaracterEUmNumero(caractereDigitado)) {
        printf("\nO caractere informado é um número.\n\n");
        return;
    }

    if (!isalpha(caractereDigitado)) {
        printf("\nO caractere informado é um símbolo.\n\n");
        return;
    }

    int ehVogal = verificaSeOCaracterEUmaVogal(caractereDigitado);

    if (isupper(caractereDigitado)) {
        verificarSeCaracterMaiusculoEVogalOuConsoante(ehVogal);
    }
    else {
        verificarSeCaracterMinusculoEVogalOuConsoante(ehVogal);
    }
    return;
}

bool verificaSeOCaracterEUmNumero(char caractereDigitado) {
    return isdigit(caractereDigitado);
}

int verificaSeOCaracterEUmaVogal(char caractereDigitado) {
    char caracterConvertido = tolower(caractereDigitado);
    return caracterConvertido == 'a' ||
        caracterConvertido == 'e' ||
        caracterConvertido == 'i' ||
        caracterConvertido == 'o' ||
        caracterConvertido == 'u' ? 1 : 0;
}

void verificarSeCaracterMaiusculoEVogalOuConsoante(int ehVogal) {
    if (ehVogal) {
        printf("\nO caractere informado é uma vogal maiúscula.\n\n");
    }
    else {
        printf("\nO caractere informado é uma consoante maiúscula.\n\n");
    }
}

void verificarSeCaracterMinusculoEVogalOuConsoante(int ehVogal) {
    if (ehVogal) {
        printf("\nO caractere informado é uma vogal minúscula.\n\n");
    }
    else {
        printf("\nO caractere informado é uma consoante minúscula.\n\n");
    }
}
