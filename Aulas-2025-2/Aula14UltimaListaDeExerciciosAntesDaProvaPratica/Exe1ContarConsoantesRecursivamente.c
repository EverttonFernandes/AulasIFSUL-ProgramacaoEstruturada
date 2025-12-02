/*
1) Contar consoantes de forma recursiva (com malloc e ponteiro de ponteiro)
Objetivo:
Ler uma frase do usuário, alocar dinamicamente com malloc (tamanho exato da frase + '\0') e contar quantas consoantes existem usando recursão, passando a alocação por referência e recebendo na função como ponteiro de ponteiro.

Função sugerida:
int contarConsoantesRecursivamente(char **texto);

Regras:

Ler a frase (pode usar fgets em buffer temporário) e então alocar com malloc exatamente strlen+1, copiando o conteúdo.

Chamar a função recursiva com char ** (por referência) e avançar o ponteiro interno a cada chamada.

Considerar apenas letras A–Z/a–z sem acento; consoante = letra que não é vogal (a, e, i, o, u).

Sem variáveis globais. Ao final, imprimir o total e liberar a memória.

Exemplo (console):
Entrada: “Programacao Estruturada” → Saída esperada: Total de consoantes: 14 (valor meramente ilustrativo)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int contarConsoantesRecursivamente(char **texto, int contador);

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

    int totalConsoantes = contarConsoantesRecursivamente(&texto, 0);

    printf("Total de consoantes: %d\n", totalConsoantes);

    free(texto);

    return 0;
}

int contarConsoantesRecursivamente(char **texto, int contador) {
    char letraAtual = *(*texto + contador);

    if (letraAtual == '\0') {
        return 0;
    }

    if (isalpha(letraAtual)) {
        letraAtual = tolower(letraAtual);
        if (letraAtual != 'a' && letraAtual != 'e' && letraAtual != 'i' && letraAtual != 'o' && letraAtual != 'u') {
            return 1 + contarConsoantesRecursivamente(texto, contador + 1);
        }
    }
    
    return contarConsoantesRecursivamente(texto, contador + 1);
}
