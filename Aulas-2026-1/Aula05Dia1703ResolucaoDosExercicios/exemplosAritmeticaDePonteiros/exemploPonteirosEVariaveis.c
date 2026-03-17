#include<stdio.h>

int main(){
    int numero = 10;
    int *p = &numero; // Ponteiro p recebe o endereço de numero

    printf("Valor de numero: %d\n", numero); // Imprime o valor de numero
    printf("Valor apontado por p: %d\n", *p); // Imprime o valor armazenado no endereço apontado por p (que é o valor de numero)
    printf("Endereço de numero: %p\n", &numero); // Imprime o endereço de numero
    printf("Valor de p (endereço armazenado): %p\n", p); // Imprime o valor armazenado em p, que é o endereço de numero

    numero = 20; // Modifica o valor de numero
    printf("NOVO VALOR ATRIBUIDO PARA A VARIAVEL NUMERO: %d\n", numero);
    printf("MOSTRANDO O VALOR DO PONTEIRO: %d\n", *p);
    
    numero = 30; // Modifica o valor de numero novamente
    printf("MOSTRANDO O VALOR DO PONTEIRO: %d\n", *p);

    *p = 50;
    printf("Mostrando valor da variavel numero: %d \n", numero);
    
    int numero2 = 100;
    p = &numero2;

    printf("Mostrando o novo valor do PONTEIRO que agora aponta para o endereco da variavel numero2: %d\n ", *p);
    printf("Endereço de numero: %p\n", &numero);
    printf("Endereço de numero: %p\n", &numero2);
    printf("Valor de p (endereço armazenado): %p\n", p);
    
    int numero3 = 200;
    *p = numero3;
    
    printf("Valor da variavel numero2: %d\n", numero2);
    printf("Valor da variavel: numero3: %d\n", numero3);
    printf("Valor do ponteiro: %d\n", *p);
    
    return 0;
}