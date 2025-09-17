#include <stdio.h>

int main(){
    int x = 10;
    int *p = &x;

    printf("Endereço de x: %p\n", &x);
    printf("O endereço do p (no caso o mesmo endereço de x): %p\n", p);
    printf("Valor armazenado em p (acessando diretamente dentro do endereco de x): %d\n", *p);
    printf("Valor de x (direto): %d\n", x);
    printf("Valor de x acessado via ponteiro: %d\n", *p);

    return 0;
}
