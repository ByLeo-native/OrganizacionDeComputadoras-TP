#include <stdio.h>
#include <stdlib.h>

/*
    Retorna la cantidad de digitos que tiene un numero entero.
    param: int numero a analizar.
*/
int anchoDeUnNumero(int num) {
    int contador = 0;
    while(num !=0 ) {
        contador++;
        num /= 10;
    }
    return contador;
}

/*
    Verifica si una cadena de caracteres es palindromo.
    param: char arreglo de caracteres.
    param: int inicio entero correspondiente a la posicion del arreglo de adelante.
    param: int fin entero correspondiente a la posicion del arreglo de atras.
*/
int esPalindromo(char palabra[], int inicio, int fin) {
    if( inicio >= fin ) {
        return 1; //Es palindromo
    } else if(palabra[inicio] != palabra[fin]) {
        return 0; //No es palindromo
    } else {
        return esPalindromo(palabra, inicio + 1, fin -1); //Paso recursivo cambiando inicio un valor a derecha y fin un valor a izquierda.
    }
}

int main()
{
    char palabra [100];
    printf("Ingrese un numero entero: \n");
    scanf("%s", palabra);
    int longitud = strlen(palabra);
    int numeroEsPalindromo = esPalindromo(palabra, 0, longitud - 1);
    if(numeroEsPalindromo) {
        printf("El numero es palindromo.");
    } else {
        printf("El numero no es palindromo.");
    }

    return 0;
}
