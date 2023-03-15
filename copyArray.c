#include "copyArray.h"

// Função copyArray(): copia os n elementos de um array para outro
void copyArray(int arrayOriginal[], int array[], int n){
    for(int i = 0; i < n; i++){
        array[i] = arrayOriginal[i];
    }
}