/*
2) Alternar maiúsculas/minúsculas recursivamente (com malloc e ponteiro de ponteiro)
Objetivo:
Ler uma frase, alocar dinamicamente com malloc (tamanho exato + '\0') e transformar letras minúsculas em maiúsculas e vice-versa usando recursão, passando a alocação por referência e recebendo na função como ponteiro de ponteiro.

Função sugerida:
void alterarMaisculasEMinusculasRecursivamente(char **texto);

Regras:

Ler a frase (buffer temporário) → malloc(strlen+1) → copiar para a alocação.

Chamar a função com char ** e avançar o ponteiro interno a cada chamada.

Se islower → converter para maiúscula; se isupper → converter para minúscula; demais caracteres permanecem iguais.

Sem variáveis globais. Ao final, imprimir a frase transformada e liberar a memória.

Exemplo (console):
Entrada: “Oi, turma TSI2AN!” → Saída: “oI, TURMA tsi2an!”

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void alterarMaisculasEMinusculasRecursivamente(char **texto, int indice);

int main(){

    char caractere;
    int tamanhoMaximo;

    printf("Informe o tamanho máximo da frase: \n");
    scanf("%d", &tamanhoMaximo);

    char *texto = (char *) malloc((tamanhoMaximo + 1) * sizeof(char));
    
    if (texto == NULL) {
        printf("Erro ao alocar memória!\n");
        exit(1);
    }
    
    getchar(); // Limpa o buffer do teclado após o scanf

    printf("Digite a frase: \n");
    fgets(texto, tamanhoMaximo + 1, stdin);

    alterarMaisculasEMinusculasRecursivamente(&texto, 0);

    printf("Frase transformada: %s\n", texto);

    free(texto);

    return 0;
}

void alterarMaisculasEMinusculasRecursivamente(char **texto, int indice) {
    char caracterAtual = *(*texto + indice);

    if (caracterAtual == '\0') {
        return;
    }

    if (isalpha(caracterAtual)) {
        
        if (islower(caracterAtual)) {
            *(*texto + indice) = toupper(caracterAtual);
        } 
        
        if (isupper(caracterAtual)) {
            *(*texto + indice) = tolower(caracterAtual);
        }

    }

    alterarMaisculasEMinusculasRecursivamente(texto, indice + 1);
}