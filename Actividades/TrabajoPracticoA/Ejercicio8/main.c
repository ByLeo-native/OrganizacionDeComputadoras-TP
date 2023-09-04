#include <stdio.h>
#include <stdlib.h>

int mediano(int num, int posicion) {
    if(num == 0) {
        return 0;
    } else {
        int resto = num % 10;
        if(posicion % 2 == 0) {
            //Si la posicion es par, entonces restar
            return (-1*resto) + mediano(num / 10, posicion + 1);
        } else {
            //Si la posicion es impar, entonces sumar
            return resto + mediano(num / 10, posicion + 1);
        }
    }
}

int main()
{
    int numero;
    int resultadoMediano;
    printf("Ingrese un numero entero para calcular el mediano:\n");
    scanf("%i", &numero);
    resultadoMediano = mediano(numero, 1);
    printf("Resultado: %i", resultadoMediano);
    return 0;
}
