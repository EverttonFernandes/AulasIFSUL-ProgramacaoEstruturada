#include<stdio.h>
#include<string.h>

/*
strcasecmp é usado quando queremos comparar strings independentemente de maiúsculas ou minúsculas.
*/
int main(){
    // Exemplo: Comparação insensível a maiúsculas/minúsculas
    if (strcasecmp("casaaaaaa", "CASA") == 0) { 
        printf("Exemplo 4: Strings iguais (ignorando maiúsculas/minúsculas).\n");
    }

    return 0;
}
