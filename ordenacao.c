#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "numOps.h"
#include "printArray.h"

/* Função geraArrayAleatorio() define números aleatórios de 0 a 100 para um array específico */
void geraArrayAleatorio(int arrayOriginal[], int n){
    srand(time(NULL));

    for(int i = 0; i < n; i++){
        arrayOriginal[i] = rand() % 100 + 1;
    }
}

/* Função insertionSort(): ordena o array específico aplicando o método de ordenação por inserção */
void insertionSort(int arrayOriginal[], int n){
    int i, j, chave;
    numOperations = 0;

    for(j = 1; j < n; j++){
        chave = arrayOriginal[j];
        i = j - 1;
        numOperations++;
        while((i >= 0) && (arrayOriginal[i] > chave)){
            numOperations += 2;
            arrayOriginal[(i + 1)] = arrayOriginal[i];
            i--;
        }
        arrayOriginal[(i + 1)] = chave;
    }
    printArray(arrayOriginal, "Array Ordenado[]", n);
    showOperations(numOperations);
}

/* Função insertionSortElegant(): ordena o array específico aplicando o método de ordenação por inserção com dois loop for */
void insertionSortElegant(int arrayOriginal[], int n){
    for(int i = 1; i < n; i++){
        numOperations++;
        for(int j = i; j > 0; j--){
            numOperations++;
            if(arrayOriginal[j] < arrayOriginal[(j-1)]){
                numOperations++;
                int key = arrayOriginal[(j-1)];
                arrayOriginal[(j-1)] = arrayOriginal[j];
                arrayOriginal[j] = key;
            }
        }
    }
    printArray(arrayOriginal, "Array Ordenado[]", n);
    showOperations(numOperations);
}