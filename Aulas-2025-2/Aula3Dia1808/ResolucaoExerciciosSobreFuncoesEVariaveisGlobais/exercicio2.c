
/*
2) Variável Global e Função com Acúmulo

Cenário: Dado que você tem uma variável global que armazena um saldo bancário, 
e você quer incrementar esse saldo a cada depósito, então a função main deve chamar a função de depósito 
e exibir o novo saldo na tela.

Exercício:
Declare uma variável global chamada saldo.
Escreva uma função chamada depositar que receba um valor de depósito e adicione esse valor ao saldo.
A função main deve pedir ao usuário que insira dois valores de depósito, chamar a função depositar duas vezes, 
e depois exibir o valor atualizado do saldo na tela.

Dica:  Se o saldo inicial for 0 e o usuário fizer dois depósitos de 50 e 30, o saldo final será 80.
*/
#include <stdio.h>

float saldoTotal;
void mostrarNaTelaASolicitacaoDoDeposito();
void solicitarDeposito();
void depositar(float valorDepositado); // prótipo de função (opcional caso queiram usar)
void mostrarNaTelaOSaldoAtual();

int main() {
    mostrarNaTelaASolicitacaoDoDeposito();
    solicitarDeposito();
    
    mostrarNaTelaASolicitacaoDoDeposito();
    solicitarDeposito();

    mostrarNaTelaOSaldoAtual();
}

void mostrarNaTelaASolicitacaoDoDeposito(){
    printf("Informe o valor para deposito em sua conta: \n");
}

void solicitarDeposito(){
    float valorDepositado;
    scanf("%f", &valorDepositado);
    depositar(valorDepositado);
}

void depositar(float valorDepositado){
    saldoTotal += valorDepositado;
}

void mostrarNaTelaOSaldoAtual(){
    printf("Valor total do deposito %.2f", saldoTotal);
}