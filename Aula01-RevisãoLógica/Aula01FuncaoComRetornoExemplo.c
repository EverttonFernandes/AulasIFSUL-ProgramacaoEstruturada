#include<stdio.h>

int somar(int cinco, int dez) {
    return cinco + dez;
}

int main(){
    int cinco = 5;
    int dez = 10;
    int resultado = somar(cinco, dez);
    printf("Resultado: %d\n", resultado);
}
