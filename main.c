#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Variáveis Globais */
int n; //Tamanho do Array
int *arrayOriginal; //Array gerado automaticamente e sem alteranção

void geraArrayAleatorio(int arrayOriginal[], int n);
void imprimeArray(int arrayOriginal[], int n);
void insertionSort(int arrayOrigina[], int n);

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