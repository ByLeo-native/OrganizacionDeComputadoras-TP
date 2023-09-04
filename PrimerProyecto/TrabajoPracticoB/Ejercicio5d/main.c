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

void mezclaDeArreglos(int arreglo1[], int n, int arreglo2[], int m, int arreglo[]) {
    int *pArreglo = arreglo;
    int *p1 = arreglo1;
    int *p2 = arreglo2;
    int *p1Inicial = p1; //Posicion inicial para saber desde que parte de la memoria comenzo el primer arreglo
    int *p2Inicial = p2; //Posicion inicial para saber desde que parte de la memoria comenzo el segundo arreglo
    int seTerminoUnArreglo = 0;
    while( !seTerminoUnArreglo ) {
        if( *p1 < *p2) {
            *pArreglo = *p1;
            p1++;
        } else if( *p1 > *p2 ) {
            *pArreglo = *p2;
            p2++;
        } else {
            //Cuando son iguales, agrege de uno y avanzo los dos punteros
            *pArreglo = *p1;
            p1++;
            p2++;
        }

        pArreglo++;
        //Si se termino el primer arreglo
        if( (p1 - p1Inicial) == n) {
            seTerminoUnArreglo = 1;
            //Agregar lo que reste del segundo arreglo
            while((p2- p2Inicial) != m) {
                *pArreglo = *p2;
                pArreglo++;
                p2++;
            }
        }
        //Si se termino el segundo arreglo
        if( (p2- p2Inicial) == m) {
            seTerminoUnArreglo = 1;
            //Agregar lo que reste del primer arreglo
            while((p1- p1Inicial) != n) {
                *pArreglo = *p1;
                pArreglo++;
                p1++;
            }
        }
    }
}

int main()
{
    int n = 10;
    int arregloA [n];
    int m = 15;
    int arregloB [m];
    int arregloMezcla[n+m];
    //Procesamiento del primer arreglo
    incisoA(arregloA, n);
    ordenarAscendentemente(arregloA, n);
    MostrarElementos(arregloA, n);
    //Procesamiento del segundo arreglo
    incisoA(arregloB, m);
    ordenarAscendentemente(arregloB, m);
    MostrarElementos(arregloB, m);
    //Mezcla de los arreglos
    mezclaDeArreglos(arregloA, n, arregloB, m, arregloMezcla);
    MostrarElementos(arregloMezcla, n+m);

    return 0;
}
