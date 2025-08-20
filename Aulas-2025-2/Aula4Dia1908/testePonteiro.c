#include <stdio.h>

int main() {
    int valor = 5;
    int *p = &valor;   // Ponteiro 'p' recebe o endereço de 'valor'
    
    // Mostrando endereços e valores antes da alteração
    printf("Endereco da variavel 'valor' : %p\n", &valor);
    printf("Endereco armazenado no ponteiro 'p' : %p\n", p);
    printf("Valor de 'valor' (direto) : %d\n", valor);
    printf("Valor acessado por 'p' : %d\n", *p);
    printf("###########################################\n");
    // Alterando valor via ponteiro
    *p = 10;
    
    // Mostrando endereços e valores depois da alteração
    printf("\n--- Depois da alteracao via ponteiro ---\n");
    printf("Endereco da variavel 'valor': %p\n", &valor);
    printf("Endereco armazenado no ponteiro 'p' : %p\n", p);
    printf("Novo valor de 'valor' : %d\n", valor);
    printf("Novo valor acessado pelo ponteiro 'p' : %d\n", *p);
    printf("###########################################\n");
    
    valor = 20; // Alterando o valor diretamente
    printf("\n--- Depois de alterar 'valor' diretamente ---\n");
    printf("Endereco da variavel 'valor': %p\n", &valor);
    printf("Endereco armazenado no ponteiro 'p' : %p\n", p);
    printf("Valor de 'valor' (direto) : %d\n", valor);
    printf("Valor acessado pelo ponteiro 'p' : %d\n", *p);
    printf("###########################################\n");
    return 0;
}