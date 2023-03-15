#include <stdio.h>
#include <stdlib.h>
#include "ordenacao.h"
#include "copyArray.h"
#include "printArray.h"

int main() {
    printf("\tProjeto de Algoritmos para ordenação\n");
    printf("Entre com o tamanho (n) do Array\n");
    printf("> ");
    scanf("%d", &n);

    arrayOriginal = (int*) malloc(n * sizeof(int));
    array = (int*) malloc(n * sizeof(int));

    //Gerando número aleatórios para o Array Original
    geraArrayAleatorio(arrayOriginal, n);
    // Copia o Array Original para o Array
    copyArray(arrayOriginal, array, n);

    //imprimindo o Array Original
    printArray(arrayOriginal, "Array Original[]", n);

    printf("\n\n\tOrdenação por insertionSort()");
    //imprimindo o Array Original
    printArray(arrayOriginal, "Array Original[]", n);
    //Ordenado pelo Método de Insertion Sort
    insertionSort(array, n);


    printf("\n\n\tOrdenação por insertionSortElegant()");
    // Imprimindo o Array Original
    printArray(arrayOriginal, "Array Original[]", n);
    // Copia o Array Original para o Array
    copyArray(arrayOriginal, array, n);
    //Ordenado pelo Método de InsertionSortElegant
    insertionSortElegant(array, n);

    return 0;
}