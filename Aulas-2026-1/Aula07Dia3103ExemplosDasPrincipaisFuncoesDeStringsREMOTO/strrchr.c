#include<stdio.h>
#include<string.h>

/*
strrchr é usado quando queremos encontrar a ultima ocorrencia de um caracter em uma string.
*/
int main(){
    char *resultado = strrchr("programação", 'a');
    if (resultado) {
        printf("Caractere encontrado: %c\n", *resultado);
    }
    return 0;
}
