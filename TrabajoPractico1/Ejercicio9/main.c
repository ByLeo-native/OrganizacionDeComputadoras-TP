#include <stdio.h>
#include <stdlib.h>

int esProlijo(int num, int ultimoDigito, int esAscendente) {
    if(num < 10) {
        if(num > ultimoDigito && esAscendente) {
            return 1;
        } else if(num < ultimoDigito && !esAscendente) {
            return 1;
        } else {
            return 0;
        }
    }

    int digito = num % 10;
    if(esAscendente && (digito < ultimoDigito)) {
        return 0;
    }

    if(!esAscendente && (digito > ultimoDigito)) {
        return 0;
    }

    return esProlijo(num / 10, digito, esAscendente);
}

int main()
{
    int numero;
    printf("Ingrese un numero entero: \n");
    scanf("%i", &numero);

    int primerDigito = numero % 10;
    int esAscendente = esProlijo(numero/10, primerDigito, 1);
    int esDesendiente = esProlijo(numero/10, primerDigito, 0);

    if(esAscendente || esDesendiente) {
        printf("El numero %i es prolijo.", numero);
    } else {
        printf("El numero %i no es prolijo.", numero);
    }
    return 0;
}
