#include <stdio.h>
#include <stdlib.h>

int main()
{
    long numero;
    int hora, minutos, segundos;

    printf("Ingrese un número long: ");
    scanf("%ld", &numero);

    hora = (int) numero / 3600;
    numero -= hora*3600;

    minutos = (int) numero / 60;
    numero -= minutos * 60;

    segundos = numero;

    printf("La cantidad de segundos en formato estandar es %02i : %02i : %02i \n", hora, minutos, segundos);
}
