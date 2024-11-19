#include<stdio.h>
#include<string.h>

/*
strcpy é usado quando queremos copiar o conteúdo de uma string para outra string!
*/
int main(){
    char origem[] = "Ola mundo";
    char destino[10];
    strcpy(destino, origem); // na esquerda é sempre a string destino e na direito a string de origem
    printf("Destino: %s\n", destino); // Saída: "Ola mundo"
}
