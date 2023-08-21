#include <stdio.h>
#include <stdlib.h>

int main()
{
    double promedio = 0L;
    long numero, mayor, menor;
    int n;
    long suma = 0L;

    printf("Ingrese la cantidad de números: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("La cantidad de números debe ser mayor que cero.\n");
        return 1; // Salir con código de error
    }

    printf("Ingrese el primer número: ");
    scanf("%ld", &numero);
    mayor = menor = numero;
    suma += numero;

    for(int i = 1; i < n ; i++ ) {
        printf("Ingrese el siguiente numero largo (%i de %i): \n", i, n);
        scanf("%ld", &numero);
        if( numero > mayor) {
            mayor = numero;
        } else if( numero < menor ) {
            menor = numero;
        }
        suma += numero;
    }

    promedio = suma / n;

    printf("Numero mayor: %02.2ld \n", mayor);
    printf("Numero menor: %ld \n", menor);
    printf("Numero promedio: %.2f \n", promedio);
    return 0;
}
