#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Função geraArrayAleatorio() define números aleatórios de 0 a 100 para um array específico */
void geraArrayAleatorio(int arrayOriginal[], int n){
    srand(time(NULL));

    for(int i = 0; i < n; i++){
        arrayOriginal[i] = rand() % 100 + 1;
    }
}

/* Função imprimeArray(): imprime os n elementos de um array específico */
void imprimeArray(int arrayOriginal[], int n){
    for(int i = 0; i < n; i++){
        printf(" %d", arrayOriginal[i]);
    }
}

/* Função insertionSort(): ordena o array específico aplicando o método de ordenação por inserção */
void insertionSort(int arrayOriginal[], int n){
    int i, j, chave;

    for(j = 1; j < n; j++){
        chave = arrayOriginal[j];
        i = j - 1;
        while((i >= 0) && (arrayOriginal[i] > chave)){
            arrayOriginal[(i + 1)] = arrayOriginal[i];
            i--;
        }
        arrayOriginal[(i + 1)] = chave;
    }
}