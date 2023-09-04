#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c, numeroDeTab = 0, numeroDeEspacios = 0, numeroDeLineas = 0;
    while((c = getchar()) != EOF) {
        switch(c) {
        case '\t':
            numeroDeTab++;
            break;
        case ' ':
            numeroDeEspacios++;
            break;
        case '\n':
            numeroDeLineas++;
            break;
        }
    }
    printf("Cantidad de tabulaciones: %i \t Cantidad de espacios: %i \t Cantidad de lineas: %i.\n", numeroDeTab, numeroDeEspacios, numeroDeLineas);
    return 0;
}
