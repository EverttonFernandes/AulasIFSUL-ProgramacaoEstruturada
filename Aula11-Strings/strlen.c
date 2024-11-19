#include<stdio.h>
#include<string.h>

/*
strlen é usado quando queremos descobrir o tamanho de uma palavra, frase, nome e etc..., 
ou seja quando queremos descobrir a quantidade total de caracteres em uma string!
SINTAXE: strlen(texto) -> só devemos enviar por parametro a string que a função strlen retorna um valor número que seria o total de carateres
*/
int main(){
    char texto[] = "Programacao";
    int tamanho = strlen(texto);
    printf("Comprimento: %i\n", tamanho);
    return 0;
}
