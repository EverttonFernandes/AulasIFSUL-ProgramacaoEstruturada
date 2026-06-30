/*

Filtrar apenas caracteres especiais com alocação dinâmica e recursão
Implemente um programa em C que leia uma frase digitada pelo usuário (até ENTER) e a armazene
em uma alocação dinâmica. Em seguida, gere uma nova string também de forma dinâmica,
contendo caracteres especiais, em uma função recursiva
que deve retornar um ponteiro para a função main. Ao final, imprima a nova string e libere toda
a memória utilizada no programa.
Exemplo do formato de saída
Entrada: Oi, turma TSI2AN!
Saída: ,!

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int tamanhoNovaFrase = 0;
char *filtrarCaracteresEspeciaisRecursivamente(char **frase, int indiceFrase, char *novaFraseApenasComCaracteresEspeciais);

int main(){
    char *frase = NULL;
    char caractereInformado;
    int tamanhoFrase = 0;

    printf("Digite a primeira frase (pressione ENTER para finalizar): \n");

    while(1){
        caractereInformado = getchar();
        if(caractereInformado == '\n'){
            break;
        }
        frase = (char *)realloc(frase, (tamanhoFrase + 1) * sizeof(char));
        *(frase + tamanhoFrase) = caractereInformado;
        tamanhoFrase++;
    }

    frase = (char *)realloc(frase, (tamanhoFrase + 1) * sizeof(char));
    *(frase + tamanhoFrase) = '\0';

    char *novaFraseApenasComCaracteresEspeciais = filtrarCaracteresEspeciaisRecursivamente(&frase, 0, NULL);

    printf("Frase apenas com caracteres especiais: %s\n", novaFraseApenasComCaracteresEspeciais);
    printf("Tamanho da nova frase: %d\n", tamanhoNovaFrase);
    free(frase);
    free(novaFraseApenasComCaracteresEspeciais);
    return 0;

}

char *filtrarCaracteresEspeciaisRecursivamente(char **frase, int indiceFrase, char *novaFraseApenasComCaracteresEspeciais) {
    char caractereAtual = *(*frase + indiceFrase);

    if (caractereAtual == '\0') {
        novaFraseApenasComCaracteresEspeciais = (char *)realloc(novaFraseApenasComCaracteresEspeciais, (tamanhoNovaFrase + 1) * sizeof(char));
        *(novaFraseApenasComCaracteresEspeciais + tamanhoNovaFrase) = '\0';
        return novaFraseApenasComCaracteresEspeciais;
    }

    if(ispunct(caractereAtual)) {
        novaFraseApenasComCaracteresEspeciais = (char *)realloc(novaFraseApenasComCaracteresEspeciais, (tamanhoNovaFrase + 1) * sizeof(char));
        *(novaFraseApenasComCaracteresEspeciais + tamanhoNovaFrase) = caractereAtual;
        tamanhoNovaFrase++;
    }

    return filtrarCaracteresEspeciaisRecursivamente(frase, indiceFrase + 1, novaFraseApenasComCaracteresEspeciais);
}