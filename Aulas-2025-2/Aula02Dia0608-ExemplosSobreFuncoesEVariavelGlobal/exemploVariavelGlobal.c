#include<stdio.h>

void funcaoContar();
int contador = 0;

int main (){
    contador++;
    printf("Resultado do contador: %i \n", contador);
    funcaoContar();
    printf("Resultado do contador: %i \n", contador);
}

void funcaoContar(){
    contador++;
}