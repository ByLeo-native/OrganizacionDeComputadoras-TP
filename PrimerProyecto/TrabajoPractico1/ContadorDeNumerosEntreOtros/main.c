#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    int nOtros = 0, nBlancos = 0;
    int nDigitos[10];
    for(int i = 0; i < 10; i++) {
        nDigitos[i] = 0;
    }
    while((c=getchar()) != EOF) {
        if( c >= '0' && c <= '9') {
            ++nDigitos[ c - '0'];
        } else if( c == ' ' || c == '\t' || c == '\n') {
            nBlancos++;
        } else {
            nOtros++;
        }
    }

    printf("Digitos ");
    for(int i = 0; i < 10; i++) {
        printf("Cantidad de %i es %i.\n", i, nDigitos[i]);
    }
    printf("Espacios en blanco: %i.\n", nBlancos);
    printf("Cantidad de otros caracteres: %i.\n", nOtros);
    return 0;
}
