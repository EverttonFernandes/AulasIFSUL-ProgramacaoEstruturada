#include<stdio.h>

void substituirVogalPorArroba(char *palavra, int tamanho);

int main(){
    char palavra[50];
    int tamanho = 0;
    char letraDigitada;

    printf("Digite uma palavra: ");

    do{
        letraDigitada = getchar();
        if (letraDigitada == '\n') {
            break;
        }
        palavra[tamanho] = letraDigitada;
        tamanho++;        
    }while (tamanho < 49);
    
    substituirVogalPorArroba(palavra, tamanho);

    printf("Palavra modificada:\n");
    for (int indiceDoVetor = 0; indiceDoVetor < tamanho; indiceDoVetor++) {
        printf("%c", palavra[indiceDoVetor]);
    }
    printf("\n");

    return 0;
}

void substituirVogalPorArroba(char *palavra, int tamanho){
    for (int indice = 0; indice < tamanho; indice++) {
        char caracter = *(palavra + indice); // aqui estamos apontando o ponteiro para obter o caractere em cada posição do vetor
        
        if (caracter == 'a'|| caracter == 'e'|| caracter == 'i'|| caracter == 'o'|| caracter == 'u'|| caracter == 'A'|| caracter == 'E'|| caracter == 'I'|| caracter == 'O'|| caracter == 'U') {
            *(palavra + indice) = '@';
        }
    }   
}