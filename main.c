#include <stdio.h>
#include <stdlib.h>
#include "ordenacao.h"

int main() {
    printf("\tProjeto de Algoritmos para ordenação\n");
    printf("Entre com o tamanho (n) do Array\n");
    printf("> ");
    scanf("%d", &n);

    arrayOriginal = (int*) malloc(n * sizeof(int));

    //Gerando número aleatórios para o Array Original
    geraArrayAleatorio(arrayOriginal, n);

    //imprimindo o Array Original
    printf("Array Original[%d]:", n);
    imprimeArray(arrayOriginal, n);

    //Ordenado pelo Método de Insertion Sort
    insertionSort(arrayOriginal, n);
    printf("\nArray Ordenado[%d]:", n);
    imprimeArray(arrayOriginal, n);

    return 0;
}