#include<stdio.h>
#include<string.h>

/*
strcat é usado quando queremos concatenar duas strings, ou seja juntar o conteúdo de ambas para formar uma frase por exemplo!
*/
int main(){
    char saudacao[20] = "Olá, ";
    strcat(saudacao, "mundo!");
    printf("%s\n", saudacao);
}
