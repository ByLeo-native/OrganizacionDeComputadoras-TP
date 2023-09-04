#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, mes, anio;
    int esCorrecto = 1;

    printf("Ingrese un anio: ");
    scanf("%d", &anio);

    printf("Ingrese un mes: ");
    scanf("%d", &mes);

    printf("Ingrese un dia: ");
    scanf("%d", &dia);

    if (anio <= 0 || dia < 1 || mes < 1 || mes > 12) {
        esCorrecto = 0;
    } else {
        int esBisiesto = (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0) ? 1 : 0;
        if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
            esCorrecto = (dia >= 1 && dia <= 30) ? 1 : 0;
        } else if (mes == 2) {
            if (esBisiesto) {
                esCorrecto = (dia >= 1 && dia <= 29) ? 1 : 0;
            } else {
                esCorrecto = (dia >= 1 && dia <= 28) ? 1 : 0;
            }
        } else {
            esCorrecto = (dia >= 1 && dia <= 31) ? 1 : 0;
        }
    }

    if (esCorrecto) {
        printf("La fecha ingresada (%i / %i / %i) es valida.\n", dia, mes, anio);
    } else {
        printf("La fecha ingresada (%i / %i / %i) es invalida.\n", dia, mes, anio);
    }
    return 0;
}
