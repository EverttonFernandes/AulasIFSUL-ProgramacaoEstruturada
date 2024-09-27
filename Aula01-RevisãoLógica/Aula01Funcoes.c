#include <stdio.h>

void somar(int a, int b) {
    int resultado = 0;
    resultado = a + b;  // Altera a variável global
    printf("Resultado da soma: %d\n", resultado);
}

int main() {
    int num1 = 5, num2 = 10;  // Variáveis locais da função main
    somar(num1, num2);  // Chama a função responsável por somar os dois números
    // printf("Resultado da soma: %d\n", resultado);
	return 0;
}
