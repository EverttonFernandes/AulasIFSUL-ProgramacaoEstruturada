#include <stdio.h>

/*
Exercício 6: Manipulação de Ponteiros e valores
Observe o código abaixo. Seu objetivo é debugar "no olho" e prever o que será impresso na tela. Para cada printf, diga qual valor será exibido e explique detalhadamente cada comportamento do programa..
*/

int main() {
    int a = 5;
    int b = 10;
    int *p;

    p = &a;
    printf("Valor de *p: %d\n", *p);

    *p = 20;
    printf("Novo valor de a: %d\n", a);

    p = &b;
    printf("Valor de *p agora: %d\n", *p);

    b = 30;
    printf("Novo valor de *p: %d\n", *p);

    return 0;
}
