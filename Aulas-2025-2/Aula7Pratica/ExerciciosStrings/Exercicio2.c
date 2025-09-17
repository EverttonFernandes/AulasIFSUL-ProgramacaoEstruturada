#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
Exercício 2: Contar Ocorrências de uma Letra em uma String
Escreva um programa que peça ao usuário para digitar uma frase e, em seguida, um caractere. O programa deve contar e exibir quantas vezes o caractere informado aparece na frase.
Dicas:
Utilize um laço for para percorrer a string.
Use a função strlen para obter o tamanho da string.
A contagem deve ser insensível a maiúsculas e minúsculas (ex.: contar 'A' e 'a' como iguais).
*/
int contarOcorrencias(char frase[], char letra);

int main() {
    char frase[100];
    char letra;
    int ocorrencias;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    printf("Digite a letra a ser contada: ");
    scanf(" %c", &letra);

    ocorrencias = contarOcorrencias(frase, letra);

    printf("A letra '%c' aparece %d vez(es) na frase informada.\n", letra, ocorrencias);

    return 0;
}

int contarOcorrencias(char frase[], char letraInformada) {
    int contador = 0;

    // tolower converte uma letras maiusculas em minusculas
    char letraInformadaPorParametro = tolower(letraInformada); //Ola MuNdO > ola mundo

    for (int indice = 0; indice < strlen(frase); indice++) {
        char letraEncontradaNoIndice = tolower(frase[indice]);
        if (letraEncontradaNoIndice == letraInformadaPorParametro) {
            contador++;
        }
    }

    return contador;
}