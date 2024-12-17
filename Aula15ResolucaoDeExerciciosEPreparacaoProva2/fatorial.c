#include<stdio.h>

#include<stdio.h>

/// Escrever uma função recursiva que calcule o fatorial.

int fatorial(int n);

main(){
    int n;
    printf("Digite um numero para descobrirmos o fatorial do mesmo: \n");
    scanf("%i",&n);

    int resultado = fatorial(n);
    printf("O resultado eh: %i\n",resultado); // mostra na tela o fatorial de um número
}

int fatorial(int n){
    if(n==0){
        return 1;///Se o usuário digitar 0 retorna 1 ao main senão calcula o fatorial
    }
    else{
        return n*fatorial(n-1);
        // vai diminuindo até chegar no caso base, depois de empilhar os números vai multiplicando
        // 0 x 1, depois 1 x 1, depois 2 x 1, depois 2 x 3 e assim por diante até chegar no numero informado
    }
}