#include <stdio.h>
#include <stdlib.h>

// Protótipos das funções
char* alocarString(int tamanho);
int calcularComprimento(char *str);
void liberarMemoria(char *str);

int main() {
    int tamanhoMax;
    char *palavra = NULL; // Inicializa o ponteiro como NULL

    // Solicita ao usuário o tamanho máximo da palavra
    printf("Informe o tamanho máximo da palavra: ");
    scanf("%d", &tamanhoMax);

    // Aloca dinamicamente a memória para a palavra
    palavra = alocarString(tamanhoMax);

    // Solicita ao usuário que insira a palavra
    printf("Digite a palavra: ");
    scanf("%s", palavra); // Lê a palavra digitada

    // Calcula e exibe o comprimento da palavra
    int comprimento = calcularComprimento(palavra);
    printf("O comprimento da palavra '%s' é: %d\n", palavra, comprimento);

    // Libera a memória alocada
    liberarMemoria(palavra);

    return 0;
}

// Função para alocar memória dinamicamente para a palavra
char* alocarString(int tamanho) {
    char *str = (char *) malloc((tamanho + 1) * sizeof(char)); // +1 para o caractere '\0'
    if (str == NULL) {
        printf("Erro ao alocar memória!\n");
        exit(1); // Sai do programa em caso de erro
    }
    return str;
}

// Função para calcular o comprimento da palavra usando ponteiros
int calcularComprimento(char *str) {
    int comprimento = 0;
    while (*str != '\0') { // Percorre a palavra usando ponteiros
        comprimento++;
        str++; // Avança o ponteiro
    }
    return comprimento;
}

// Função para liberar a memória alocada
void liberarMemoria(char *str) {
    free(str);
    printf("Memória liberada com sucesso.\n");
}
