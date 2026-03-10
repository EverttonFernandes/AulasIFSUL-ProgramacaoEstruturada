
/*
3) Variável Global e Função com Acúmulo

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
float saldoBancarioTotal;

void realizaPrimeiroDeposito();
void realizaSegundoDeposito();
void depositar(float depositoBancarioInformadoPeloUsuario);
void mostrarSaldo();

int main() {
    realizaPrimeiroDeposito();
    realizaSegundoDeposito();
    mostrarSaldo();
}

void realizaPrimeiroDeposito(){
    float primeiroDepositoBancarioInformadoPeloUsuario;
    printf("Olá, digite o valor para o seu primeiro deposito bancario: ");
    scanf("%f", &primeiroDepositoBancarioInformadoPeloUsuario);
    depositar(primeiroDepositoBancarioInformadoPeloUsuario);
}

void realizaSegundoDeposito(){
    float segundoDepositoBancarioInformadoPeloUsuario;
    printf("Olá, digite o valor para o seu segundo deposito bancario: ");
    scanf("%f", &segundoDepositoBancarioInformadoPeloUsuario);
    depositar(segundoDepositoBancarioInformadoPeloUsuario);
}

void depositar(float depositoBancarioInformadoPeloUsuario) {
    saldoBancarioTotal += depositoBancarioInformadoPeloUsuario;
}

void mostrarSaldo(){
    printf("Olá seu saldo total e: R$ %.2f \n", saldoBancarioTotal);
}
