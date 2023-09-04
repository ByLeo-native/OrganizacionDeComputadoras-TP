#include <stdio.h>
#include <stdlib.h>

int main()
{
    long decimal = 0;
    int aux;
    int lenght;
    char texto[100]; // Declarar un arreglo de caracteres para almacenar la cadena

    printf("Ingrese una cadena de texto: ");
    scanf("%s", texto); // Leer la cadena de texto ingresada

    lenght = strlen(texto);
    for( int i = 0; i < lenght; i++) {
        char caracter = texto[i];
        switch(caracter) {
            case 'A':
                aux = 10;
                break;
            case 'B':
                aux = 11;
                break;
            case 'C':
                aux = 12;
                break;
            case 'D':
                aux = 13;
                break;
            case 'E':
                aux = 14;
                break;
            case 'F':
                aux = 15;
                break;
            default:
                aux = caracter - '0';
                if(!(aux >= 0 && aux <= 9)) {
                    printf("Se ha ingresado un caracter invalido %c", caracter);
                    return 1;
                }
        }
        decimal += aux * pow(16,(lenght - 1 - i));
    }

    printf("Decimal: %ld", decimal);

    return 0;
}
