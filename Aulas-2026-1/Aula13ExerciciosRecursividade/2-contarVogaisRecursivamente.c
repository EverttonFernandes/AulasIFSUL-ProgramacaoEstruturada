/*
2) Contar vogais em uma frase (recursivo)
Objetivo:
Ler uma frase e contar quantas vogais (a, e, i, o, u maiúsculas/minúsculas) existem usando recursão.

Função sugerida:
int contarVogaisRec(char *texto);

Regras:

Considerar apenas letras não acentuadas (a/e/i/o/u e A/E/I/O/U).

Imprimir a quantidade ao final.

Sem variáveis globais.

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contarVogaisRecursivamente(char *palavra);

int main(){
    char palavra[50];
    
    printf("Informe uma palavra: ");
    fgets(palavra, 50, stdin);

    int totalDeVogaisEncontradasRecursivamente = contarVogaisRecursivamente(palavra);
    printf("O total de vogais encontradas recursivamente eh %i ", totalDeVogaisEncontradasRecursivamente);
}

int contarVogaisRecursivamente(char *palavra){
    
    if(*palavra == '\0'){
        return 0;
    }

    char caracter = tolower(*palavra);
    
    if(caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u'){
        return 1 + contarVogaisRecursivamente(palavra + 1);
    } else {
        return contarVogaisRecursivamente(palavra + 1);
    }
    
}