#include<stdio.h>
#include<string.h>
#include<ctype.h>

int contadorDeCaracteresNumericos = 0;
int contadorDeCaracteresEspeciais = 0;
int contadorDeCaracteresMaiusculos = 0;
int contadorDeCaracteresMinusculos = 0;

int converterCaracteres(char *texto, int tamanhoDaString);

int main(){
    int tamanhoMaximo = 100;
    char texto[tamanhoMaximo];

    printf("Olá, digite um texto \n");
    fgets(texto, tamanhoMaximo, stdin);

    printf("Texto original informado: %s", texto);

    int quantidadeDeNumerosConvertidos = converterCaracteres(texto, strlen(texto));

    printf("O total de substituicoes realizadas no programa foram: %d \n", quantidadeDeNumerosConvertidos);
    printf("O total de caracteres MAIUSCULOS FOI: %d \n", contadorDeCaracteresMaiusculos);
    printf("O total de caracteres minusculos FOI: %d \n", contadorDeCaracteresMinusculos);
    printf("O total de caracteres especiais FOI: %d \n", contadorDeCaracteresEspeciais);
    printf("O total de caracteres numericos FOI: %d \n", contadorDeCaracteresNumericos);

    printf("O texto com as devidas conversoes ficou assim: %s", texto);
}

int converterCaracteres(char *texto, int tamanhoDaString){
    int contadorDeSubstituicoes = 0;

    for (int i = 0; i < tamanhoDaString - 1; i++){ // -1 PARA QUE NÃO SEJA NECESSÁRIO VALIDAR O \0
        char letraAtual = *(texto + i);

        if (isdigit(letraAtual)){
            *(texto + i) = '#';
            contadorDeCaracteresNumericos++;
            contadorDeSubstituicoes++;
        }
        
        if (isalpha(letraAtual)){
            if (isupper(letraAtual)){
                *(texto + i) = '@';
                contadorDeCaracteresMaiusculos++;
                contadorDeSubstituicoes++;
            } else {
                contadorDeCaracteresMinusculos++;
            }
        }
        
        if (!isdigit(letraAtual) && !isalpha(letraAtual)){
            contadorDeCaracteresEspeciais++;            
        }
        
    }

    return contadorDeSubstituicoes;
    
}
