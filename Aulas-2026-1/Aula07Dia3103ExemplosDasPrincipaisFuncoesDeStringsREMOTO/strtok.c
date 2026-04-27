#include<stdio.h>
#include<string.h>

/*
O que faz: Divide uma string em "tokens" com base em delimitadores.
Quando usar: Quando quiser separar uma string em partes menores, como palavras em uma frase.
*/

int main() {
    char str[] = "Olá, mundo, programação!";
    char *token = strtok(str, ", "); // retorna um ponteiro para a primeira posição da string!
    while (token != NULL) { // enquanto não chegar no final da string!
        printf("%s\n", token); // vai mostrando as palavras separadamente com o uso dos delimitadores usados na linha 11!
        token = strtok(NULL, ", "); 
        // Continua a divisão da string, começando de onde parou na última chamada. 
        // O argumento NULL diz para a função strtok "continue da última posição processada".
        // Retorna um ponteiro para o próximo token encontrado ou NULL se não houver mais tokens.
    }
    return 0;
}