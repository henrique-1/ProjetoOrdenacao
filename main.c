#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Variáveis Globais */
int n; //Tamanho do Array
int *arrayOriginal; //Array gerado automaticamente e sem alteranção

void geraArrayAleatorio(int arrayOriginal[], int n);

int main() {
    printf("\tProjeto de Algoritmos para ordenação\n");
    printf("Entre com o tamanho (n) do Array\n");
    printf("> ");
    scanf("%d", &n);

    arrayOriginal = (int*) malloc(n * sizeof(int));

    //Gerando número aleatórios para o Array Original
    geraArrayAleatorio(arrayOriginal, n);
    return 0;
}
/* Função geraArrayAleatorio() define números aleatórios de 0 a 100 para um array específico */
void geraArrayAleatorio(int arrayOriginal[], int n){
    srand(time(NULL));

    for(int i = 0; i < n; i++){
        arrayOriginal[i] = rand() % 100 + 1;
    }
}