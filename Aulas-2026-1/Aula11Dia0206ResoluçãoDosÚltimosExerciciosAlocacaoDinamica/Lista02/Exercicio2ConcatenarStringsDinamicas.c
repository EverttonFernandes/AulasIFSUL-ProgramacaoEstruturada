/*
2) String: concatenar strings dinâmicas (retorna nova string)

Ler duas frases (cada uma até o usuário pressionar ENTER) usando realocação caractere a caractere (realloc a cada entrada). Em seguida, enviar essas duas alocações para uma função que cria uma nova alocação com o tamanho exato para concatenar as duas frases (opcionalmente com um espaço entre elas) e retorna essa nova string para o main. Por fim, o main deve receber a string concatenada, imprimir na tela e depois liberar todas as alocações.

Função sugerida:
char* concatenarAlocacoes(char **frase1, int tam1, char **frase2, int tam2);

Regras:

Ler a primeira frase em char *frase1 = NULL, realocando a cada caractere até '\n'. Armazenar o tamanho (sem '\n', com '\0' garantido).

Repetir o processo para a segunda frase em char *frase2 = NULL.

Chamar concatenarAlocacoes(&frase, tam1, &frase, tam2); a função deve:

Alocar tam1 + tam2 (reserva +1 ao final para o \0).

Copiar o conteúdo de *frase1 seguido de *frase2 (ou inserir um espaço entre elas, se definido no enunciado do aluno).

Retornar o ponteiro da nova alocação ao chamador.

No main:

Imprimir a string resultante.

Liberar em ordem: free(f1), free(f2), free(fraseFinal).

Sem variáveis globais. Não usar vetores estáticos.

Exemplo de saída no console:
Entrada 1: Programação em C
Entrada 2: é sensacional!
Saída: Programação em C é sensacional!

Dicas:

Use ponteiro temporário em toda chamada a realloc e cheque NULL.

Calcule o tamanho com strlen após finalizar a frase com '\0'.

Para unir as strings use strcpy.

Ler duas frases (cada uma até o usuário pressionar ENTER) usando realocação caractere a caractere (realloc a cada entrada). Em seguida, enviar essas duas alocações para uma função que cria uma nova alocação com o tamanho exato para concatenar as duas frases (opcionalmente com um espaço entre elas) e retorna essa nova string para o main. Por fim, o main deve imprimir a string concatenada e liberar todas as alocações.
Função sugerida:
char* concatenarAlocacoes(char **frase1, int tam1, char **frase2, int tam2);
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concatenarAlocacoes(char **string1, int tamanhoDaString1, char **string2, int tamanhoDaString2);

int main(){
    char *string1 = NULL;
    char *string2 = NULL;
    int tamanhoDaString1 = 0, tamanhoDaString2 = 0;
    char caractere;

    printf("Digite a primeira frase (pressione ENTER para finalizar):\n");
    
    while(1){
        caractere = getchar();
        if(caractere == '\n'){
            break;
        }
        string1 = (char *)realloc(string1, (tamanhoDaString1 + 1) * sizeof(char));
        *(string1 + tamanhoDaString1) = caractere;
        tamanhoDaString1++;
    }

    // Adicionando o terminador de string
    string1 = (char *)realloc(string1, (tamanhoDaString1 + 1) * sizeof(char));
    *(string1 + tamanhoDaString1) = '\0';

    printf("Digite a segunda frase (pressione ENTER para finalizar):\n");
    
    while(1){
        caractere = getchar();
        if(caractere == '\n'){
            break;
        }
        string2 = (char *)realloc(string2, (tamanhoDaString2 + 1) * sizeof(char));
        *(string2 + tamanhoDaString2) = caractere;
        tamanhoDaString2++;
    }

    // Adicionando o terminador de string
    string2 = (char *)realloc(string2, (tamanhoDaString2 + 1) * sizeof(char));
    *(string2 + tamanhoDaString2) = '\0';

    char *fraseConcatenada = concatenarAlocacoes(&string1, tamanhoDaString1, &string2, tamanhoDaString2);
    
    printf("Frase concatenada: %s\n", fraseConcatenada);

    free(string1);
    free(string2);
    free(fraseConcatenada);
    
    return 0;
}

char* concatenarAlocacoes(char **string1, int tamanhoDaString1, char **string2, int tamanhoDaString2){
    char *fraseConcatenada = (char *)malloc((tamanhoDaString1 + tamanhoDaString2 + 1) * sizeof(char)); // +1 para o espaço em branco que vai ficar entre as strings.

    if (fraseConcatenada == NULL) {
        printf("Erro ao alocar memória.\n");
        return NULL;
    }

    strcpy(fraseConcatenada, *string1); // Copia a primeira string
    strcat(fraseConcatenada, " "); // Adiciona um espaço entre as frases
    strcat(fraseConcatenada, *string2); // Copia a segunda string

    return fraseConcatenada;
}