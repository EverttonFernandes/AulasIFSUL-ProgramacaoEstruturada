/* 

2) Filtrar consoantes com alocação dinâmica e recursão (60 pontos)
Implemente um programa em C que leia uma frase digitada pelo usuário (até ENTER) e a armazene
em uma alocação dinâmica. Em seguida, gere uma nova string também de forma dinâmica,
contendo apenas as consoantes (vale para as minúsculas e maiúsculas), em uma função recursiva
que deve retornar um ponteiro para a função main. Ao final, imprima a nova string e libere toda
a memória utilizada no programa.
Exemplo do formato de saída​
Entrada: Oi, turma TSI2AN!​
Saída: trmTSN​
​
Pontuação (60 pts)
●​ Lógica recursiva correto + retorno de nova string dinâmica (objetivo principal) – 20 pts​
●​ Construção dinâmica da nova string (alocação adequada das consoantes) – 10 pts​
●​ Leitura dinâmica da frase (crescer com realloc, finalizar com '\0') – 5 pts​
●​ Impressão da nova string e liberação de memória ao final do programa – 5 pts

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *filtrarConsoantesRecursivamente(char **frase, int contadorFrase, char *novaFraseApenasComConsoantes, int tamanhoNovaFrase);
int ehVogal(char letra);

int main(){
    char *frase = NULL;
    char caractere;
    int tamanhoFrase = 0;

    printf("Digite a primeira frase (pressione ENTER para finalizar): \n");
    while(1){
        caractere = getchar();
        if(caractere == '\n'){
            break;
        }
        frase = (char *)realloc(frase, (tamanhoFrase + 1) * sizeof(char));
        *(frase + tamanhoFrase) = caractere;
        tamanhoFrase++;
    }
    frase = (char *)realloc(frase, (tamanhoFrase + 1) * sizeof(char));
    *(frase + tamanhoFrase) = '\0';

    char *fraseFiltrada = filtrarConsoantesRecursivamente(&frase, 0, NULL, 0);

    printf("Frase filtrada (apenas consoantes): %s\n", fraseFiltrada);
    free(frase);
    free(fraseFiltrada);
    return 0;
}

char *filtrarConsoantesRecursivamente(char **frase, int contadorFrase, char *novaFraseApenasComConsoantes, int tamanhoNovaFrase){

    char caracterAtual = *(*frase + contadorFrase);

    if (caracterAtual == '\0') {
        novaFraseApenasComConsoantes = (char *)realloc(novaFraseApenasComConsoantes, (tamanhoNovaFrase + 1) * sizeof(char));
        novaFraseApenasComConsoantes[tamanhoNovaFrase] = '\0';
        return novaFraseApenasComConsoantes;
    }


    if(isalpha(caracterAtual)){
        if(!ehVogal(caracterAtual)){
            novaFraseApenasComConsoantes = (char *)realloc(novaFraseApenasComConsoantes, (tamanhoNovaFrase + 1) * sizeof(char));
            novaFraseApenasComConsoantes[tamanhoNovaFrase] = caracterAtual;
            tamanhoNovaFrase++;
        }
    }

    filtrarConsoantesRecursivamente(frase, contadorFrase + 1, novaFraseApenasComConsoantes, tamanhoNovaFrase);

    return novaFraseApenasComConsoantes;

}

int ehVogal(char letra) {
    return (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
            letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U');
}