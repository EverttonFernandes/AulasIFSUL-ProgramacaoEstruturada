/*

1) String: remover vogais (retorna nova string)
Objetivo:
Ler frase até ENTER. Função retorna nova string sem vogais (A/E/I/O/U, maiúsc/minúsc). realloc a cada caracter informado. Imprimir original e filtrada; liberar ambas.

Função sugerida:
char* removerVogais(char **frase, int tamanho);

Regras:

Armazenar frase dinamicamente (terminada em '\0').

Nova string também deve terminar em '\0'.

free(frase) e free(ret) ao final.

Exemplo:
Entrada: Programação em C → Saída: Prgrmç m C

Dicas:

Considere apenas vogais sem acento para simplificar.

Lembre de copiar também espaços e pontuação .

Converta letra para uma versão comparável (tolower) antes de testar.

Ao chamar a função use um contador ao qual será passado por referencia.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* removerVogais(char **frase, int tamanho);

int main(){
    char *fraseInformada = NULL;
    int tamanho = 0;
    char caractere;

    printf("Digite uma frase (pressione ENTER para finalizar):\n");
    
    while(1){
        caractere = getchar();
        if(caractere == '\n'){
            break;
        }
        fraseInformada = (char *)realloc(fraseInformada, (tamanho + 1) * sizeof(char));
        *(fraseInformada + tamanho) = caractere;
        tamanho++;
    }

    // Adicionando o terminador de string
    fraseInformada = (char *)realloc(fraseInformada, (tamanho + 1) * sizeof(char));
    *(fraseInformada + tamanho) = '\0';

    char *novaFraseSemVogais = removerVogais(&fraseInformada, tamanho);
    
    printf("Frase original: %s\n", fraseInformada);
    printf("Frase sem vogais: %s\n", novaFraseSemVogais);

    free(fraseInformada);
    free(novaFraseSemVogais);
    
    return 0;
}

char* removerVogais(char **frase, int tamanho){
    char *fraseSemVogais = NULL;
    int tamanhoFraseSemVogais = 0;

    for(int i = 0; i < tamanho; i++){
        char caractereAtual = *(*frase + i);
        char caractereMinusculo = tolower(caractereAtual);

        if(caractereMinusculo != 'a' && caractereMinusculo != 'e' && caractereMinusculo != 'i' && caractereMinusculo != 'o' && caractereMinusculo != 'u'){
            fraseSemVogais = (char *)realloc(fraseSemVogais, (tamanhoFraseSemVogais + 1) * sizeof(char));
            *(fraseSemVogais + tamanhoFraseSemVogais) = caractereAtual;
            tamanhoFraseSemVogais++;
        }
    }

    // Adicionando o terminador de string
    fraseSemVogais = (char *)realloc(fraseSemVogais, (tamanhoFraseSemVogais + 1) * sizeof(char));
    *(fraseSemVogais + tamanhoFraseSemVogais) = '\0';
    return fraseSemVogais;
}