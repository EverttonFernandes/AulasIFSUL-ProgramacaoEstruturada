/*

Concatenar duas strings lidas com realloc e juntar recursivamente (retorna nova alocação)
Objetivo:
Permitir que o usuário digite duas frases (string 1 e string 2), cada uma lida caractere a caractere usando realloc até pressionar ENTER. Em seguida, chamar uma função recursiva que deve alocar com malloc o tamanho exato (tamanhoString1 + tamanhoString2) e copiar, recursivamente, os caracteres da string 1 seguidos dos da string 2 para a nova alocação. A função deve retornar o ponteiro para essa nova string concatenada.

Função sugerida:
char *concatenarRecursivamente(const char *string1, const char *string2);

Regras:

Leitura:

char *s1 = NULL; e char *s2 = NULL;

Cresça com realloc a cada caractere até '\n', depois finalize com '\0' (remova o '\n').

Processamento:

Dentro de concatenarRecursivamente, calcule tamanhoString1 e tamanhoString2 (pode usar strlen)).

Alocar exatamente tamanhoString1 + tamanhoString2 + 1 com malloc.

Copiar recursivamente: primeiro todos os chars de s1, depois todos de s2, sem usar strcpy/strcat nem laços for/while na cópia.

Caso base: quando terminarem as duas fontes, gravar '\0' e retornar.

Saída:

Na main, imprimir a nova string concatenada.

Liberar s1, s2 e a nova alocação ao final.

Sem variáveis globais.

Não criar vetor estático.

Exemplo (console):
Entrada 1: Hello,
Entrada 2: World!
Saída: Hello, World!

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concatenarRecursivamente(char **string1, char **string2, int indiceString1, int indiceString2, char *novaString);

int main(){
    char *string1 = NULL;
    char *string2 = NULL;
    char caractere;
    int tamanhoString1 = 0;
    int tamanhoString2 = 0;

    printf("Digite a primeira frase (pressione ENTER para finalizar): \n");
    while(1){
        caractere = getchar();
        if(caractere == '\n'){
            break;
        }
        string1 = (char *)realloc(string1, (tamanhoString1 + 1) * sizeof(char));
        *(string1 + tamanhoString1) = caractere;
        tamanhoString1++;
    }
    string1 = (char *)realloc(string1, (tamanhoString1 + 1) * sizeof(char));
    *(string1 + tamanhoString1) = '\0';

    printf("Digite a segunda frase (pressione ENTER para finalizar): \n");
    while(1){
        caractere = getchar();
        if(caractere == '\n'){
            break;
        }
        string2 = (char *)realloc(string2, (tamanhoString2 + 1) * sizeof(char));
        *(string2 + tamanhoString2) = caractere;
        tamanhoString2++;
    }
    string2 = (char *)realloc(string2, (tamanhoString2 + 1) * sizeof(char));
    *(string2 + tamanhoString2) = '\0';

    char *fraseConcatenada = concatenarRecursivamente(&string1, &string2, 0, 0, NULL);
    
    if (fraseConcatenada == NULL) {
        free(string1);
        free(string2);
        return 1;
    }

    printf("Frase concatenada: %s\n", fraseConcatenada);

    free(string1);
    free(string2);
    free(fraseConcatenada);

    return 0;
}

char *concatenarRecursivamente(char **string1, char **string2, int indiceString1, int indiceString2, char *novaString) {
    
    if (novaString == NULL) {
        int tamanhoTotal = strlen(*string1) + strlen(*string2) + 1;
        novaString = malloc(tamanhoTotal * sizeof(char));
        if (novaString == NULL) {
            printf("Erro ao alocar memoria para a concatenacao!\n");
            return NULL;
        }
    }

    int indiceNovaString = indiceString1 + indiceString2;

    char caracterAtualDaString1 = *(*string1 + indiceString1);
    
    if (caracterAtualDaString1 != '\0') {
        *(novaString + indiceNovaString) = caracterAtualDaString1;
        return concatenarRecursivamente(string1, string2, indiceString1 + 1, indiceString2, novaString);
    }
    
    char caracterAtualDaString2 = *(*string2 + indiceString2);
    if (*(*string2 + indiceString2) != '\0') {
        *(novaString + indiceNovaString) = caracterAtualDaString2;
        return concatenarRecursivamente(string1, string2, indiceString1, indiceString2 + 1, novaString);
    }

    *(novaString + indiceNovaString) = '\0';
    return novaString;
}
