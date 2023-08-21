#include <stdio.h>
#include <stdlib.h>

#define CELSIUSFAHRENHEIT 33.8
#define MILLAKILOMETRO 1.609344
#define HORASEGUNDO 3600
#define LITROGALON 0.264172052

float celsiusToFahrenheit() {
    float cant;
    printf("Ingrese la cantidad de grados Celsius: ");
    scanf("%f", &cant);
    return cant * CELSIUSFAHRENHEIT;
}

float mphTokms() {
    float cant;
    printf("Ingrese la cantidad de millas por hora: ");
    scanf("%f", &cant);
    return cant * MILLAKILOMETRO / HORASEGUNDO;
}

float litrosCadaCienKilometrosToMillasPorGalon() {
    float cant;
    printf("Ingrese la cantidad de litrosCadaCienKilometros: ");
    scanf("%f", &cant);
    return 1 / cant * ( 1 / MILLAKILOMETRO) * ( 1 / LITROGALON );
}

int main()
{
    int opcion = 0;
    int enEjecucion = 1;
    float resultado;
    do {
        printf("Ingrese un entero correspondiente a una opcion a realizar\n");
        printf("Opcion 1: De grados Celsius a grados Faherenheit.\n");
        printf("Opcion 2: De millas por hora a kilometros por minuto.\n");
        printf("Opcion 3: De litros cada 100 km a millas por galon.\n");
        printf("Opcion 4: Salir.\n");
        scanf("%i", &opcion);
        switch(opcion) {
            case 1:
                resultado = celsiusToFahrenheit();
                printf("Resultado: %.2f [F].\n", resultado);
                break;
            case 2:
                resultado = mphTokms();
                printf("Resultado: %03.6f [km / h].\n", resultado);
                break;
            case 3:
                resultado = litrosCadaCienKilometrosToMillasPorGalon();
                printf("Resultado: %03.2f [mill / gal].\n", resultado);
                break;
            case 4:
                enEjecucion = 0;
                break;
            default:
                printf("Error: Se ingreso una opcion invalida.\n");

        }

    } while (enEjecucion);
    return 0;
}
