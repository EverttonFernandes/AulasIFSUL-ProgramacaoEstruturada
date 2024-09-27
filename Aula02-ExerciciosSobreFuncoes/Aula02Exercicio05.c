
/*
5)   Função com Retorno e Função sem Retorno (Conferir Maioridade)
Cenário: Dado que você tem uma função que deve verificar se a idade inserida indica maioridade (18 anos ou mais), 
então a função main deve chamar essa função, e, se a pessoa for maior de idade, exibir uma mensagem personalizada de boas-vindas.

Exercício:
Escreva uma função chamada verificarMaioridade que receba a idade e devolva 1 se a pessoa for maior de idade (18 ou mais) e 0 caso contrário.
Escreva uma função sem retorno chamada exibirBoasVindasMaiorIdade que imprima a mensagem "Bem-vindo, você é maior de idade!".
A função main deve pedir ao usuário que insira a idade, chamar verificarMaioridade, e se a pessoa for maior de idade, 
chamar exibirBoasVindasMaiorIdade.

Dica:  Exemplo: Se o usuário digitar 20, o programa deve exibir "Bem-vindo, você é maior de idade!"
*/
#include <stdio.h>
int obtemIdadeDoUsuario();
int verificarMaiorIdade(int idadeDoUsuario);
void exibirBoasVindasMaiorIdade(int eMaiorOuMenorDeIdade);

int main() {
    exibirBoasVindasMaiorIdade(verificarMaiorIdade(obtemIdadeDoUsuario()));
}

int obtemIdadeDoUsuario() {
    int idadeDoUsuario;
    printf("Informe a sua idade: ");
    scanf("%i", &idadeDoUsuario);
    return idadeDoUsuario;
}

int verificarMaiorIdade(int idadeDoUsuario) {
    return idadeDoUsuario >= 18 ? 1 : 0;
}

void exibirBoasVindasMaiorIdade(int eMaiorOuMenorDeIdade) {
    if(eMaiorOuMenorDeIdade){
        printf("Bem vindo, você e maior de idade! \n");
    } else {
        printf("Entrada proibida para menores de 18 anos! \n");
    }
    
}
