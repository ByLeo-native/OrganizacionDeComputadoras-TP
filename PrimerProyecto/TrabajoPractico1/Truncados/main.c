#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Pagina 11 del libro "El lenguaje de programacion C"
    */
    float puntoFlotante = 5/9;
    float puntoFlotanteEntreUnFloat1 = 5.0/9;
    float puntoFlotanteEntreUnFloat2 = 5/9.0;
    float puntoFlotanteEntreDosFloats = 5.0/9.0;
    printf("Punto flotante 5/9: %f\n", puntoFlotante);
    printf("Punto flotante 5.0/9: %f\n", puntoFlotanteEntreUnFloat1);
    printf("Punto flotante 5/9.0: %f\n", puntoFlotanteEntreUnFloat2);
    printf("Punto flotante 5.0/9.0: %f\n", puntoFlotanteEntreDosFloats);

    return 0;
}
