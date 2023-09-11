#include <stdio.h>
#include <stdlib.h>

void mostrar_elems_arreglo(int arr [], int size) {
    for(int i = 0; i < size; i++) {
        printf("%i\t", arr[i]);
    }
    printf("\n");
}

void mostrar_elems_apuntados_por_arreglo_de_punteros(int ** arr, int size) {
    for(int i = 0; i < size; i++) {
        printf("%i\t", **(arr+i));
    }
    printf("\n");
}

void invertir_arr_num(int arr [], int size){
    int f = 0, c = size-1;
    int aux;
    while(f < c){
        aux = arr[f];
        arr[f++] = arr[c];
        arr[c--] = aux;
    }
}
void invertir_arr_punt(int ** arr, int size){
    int ** cola = arr + size - 1;
    int * aux;
    while(arr != cola){
        aux = *arr;
        *arr = *cola;
        *cola = aux;
        if ((++arr)!=cola)
            cola--;
    }
}

int main()
{
    int longitud = 3;
    int arr_num [longitud];
    int * arr_punt [longitud];
    // INICIALIZACI´ON
    int i = 0;
    for(i=0; i<longitud; i++){
        arr_num[i] = i+1;
        arr_punt[i] = &arr_num[i];
    }
    mostrar_elems_arreglo(arr_num, longitud);
    // INSTRUCCI´ON 1
    invertir_arr_num(arr_num, longitud);
    mostrar_elems_arreglo(arr_num, longitud);
    // INSTRUCCI´ON 2
    printf("Antes de invertir el arreglo de punteros\n");
    mostrar_elems_apuntados_por_arreglo_de_punteros(arr_punt, longitud);
    invertir_arr_punt(arr_punt, longitud);
    printf("Despues de invertir el arreglo de punteros\n");
    mostrar_elems_apuntados_por_arreglo_de_punteros(arr_punt, longitud);
    return 0;
}
