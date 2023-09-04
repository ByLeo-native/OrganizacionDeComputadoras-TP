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
    int n = 10;
    int arreglo [n];
    incisoA(arreglo, n);
    MostrarElementos(arreglo, n);
    ordenarAscendentemente(arreglo, n);
    MostrarElementos(arreglo, n);
    return 0;
}
