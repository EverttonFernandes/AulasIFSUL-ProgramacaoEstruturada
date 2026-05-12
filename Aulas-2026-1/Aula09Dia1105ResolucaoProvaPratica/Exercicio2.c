#include<stdio.h>
#include<string.h>
#include<ctype.h>

int vogaisMinusculasSubstituitasPorAsterico = 0;
int consoantesMaiusculasSubstituidasPorDolar = 0;
int consoantesMinusculasSubstituidasPorArroba = 0;
int quantidadeDeCaracteresEspeciais = 0;

int manipulaStringEContabilizaTrocas(char *texto, int tamanhoDaString);
int ehVogalMinuscula(char caracterAtualDaString);
int ehConsoanteMaiuscula(char caracterAtualDaString);
int ehConsoanteMinuscula(char caracterAtualDaString);
void contabilizaCaracteresEspeciais(char caracterAtualDaString);

int main(){
    int tamanho = 50;
    char texto[tamanho];
    printf("Digite um texto: ");
    fgets(texto, tamanho, stdin);
    printf("Texto original: %s\n", texto);
    
    int quantidadeDeTrocasRealizadasNoTotal = manipulaStringEContabilizaTrocas(texto, strlen(texto));
    
    printf("Texto modificado: %s\n", texto);
    printf("Total de trocas realizadas: %i\n", quantidadeDeTrocasRealizadasNoTotal);
    printf("Total de vogais minusculas substituidas por *: %i\n", vogaisMinusculasSubstituitasPorAsterico);
    printf("Total de consoantes MAIUSCULAS substituidas por $: %i\n", consoantesMaiusculasSubstituidasPorDolar);
    printf("Total de consoantes minusculas substituidas por @: %i\n", consoantesMinusculasSubstituidasPorArroba);
    printf("Total caracteres especiais: %i\n", quantidadeDeCaracteresEspeciais);
}

int manipulaStringEContabilizaTrocas(char *texto, int tamanhoDaString){
    int quantidadeDeTrocasRealizadasNoTotal = 0;
    
    for(int indice = 0; indice < tamanhoDaString - 1; indice++){
        char caracterAtual = *(texto + indice);

        if(isalpha(caracterAtual)){
            // verificar as vogais minusculas
            if (ehVogalMinuscula(caracterAtual)){
               *(texto + indice) = '*';
                vogaisMinusculasSubstituitasPorAsterico++;
                quantidadeDeTrocasRealizadasNoTotal++;
            }

            // veriricar consoantes maiusculas que não sejam vogais
            if(ehConsoanteMaiuscula(caracterAtual)){
                *(texto + indice) = '$';
                consoantesMaiusculasSubstituidasPorDolar++;   
                quantidadeDeTrocasRealizadasNoTotal++;
            }
            
            // verificar letras minusculas que não são vogais (OU MELHOR CONSOANTES MINUSCULAS!)
            if(ehConsoanteMinuscula(caracterAtual)){
                *(texto + indice) = '@';
                consoantesMinusculasSubstituidasPorArroba++;
                quantidadeDeTrocasRealizadasNoTotal++;
            }
            
        } 

        contabilizaCaracteresEspeciais(caracterAtual);
    }

    return quantidadeDeTrocasRealizadasNoTotal;
}

int ehVogalMinuscula(char caracterAtualDaString){
    
    if (caracterAtualDaString == 'a' || caracterAtualDaString == 'e' || caracterAtualDaString == 'i' 
    || caracterAtualDaString == 'o' || caracterAtualDaString == 'u'){
        return 1;
    } else {
        return 0;
    }
    
}

int ehConsoanteMaiuscula(char caracterAtualDaString){
    
    if (isupper(caracterAtualDaString)){
        if (caracterAtualDaString != 'A' && caracterAtualDaString != 'E' && caracterAtualDaString != 'I' 
        && caracterAtualDaString != 'O' && caracterAtualDaString != 'U'){
            return 1;
        } else {
            return 0;
        }
    }
    
}

int ehConsoanteMinuscula(char caracterAtualDaString){
    if (islower(caracterAtualDaString)){
        if (caracterAtualDaString != 'a' && caracterAtualDaString != 'e' && caracterAtualDaString != 'i' 
        && caracterAtualDaString != 'o' && caracterAtualDaString != 'u'){
            return 1;
        } else {
            return 0;
        }
    }
}

void contabilizaCaracteresEspeciais(char caracterAtualDaString){
    if(!isalpha(caracterAtualDaString) && !isdigit(caracterAtualDaString)){
        quantidadeDeCaracteresEspeciais++;
    }
}