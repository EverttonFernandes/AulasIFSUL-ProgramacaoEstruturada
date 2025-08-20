#include <stdio.h>

/*
Função sem Retorno (Mensagem Personalizada)
Cenário: Dado que você tem uma função que deve exibir uma mensagem personalizada com o nome do usuário, 
então a função deve ser chamada a partir da função main e exibir a mensagem "Bem-vindo, [nome]!", 
onde [nome] é o nome digitado pelo usuário.

Exercício:
Escreva uma função sem retorno chamada exibirMensagem que recebe o nome do usuário e o tamanho máximo do vetor como 
parâmetro e imprima a mensagem "Bem-vindo, [nome]!" ou apenas imprima o nome.
A função main deve pedir ao usuário que digite o nome e, em seguida, chamar a função exibirMensagem para mostrar 
a mensagem personalizada na tela.

Dica: A função exibirMensagem não devolve nenhum valor, apenas imprime uma mensagem usando o nome fornecido pelo usuário.
*/
void exibirMensagem(char nome[], int tamanhoMaximo);

int main() {
    char letraInformadaPeloUsuario;
    char nome[20];
    int tamanhoMaximo = 0;

    printf("Olá, informe seu nome: ");

    do {
        letraInformadaPeloUsuario = getchar();
        if (letraInformadaPeloUsuario == '\n') {
            break;
        }
        nome[tamanhoMaximo] = letraInformadaPeloUsuario;
        tamanhoMaximo++;
    } while (tamanhoMaximo < 19);

    exibirMensagem(nome, tamanhoMaximo);

}

void exibirMensagem(char nome[], int tamanhoMaximo) {
    if (tamanhoMaximo > 0) {
        printf("Bem-vindo, ");
        for (int i = 0; i < tamanhoMaximo; i++) {
            printf("%c", nome[i]);
        }
        printf("!\n");
    } else {
        printf("Nome não informado.\n");
    }
}