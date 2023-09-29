#include <stdio.h>
#include <stdlib.h>

void funcion_stack() {
    int variable_stack = 10; // Variable almacenada en la pila
    printf("Valor en la pila: %d\n", variable_stack);
}

void funcion_heap() {
    int *variable_heap = (int *)malloc(sizeof(int)); // Variable almacenada en el montículo
    if (variable_heap == NULL) {
        fprintf(stderr, "Error: No se pudo asignar memoria en el montículo.\n");
        exit(EXIT_FAILURE);
    }

    *variable_heap = 20;
    printf("Valor en el montículo: %d\n", *variable_heap);

    // Liberar la memoria asignada en el montículo
    free(variable_heap);
}

int main() {
    funcion_stack(); // Llamada a función que usa la pila
    funcion_heap();  // Llamada a función que usa el montículo

    return 0;
}
