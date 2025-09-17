
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * Exercício 1: Validação de Senha
Escreva um programa que solicite ao usuário uma senha. O programa deve validar a entrada, garantindo que a senha:
Possua entre 6 e 15 caracteres.
Contenha pelo menos um número.
Caso a senha não atenda aos critérios, o programa deve informar o erro e pedir para o usuário tentar novamente.

*/
int validarSenha(char senha[]);

int main() {
    char senha[20]; // vetores do tipo char, chamamos agora de strings

    printf("Digite sua senha: ");
    scanf("%s", senha);

    int senhaValida = validarSenha(senha);
    if (senhaValida == 0) {
        printf("A senha não atende aos critérios, favor tentar novamente!\n");
    } else {
        printf("Senha válida!\n");
    }

    return 0;
}

int validarSenha(char senhaInformada[]) {
    int tamanho = strlen(senhaInformada);
    int temNumero = 0; // funciona como booleano, 0 = false, 1 = true (mas comumente conhecida como flag)

    for (int indice = 0; indice < tamanho; indice++) {
        if (isdigit(senhaInformada[indice])) { // isdigit verifica se o caractere é um dígito (0-9)
            temNumero = 1;
            break;
        }
    }

    if(tamanho < 6 || tamanho > 15 || temNumero == 0){
        return 0;
    }
}
