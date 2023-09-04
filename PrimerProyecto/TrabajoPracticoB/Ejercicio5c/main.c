#include <stdio.h>
#include <stdlib.h>

void MostrarElementos(int arreglo[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
}

void incisoA(int arreglo[], int n) {
    srand(time(NULL));
    for(int i = 0; i < n; i++) {
        arreglo[i] = rand();
    }
}

int estaOrdenadoHastaN(int arreglo[], int n) {
    int i=0, estaOrdenado = 1;
    while(i < (n-1) && estaOrdenado) {
        if(arreglo[i] > arreglo [i+1]) {
            estaOrdenado = 0;
        }
        i++;
    }
    return estaOrdenado;
}

void ordenarAscendentemente(int arreglo[], int n) {
    int temp;

    for(int i = 0; i < n -1; i++) {
        for(int j = 0; j < n - i-1; j++) {
            if(arreglo[j] > arreglo[j+1]) {
                temp = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = temp;
            }
        }
    }
}

int main()
{
    int estaOrdenado;
    int n = 10;
    int arreglo [n];
    incisoA(arreglo, n);
    MostrarElementos(arreglo, n);
    estaOrdenado = estaOrdenadoHastaN(arreglo, n);
    if(estaOrdenado) {
        printf("Esta ordenado\n");
    } else {
        printf("Esta desordenado\n");
    }
    ordenarAscendentemente(arreglo, n);
    MostrarElementos(arreglo, n);
    estaOrdenado = estaOrdenadoHastaN(arreglo, n);
    if(estaOrdenado) {
        printf("Esta ordenado\n");
    } else {
        printf("Esta desordenado\n");
    }
    return 0;
}
