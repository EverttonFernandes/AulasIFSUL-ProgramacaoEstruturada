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

int contarVogaisRecursivamente(char *texto);
int ehVogal(char letra);

int main() {
    char frase[100];
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    int quantidadeDeVogais = contarVogaisRecursivamente(frase);

    printf("A frase contém %d vogais.\n", quantidadeDeVogais);
    return 0;
}

int contarVogaisRecursivamente(char *texto) {
    // Caso base: se a string estiver vazia, não há vogais
    if (*texto == '\0') {
        return 0;
    }

    // Verifica se o caractere atual é uma vogal
    char letra = *texto;
    
    if (ehVogal(letra)) {
        // Conta esta vogal e chama recursivamente para o próximo caractere
        return 1 + contarVogaisRecursivamente(texto + 1);
    } else {
        // Não é vogal, apenas chama recursivamente para o próximo caractere
        return contarVogaisRecursivamente(texto + 1);
    }
    
}

int ehVogal(char letra) {
    return (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
            letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U');
}