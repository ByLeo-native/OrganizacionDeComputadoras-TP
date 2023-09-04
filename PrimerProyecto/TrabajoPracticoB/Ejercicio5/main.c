#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

int main()
{
    int n = 25;
    int arreglo [n];
    incisoA(arreglo, n);
    MostrarElementos(arreglo, n);
    return 0;
}
