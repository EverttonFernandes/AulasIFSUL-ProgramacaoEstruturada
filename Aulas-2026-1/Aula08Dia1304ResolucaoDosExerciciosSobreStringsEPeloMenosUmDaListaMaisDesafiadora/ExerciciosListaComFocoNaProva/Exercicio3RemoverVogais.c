#include<stdio.h>
#include<string.h>

int removerVogais(char * texto, int tamanho);
int ehVogal(char letra);

int main(){
    int tamanhoMaximo = 50;
    char texto[tamanhoMaximo];
    int letraInformada;

    printf("Digite um texto: ");
    fgets(texto, tamanhoMaximo, stdin); // lê uma linha de texto do stdin (que signigica ler do teclado) e armazena o que foi digitado no vetor texto

    printf("Texto com vogais: %s\n", texto);
    int totalDeVogaisRemovidas = removerVogais(texto, strlen(texto));

    printf("Total de vogais removidas: %d\n", totalDeVogaisRemovidas);
    
    printf("Texto sem vogais: %s\n", texto);
    return 0;
}

int removerVogais(char *ponteiroComOTextoOriginal, int tamanho){
    char *novoPonteiroComApenasConsoantes = ponteiroComOTextoOriginal; // cria um novo ponteiro que acaba tendo o mesmo endereço do ponteiro original
    int contadorDeVogaisRemovidas = 0;

    for(int indice = 0; indice < tamanho -1 ; indice++){ // percorre o texto original caractere por caractere, até o tamanho -1 para não considerar o /0 que indica o fim da string
        char letraAtual = *(ponteiroComOTextoOriginal + indice);
        
        if(!ehVogal(letraAtual)){ // se a letra atual não for vogal, ou seja, for consoante, copia a letra para a nova posição do novo ponteiro
            *novoPonteiroComApenasConsoantes = letraAtual; // se for consoante copia a letra para a nova posição 0, 1, 2 e assim por diante conforme avanço do ponteiro
            novoPonteiroComApenasConsoantes++; // avança o novo ponteiro para a próxima posição, deixando ele livre para receber a próxima consoante
        } else {
            contadorDeVogaisRemovidas++; // se for vogal apenas incrementa o contador de vogais removidas e não faz nada com o novo ponteiro, ou seja ele não avança e permanece na mesma posição aguardando a próxima consoante
        }
    }

    *novoPonteiroComApenasConsoantes = '\0'; // termina a nova string e coloca o /0 no final dela para dizer que é o fim da string
    return contadorDeVogaisRemovidas;
}

int ehVogal(char letra){
    if( letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
        return 1; // retorna 1 se for vogal, ou seja, verdadeiro
    }
    return 0; // retorna 0 se não for vogal, ou seja, falso
}