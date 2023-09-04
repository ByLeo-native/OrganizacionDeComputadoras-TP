#include <stdio.h>
#include <stdlib.h>

int contarDecimales(int num) {
    if(num>=0 && num <=9) {
        return 1;
    } else {
        return (1 + contarDecimales(num/10));
    }
}

int contarDigitos(int num, int digito) {
    int resto = num % 10;
    int contador = (resto == digito) ? 1 : 0;
    if(num >=0 && num <=9) {
        return contador;
    } else {
        return contador + contarDigitos(num/10, digito);
    }
}

int contarParesEnPosicionesImpares(int num, int posicion) {
    if(num == 0) {
        return 0;
    } else {
        int digito = num % 10;
        if( (posicion % 2) != 0 & (digito % 2) == 0 ) {
            return 1 + contarParesEnPosicionesImpares(num/10, posicion + 1);
        } else {
            return 0 + contarParesEnPosicionesImpares(num/10, posicion + 1);
        }
    }

}

int main()
{
    int opcion;
    int numero;
    int digito;
    int resultado;

    printf("Elija una opcion:\n");
    printf("1. Contar decimales en un numero.\n");
    printf("2. Contar ocurrencias de un digito en un numero.\n");
    printf("3. Contar pares en posiciones impares en un numero.\n");
    scanf("%d", &opcion);

    printf("Ingrese un numero entero: \n");
    scanf("%d", &numero);

    switch (opcion) {
        case 1:
            resultado = contarDecimales(numero);
            printf("El numero %d tiene %d digitos.\n", numero, resultado);
            break;
        case 2:
            printf("Ingrese el digito a contar: ");
            scanf("%d", &digito);
            resultado = contarDigitos(numero, digito);
            printf("El digito %d aparece %d veces en el numero %d.\n", digito, resultado, numero);
            break;
        case 3:
            resultado = contarParesEnPosicionesImpares(numero, 1);
            printf("El numero %d tiene %d digitos pares en posiciones impares.\n", numero, resultado);
            break;
        default:
            printf("Opción invalida.\n");
            break;
    }

    return 0;
}
