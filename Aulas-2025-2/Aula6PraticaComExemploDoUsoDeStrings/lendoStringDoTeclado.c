#include<stdio.h>
#include<string.h>

int main() {
    char nome[50]; // Vetor para armazenar a string
    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin); // Lê a string incluindo espaços
    printf("Olá, %s", nome); // Exibe a string
    return 0;
}