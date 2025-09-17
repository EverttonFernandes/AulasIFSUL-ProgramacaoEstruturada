#include<stdio.h>
#include<string.h>

/*
strchr é usado quando queremos encontrar a primeira ocorrencia de um caracter em uma string.
*/
int main(){
    char *resultado = strchr("programação", 'a');
    if (resultado) {
        printf("Caractere encontrado: %c\n", *resultado);
    }
    return 0;
}
