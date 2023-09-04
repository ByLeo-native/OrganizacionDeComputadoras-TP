#include <stdio.h>
#include <stdlib.h>

int a = 10, b = 20;

void pruebaDePuntero() {
    int x = 1;
    int* px = &x;

    printf("Valor de x es %i\n", x);
    printf("Valor de px es %p\n", (void *)px);
    printf("Valor apuntado por px es %i\n", *px);
}

void punteroDeUnArreglo() {
    int arreglo[] = {1, 2, 3, 4, 5};
    int n = sizeof(arreglo) / sizeof(arreglo[0]);
    printf("Elementos del arreglo:\n");
    for(int i = 0; i < n; i++) {
        printf("%i\t", arreglo[i]);
    }
    printf("\n");
    int *puntero_arreglo = arreglo;
    *puntero_arreglo = 8;
    printf("Luego de la sentencia \"int *puntero_arreglo = arreglo;\" y asignarle a *puntero_arreglo el valor 8 tenemos en el arreglo.\n");
    printf("Elementos del arreglo:\n");
    for(int i = 0; i < n; i++) {
        printf("%i\t", arreglo[i]);
    }
    printf("\n");
}

void aritmeticaSobrePunteros(){
    int vector [5] = {10, 20, 30, 40, 50};
    int n = sizeof(vector) / sizeof(vector[0]);
    int *pv = vector;
    printf("Elementos del vector:\n");
    for(int i = 0; i < n; i++) {
        printf("%i\t", vector[i]);
    }
    printf("\n");
    *pv = 15;
    *(pv + 3) += 5;
    printf("Elementos del vector:\n");
    for(int i = 0; i < n; i++) {
        printf("%i\t", vector[i]);
    }
    printf("\n");

    char string[250] = {'M', 'a', 'r', 'i', 'a'};
    n = strlen(string);
    char *ps = &string[2];
    *(ps + 2) = 'o';
    printf("Elementos del string:\n");
    for(int i = 0; i < n; i++) {
        printf("%c\t", string[i]);
    }
    printf("\n");
}

void reset(int *a, int b) {
    *a = 0; b = 0;
}

void pasajePorReferencia(int a, int b) {
    int x = a;
    int y = b;
    printf("Antes de usar el procedimiento reset, tenemos que x = %i e y = %i\n", x, y);
    reset(&x, y);
    printf("Despues de usar el procedimiento reset, tenemos que x = %i e y = %i\n", x, y);
}

void cambiar(int p, int *q) {
    p += 2;
    *q += p;
}

void mainParaCambiar() {
    int a = 10;
    int b = 20;
    printf("Antes - Valor de a: %i \t Valor de b: %i\n", a, b);
    cambiar(a, &b);
    printf("Despues - Valor de a: %i \t Valor de b: %i\n", a, b);
}

int comparacionDeStrings() {
    char cadena1[250] = {'H','o','l','a', '\0'};
    char cadena2[250] = "Hola";
    if(cadena1 == cadena2) {
        return 1;
    }
    return 0;
}

void definicionDeEstructuras() {
    struct persona {
        char nombre[20];
        int edad;
        float altura;
    };

    struct persona unProfesor = {"Lucas Ocampo", 33, 1.75f};
    struct persona *pProfesor = &unProfesor;
}

void count() {
    static int acc = 0;
    printf("%d\n", acc++);
}

void mainDelCount() {
    count();count();count();
}

void constanteConPuntero() {
    const float PI = 3.1415f;
    const float *puntero; //Notar que el puntero no esta inicializado ya que lo constante es el float, no el puntero;
    puntero = &PI;
    printf("%f\n", *puntero);

    float *const punteroConstante = &PI;
    printf("%f\n", *punteroConstante);
    /*
    La siguiente sentencia no compila ya que el puntero de debe ser modificado
    punteroConstante = puntero;
    printf("%f\n", *punteroConstante);
    */
}

void main1() {
    int* x;
    int y, z = 3;
    x = &z;
    y = *x;
    printf("y: %i \t z: %i\n", y, z);
    y++;
    printf("y: %i \t z: %i\n", y, z);
    (*x)++;
    printf("y: %i \t z: %i\n", y, z);
}

void main2() {
    int* x;
    int y;
    x = &y;
    *x = 3;
    printf("y: %i\n", y);
    y++;
    printf("y: %i\n", y);
    (*x) ++;
    printf("y: %i\n", y);
}

int main()
{
    main2();
    return 0;
}
