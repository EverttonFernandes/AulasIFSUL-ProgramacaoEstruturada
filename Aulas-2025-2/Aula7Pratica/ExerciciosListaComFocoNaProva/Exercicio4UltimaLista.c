/*
4) Remover Consoantes (no próprio vetor)
Descrição geral
Escreva um programa que peça ao usuário uma string/texto de até 50 caracteres.
Use as funções de string:

fgets (para ler a linha do teclado),

strlen (para obter o tamanho do que foi digitado).

Em seguida, crie a função removerConsoantes que deverá modificar o próprio vetor original para que, ao final, ele contenha apenas as vogais (mantendo a ordem).

Como deve funcionar a função removerConsoantes

Parâmetros: receba o vetor de char e o tamanho efetivo do texto (resultado de strlen, desconsiderando o '\n' se existir).

Ideia: use um segundo ponteiro que escreve no início do mesmo vetor somente os caracteres que NÃO são consoantes.

Ou seja, mantenha: vogais (a,e,i,o,u maiúsculas e minúsculas) e qualquer caractere não alfabético (espaço, dígitos, pontuação).

Remova: consoantes (defina consoante como letra do alfabeto que não é vogal).
Esse ponteiro avança a cada caractere mantido; ao final, ele marca o novo fim do texto.

Finalize a string colocando '\0' na posição correta ao terminar a compactação.

Retorno: devolva a quantidade de consoantes removidas.

Na main, mostre:

o texto digitado (antes da remoção),

o total de consoantes removidas (valor retornado pela função),

o novo texto contendo apenas as vogais (o mesmo vetor, já modificado).

Observações importantes

Ao usar fgets, o '\n' pode vir no final; desconsidere-o ao definir o tamanho a percorrer.

Não crie outro vetor: mova os caracteres que ficam para o próprio vetor.

Imprima o resultado com %s (garanta que o '\0' foi escrito no final correto).

Definições para a lógica:

Vogal: a,e,i,o,u (maiúsculas e minúsculas, sem acento).

Letra: caracteres alfabéticos A..Z ou a..z.

Consoante: letra que não é vogal.

Não alfabéticos (espaços, números, pontuação) devem ser mantidos.

Casos de teste recomendados

Só consoantes → resultado deve ser string vazia.

Sem consoantes (apenas vogais e/ou não alfabéticos) → nada muda.

Misto com espaços e pontuação → apenas consoantes saem; o resto permanece na mesma ordem.

Linha próxima do limite (49 caracteres + terminador) → conferir limites e '\0'.

**/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int removerConsoantes(char * texto, int tamanho);

int main(){
    int tamanhoMaximo = 50;
    char texto[tamanhoMaximo];
    int letraInformada;

    printf("Digite um texto: ");
    fgets(texto, tamanhoMaximo, stdin);

    printf("Texto com consoantes: %s\n", texto);
    int totalDeConsoantesRemovidas = removerConsoantes(texto, strlen(texto));

    printf("Total de consoantes removidas: %d\n", totalDeConsoantesRemovidas);
    
    printf("Texto sem consoantes e apenas com vogais: %s\n", texto);
    return 0;
}

int removerConsoantes(char *ponteiroComOTextoOriginal, int tamanho){
    char *novoPonteiroComApenasVogais = ponteiroComOTextoOriginal;
    int contadorDeConsoantesRemovidas = 0;

    for(int indice = 0; indice < tamanho -1 ; indice++){
        char letraAtual = *(ponteiroComOTextoOriginal + indice);
        if(letraAtual == 'a' || letraAtual == 'e' || letraAtual == 'i' || letraAtual == 'o' || letraAtual == 'u' ||
           letraAtual == 'A' || letraAtual == 'E' || letraAtual == 'I' || letraAtual == 'O' || letraAtual == 'U'){
            *novoPonteiroComApenasVogais = letraAtual;
            novoPonteiroComApenasVogais++;
        } else {
            contadorDeConsoantesRemovidas++;
        }
    }

    *novoPonteiroComApenasVogais = '\0';
    ponteiroComOTextoOriginal = novoPonteiroComApenasVogais;
    return contadorDeConsoantesRemovidas;
}
