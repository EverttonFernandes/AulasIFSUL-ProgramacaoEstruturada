/* 
5) Ler frase com realloc e depois substituir não alfabéticos por * (processamento recursivo)
Objetivo:
Ler uma frase realocando caractere a caractere até o usuário pressionar ENTER. Em seguida, substituir recursivamente tudo que não for letra alfabética por '*' e imprimir o resultado.

Funções sugeridas:

Leitura dinâmica na main (crescendo com realloc até '\n', finalizar com '\0').

Processamento: void substituirNaoAlfabeticosPorAsteriscoRec(char **texto);

Regras:

Modificar in place a string lida.

Usar ctype.h (isalpha) conforme necessário.

Liberar a memória ao final.

Sem variáveis globais.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void substituirNaoAlfabeticosPorAsteriscoRecursivamente(char **texto, int indice);

int main() {
    char *fraseOriginal = NULL;
    char caractere;
    int tamanhoFrase = 0;

    printf("Digite uma frase (pressione ENTER para finalizar): \n");

    // Leitura dinâmica da frase com realloc
    while(1){
        caractere = getchar();
        if(caractere == '\n'){
            break;
        }
        fraseOriginal = (char *)realloc(fraseOriginal, (tamanhoFrase + 1) * sizeof(char)); // aumenta o tamanho da alocação em 1 caractere
        *(fraseOriginal + tamanhoFrase) = caractere;
        tamanhoFrase++;
    }

    substituirNaoAlfabeticosPorAsteriscoRecursivamente(&fraseOriginal, 0);

    printf("fraseOriginal modificada: %s\n", fraseOriginal);

    free(fraseOriginal);
    return 0;
}

void substituirNaoAlfabeticosPorAsteriscoRecursivamente(char **frase, int indice) { // [o][l][a][*][\0]
    // Caso base: se chegamos ao final da string
    char caractereAtual = *(*frase + indice);
    if (caractereAtual == '\0') {
        return;
    }

    // Verifica se o caractere atual não é alfabético
    if (!isalpha(caractereAtual)) {
        *(*frase + indice) = '*'; // substitui por '*'
    }

    // Chama recursivamente para o próximo caractere
    substituirNaoAlfabeticosPorAsteriscoRecursivamente(frase, indice + 1);
}