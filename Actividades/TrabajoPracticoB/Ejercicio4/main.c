#include <stdio.h>
#include <stdlib.h>

int* triA(int x) {
    int res;
    res = 3*x;
    return &res;
}

void mainA(){
    int a = 34;
    int a3;
    int* p;
    p = triA(a);
    a3 = *p;
    printf("valor triple: %i", *a3);
}

int* triB(int x) {
    int* res;
    *res = 3 * x;
    return res;
}

void mainB() {
    int a = 34;
    int a3;
    int* p;
    p = triB(a);
    a3 = *p;
}

int triC(int x) {
    int res = 3 * x;
    return res;
}

void mainC() {
    int a = 34;
    int a3;
    a3 = tri(a);
}

void triD(int* x) {
    int res;
    res = *x * 3;
    *x = res;
}

/*
    Tiene de diferente que este modifica el valor de al pasar por valor la direccion de memoria en la que se almacena.
*/
void mainD() {
    int a = 34;
    triD(&a);
}

void triE(int * x) {
    int res;
    res = *x * 3;
    *x = res;
}

void mainE() {
    int * a;
    *a = 34;
    triE(a);
}

void triF(int * x) {
    int res;
    res = *x * 3;
    *x = res;
}

void mainF() {
    int * a;
    int b;
    a = &b;
    *a = 34;
    triF(a);
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
