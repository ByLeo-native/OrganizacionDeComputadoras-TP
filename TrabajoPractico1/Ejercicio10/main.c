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
    Devuelve un numero sin su primer digito de izquierda a derecha.
    param: int numero entero a quitar su primer digito.
    param: int anchoDeUnNumero entero cantidad de digitos de un numero.
*/
int quitarPrimerDigito(int numero, int anchoDeUnNumero) {
    char numeroStr[anchoDeUnNumero];
    sprintf(numeroStr, "%i", numero);

    char nuevoNumeroStr[anchoDeUnNumero];
    strcpy(nuevoNumeroStr, numeroStr + 1 );

    int nuevoNumero;
    sscanf(nuevoNumeroStr, "%i", &nuevoNumero);

    return nuevoNumero;
}

/*
    Devuelve un entero sin su ultimo digito de un numero pasado por parametro.
    param: int numero entero a quitar ultimo digito.
*/
int quitarUltimoDigito(int numero) {
    return numero/10;
}

/*
    Devuelve el primer digito de un numero entero.
    param: int numero entero a buscar primer digito.
    param: int anchoDeUnNumero entero correspondiente a la cantidad de digitos del numero.
*/
int primerDigito(int numero, int anchoDeUnNumero) {
    int primerDigitoDelNumero;
    int i=1;
    while(i < anchoDeUnNumero) {
        numero /= 10;
        i++;
    }
    primerDigitoDelNumero = numero;
    return primerDigitoDelNumero;
}

/*
    Devuelve el ultimo digito de un numero entero pasado por parametro.
    param: int numero entero a buscar ultimo digito.
*/
int ultimoDigito(int numero) {
    return numero % 10;
}

/*
    Verifica si un numero entero es palindromo.
    param: int numero entero a verificar si cumple las condiciones de ser un numero palindromo.
*/
int esPalindromoAux(int numero) {
    int numeroSinPrimerYUltimoDigito;
    int anchoDelNumero = anchoDeUnNumero(numero);
    if(anchoDelNumero == 0 || anchoDelNumero == 1) {
        return 1;
    }
    int primerDigitoDeNumero = primerDigito(numero, anchoDelNumero);
    int ultimoDigitoDeNumero = ultimoDigito(numero);

    printf("Se compara %i con %i.\n", primerDigitoDeNumero, ultimoDigitoDeNumero);
    if(primerDigitoDeNumero == ultimoDigitoDeNumero) {
        numeroSinPrimerYUltimoDigito = quitarUltimoDigito(quitarPrimerDigito(numero, anchoDelNumero));
        return esPalindromo(numeroSinPrimerYUltimoDigito);
    } else {
        return 0;
    }
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

int mainAuxiliar() {
    int numero, cantDeDigitos;
    printf("Ingrese un numero entero: \n");
    scanf("%i", &numero);
    int numeroEsPalindromo = esPalindromoAux(numero);
    if(numeroEsPalindromo) {
        printf("El numero %i es palindromo.", numero);
    } else {
        printf("El numero %i no es palindromo.", numero);
    }
    return 0;
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
