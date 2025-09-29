/* 

5) Remover Não Alfabéticos (ficar só com letras)
Objetivo: Remover tudo que não for letra (use isalpha) e manter somente caracteres de A..Z/a..z.
Função sugerida: int manterApenasLetras(char *texto, int n);

Regras: isalpha para decidir; não criar outro vetor; '\0' ao final.

Retorno: quantidade de caracteres removidos.
Exemplo: "C99! é top?!" → "Cétop" (se ignorar acentos, considere “é” conforme seu ambiente; 
pode orientar a manter apenas isalpha que retorna true para letras acentuadas dependendo do locale).

*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int removerNaoAlfabeticos(char * texto, int tamanho);

int main(){
    int tamanhoMaximo = 50;
    char texto[tamanhoMaximo];
    int letraInformada;

    printf("Digite um texto: ");
    fgets(texto, tamanhoMaximo, stdin);

    printf("Texto original: %s\n", texto);
    int totalDeCaracteresRemovidos = removerNaoAlfabeticos(texto, strlen(texto));

    printf("Total de caracteres nao alfabeticos removidos: %d\n", totalDeCaracteresRemovidos);
    
    printf("Texto contendo apenas caracteres alfabeticos: %s\n", texto);
    return 0;
}

int removerNaoAlfabeticos(char *ponteiroComOTextoOriginal, int tamanho){
    char *novoPonteiroComApenasCaracteresAlfabeticos = ponteiroComOTextoOriginal;
    int contadorDeCaracteresRemovidos = 0;

    for(int indice = 0; indice < tamanho -1 ; indice++){
        char caractereAtual = *(ponteiroComOTextoOriginal + indice);
        if(isalpha(caractereAtual)){
            *novoPonteiroComApenasCaracteresAlfabeticos = caractereAtual;
            novoPonteiroComApenasCaracteresAlfabeticos++;
        } else {
            contadorDeCaracteresRemovidos++;
        }
    }

    *novoPonteiroComApenasCaracteresAlfabeticos = '\0';
    ponteiroComOTextoOriginal = novoPonteiroComApenasCaracteresAlfabeticos;
    return contadorDeCaracteresRemovidos;
}
