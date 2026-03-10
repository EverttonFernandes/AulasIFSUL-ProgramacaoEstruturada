
/*
4) Função com Retorno (Média de Três Números)
Cenário: Dado que você tem uma função que deve calcular a média de três números inteiros, 
então a função main deve chamar essa função e exibir o resultado da média na tela.

Exercício:
Escreva uma função chamada calcularMedia que receba três números inteiros e devolva a média deles.
A função main deve pedir ao usuário que insira três números, passar esses números para a função calcularMedia, 
receber o resultado e exibir a média na tela.

Dica:  A fórmula da média de três números é (n1 + n2 + n3) / 3..

*/
#include <stdio.h>
float obtemAPrimeiraNotaInformadaPeloUsuario();
float obtemASegundaNotaInformadaPeloUsuario();
float obtemATerceiraNotaInformadaPeloUsuario();
float calcularMedia(float primeiraNota, float segundaNota, float terceiraNota);
void mostrarResultadoDaMediaNaTela(float resultadoDaMedia);

int main() {
    float primeiraNota = obtemAPrimeiraNotaInformadaPeloUsuario();
    float segundaNota = obtemASegundaNotaInformadaPeloUsuario();
    float terceiraNota = obtemATerceiraNotaInformadaPeloUsuario();

    float resultadoDaMedia = calcularMedia(primeiraNota, segundaNota, terceiraNota);

    mostrarResultadoDaMediaNaTela(resultadoDaMedia);
}

float obtemAPrimeiraNotaInformadaPeloUsuario(){
    float primeiraNota;
    printf("Informe a primeira nota: ");
    scanf("%f", &primeiraNota);
    return primeiraNota; 
}

float obtemASegundaNotaInformadaPeloUsuario(){
    float segundaNota;
    printf("Informe a segunda nota: ");
    scanf("%f", &segundaNota);
    return segundaNota; 
}

float obtemATerceiraNotaInformadaPeloUsuario(){
    float terceiraNota;
    printf("Informe a terceira nota: ");
    scanf("%f", &terceiraNota);
    return terceiraNota; 
}

float calcularMedia(float primeiraNota, float segundaNota, float terceiraNota) {
    return (primeiraNota + segundaNota + terceiraNota) / 3;
}

void mostrarResultadoDaMediaNaTela(float resultadoDaMedia){
    printf("O resultado da media com base nas 3 notas informadas eh: %.2f \n", resultadoDaMedia);
}