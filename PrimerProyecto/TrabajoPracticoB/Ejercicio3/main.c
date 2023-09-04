#include <stdio.h>
#include <stdlib.h>

void f(double formal) {
    //Como el pasaje es por valor, entonces formal es una copia de myVar por lo tanto tienen el mismo valor
    formal = formal + 56.75;
    //Formal y myVar tienen diferentes valores ya que formal y myVar tienen direcciones de memoria diferente.
}

void main1() {
    double myVar = 123.4;
    f(myVar);
    //My var debe valer 123.4 ya que el pasaje fue por valor.
}

void f2(double * formal) {
    //checkpoint1 f recibe la direccion de memoria de un double, por lo tanto *formal sera la direccion de memoria de myVar
    *formal = *formal + 56.75;
    //checkpoint2 se modifica lo que esta apuntando el puntero formal por lo tanto modifica el mismo lugar donde se almacena el valor de myVar
}

void main2() {
    double myVar = 123.4;
    f(&myVar);
    //checkpoint3 myVar se vio modificada por el procedimiento f, valor esperado 180.15
}

void f( double formal) {
    //checkpoint1 formal es una copia de lo que apunta el puntero p
    formal = formal + 56.75;
    //checkpoint2 formal sera modificado pero no lo que apunte el puntero p.
}

void main3() {
    double myVar = 123.4;
    double *p;
    p = &myVar;
    f(*p);
    //checkpoint3 myVar tendra el mismo valor inicial, y p seguira apuntando a myVar.
}

void f4(double* formal) {
    //checkpoint1 "Pasaje por referencia" formal es una copia del puntero p que apunta a myVar
    *formal = *formal + 56.75;
    //checkpoint2 Se modifica el valor apuntado por formal que sera lo almacenado en el puntero p
}

void main4() {
    double myVar = 123.4;
    double * p;
    p = &myVar;
    f(p);
    //checkpoint3 myVar se vio modificado por el procedimiento f
}

void f5(double ** formal) {
    //checkpoint1 es un puntero de otro puntero que apunta a una variable de tipo double
    **formal = **formal + 56.75;
    //checkpoint2 modifica lo apuntado por el puntero que apunta el puntero formal.
    *formal = null;
    //checkpoint3 modifica al puntero que apunta el puntero formal.
    formal = null;
}

void main5(){
    double myVar = 123.4;
    double* p;
    p = &myVar;
    f5(&p);
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
