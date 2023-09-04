#include <stdio.h>
#include <stdlib.h>

void MostrarElementos(int arreglo[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
}

void reemplazar(int arr [], int a, int n) {
    /*
        tamano total = sizeof(arr) = cantidad de bits de todo el arreglo (sumatoria de bits de cada elemento reservado en memoria)
        tamano elemento = sizeof(arr[0]) = cantidad de bits de uno de los elementos del arreglo.
    */
    printf("sizeof(arr): %i\n", sizeof(arr));
    printf("sizeof(arr[0]): %i\n", sizeof(arr[0]));
    int size = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < size ; i++) {
        if(arr[i] == a) {
            arr[i] = n;
        }
    }
}

void reemplazar1(int * arr, int a, int n, int size) {
    for(int i = 0; i < size; i++) {
        if(*arr == a) {
            *arr = n;
        }
        arr++;
    }
}

int main()
{
    int opcion;
    int n = 5;
    int arregloInicializado [] = {1,2,3,4,5};
    printf("Elije una opcion:\n");
    printf("1-Primer metodo: void reemplazar(int arr [], int a, int n)\n");
    printf("2-Segundo metodo: void reemplazar(int * arr, int a, int n, int size)\n");
    scanf("%i", &opcion);
    switch(opcion) {
    case 1:
        reemplazar(arregloInicializado, 3, 0);
        break;
    case 2:
        reemplazar1(&arregloInicializado, 3, 0, n);
        break;
    default:
        printf("Se ingreso una opcion invalida");
        return 1;
    }
    MostrarElementos(arregloInicializado, n);
    return 0;
}
