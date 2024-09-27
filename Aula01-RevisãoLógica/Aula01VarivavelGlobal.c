int contador = 0;  // Variável global

void incrementar() {
    contador++; // é manipulada na função incrementar
}

int main() {
    incrementar();
    printf("Contador: %d\n", contador);  // Exibe o valor na função main
    return 0;
}
