#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c, nl;
    nl = 0;
    while((c = getchar()) != EOF) {
        if(c == '\n'){
            nl++;
        }
    }
    printf("Cantidad de lineas: %i", nl);
    return 0;
}
