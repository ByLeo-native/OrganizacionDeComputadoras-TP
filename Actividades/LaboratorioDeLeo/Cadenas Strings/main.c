#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cadena1 [250] = {'H','o','l','a','!','\0'};
    //char cadena1 [250] = {'H','o','l','a','!'};
    char cadena2 [250] = "Hola!";

    if(cadena1 == cadena2) {
        printf("Son iguales cadena1 y cadena2\n");
    } else {
        printf("No son iguales cadena1 y cadena2\n");
    }
    return 0;
}
