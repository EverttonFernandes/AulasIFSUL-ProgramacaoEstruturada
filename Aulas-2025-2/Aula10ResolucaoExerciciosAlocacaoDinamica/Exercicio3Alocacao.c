/*

3) Permitir que o usuário digite uma frase com quantos caracteres desejar (até que a tecla ENTER seja pressionada). Em seguida, o programa deve criar uma nova alocação com realloc com o tamanho exato da frase lida + 1 (para '\0') e fazer um strcpy da frase original para a nova alocação. Por fim, imprimir a frase clonada fazendo printf na nova alocação e depois ao encerrar o programa liberar as duas alocações.

Função sugerida:
char* clonarFrase(char **fraseOriginal, int tamanhoOriginal);

Regras:

Armazenar a frase digitada em alocação dinâmica.

Calcular o comprimento real da frase usando strlen.

Alocar com realloc exatamente comprimento + 1 bytes para cada caracter digitado.

Chamar a função clonarFrase passando a alocação por referência e o tamanho total de caracteres informados.

Imprimir frase original e frase clonada.

Liberar a alocação original e a alocação clonada (sem variáveis globais).

Exemplo de como deve ser o retorno no console:
Entrada: Programação Estruturada!
Saída: Frase clonada: Programação Estruturada!

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* clonarFrase(char **fraseOriginal, int tamanhoOriginal);

int main(){
    char *fraseOriginal = NULL;
    char caractere;
    int tamanhoFrase = 0;

    printf("Digite uma frase (pressione ENTER para finalizar):\n");
    
    while(1){
        caractere = getchar();
        if(caractere == '\n'){
            break;
        }
        fraseOriginal = (char *)realloc(fraseOriginal, (tamanhoFrase + 1) * sizeof(char));
        *(fraseOriginal + tamanhoFrase) = caractere;
        tamanhoFrase++;
    }

    char *fraseClonada = clonarFrase(&fraseOriginal, tamanhoFrase);

    printf("Frase original: %s\n", fraseOriginal);
    printf("Frase clonada: %s\n", fraseClonada);

    free(fraseOriginal);
    free(fraseClonada);

    return 0;
}

char *clonarFrase(char **fraseOriginal, int tamanhoOriginal){
    char *fraseClonada = (char *)malloc((tamanhoOriginal + 1) * sizeof(char));

    strcpy(fraseClonada, *fraseOriginal);

    return fraseClonada;
}