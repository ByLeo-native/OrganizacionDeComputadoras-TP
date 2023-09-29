//#ifndef LISTA_H_INCLUDED
//#define LISTA_H_INCLUDED



//#endif // LISTA_H_INCLUDED
/*
Archivo       : Lista.h
Descripción   : .h de la implementaciín del TDA Lista con celda de encabezamiento y concepto de posición
                indirecta.
Actualizaci�n : 25-09-2023 M. Escudero
Autor		  :  L. De Matteis - M. Escudero
Materia       : Organización de Computadoras
 */


//IMPORTANTE: DADO QUE ESTO ES UN LABORATORIO EN EL CUAL SE EXAMINA A LOS ALUMNOS, EL
//CÓDIGO NO ESTARÁ DOCUMENTADO POR RAZONES OBVIAS

typedef int tElem;
typedef struct tCelda
{
        tElem *elemento;
        struct tCelda *siguiente;
} *tLista;

typedef tLista tPosicion;

extern void crearListaVacia(tLista *L); //Esta operación deberá ser IMPLEMENTADA
extern void insertarElemento(tElem *E, tPosicion P, tLista *L);//Esta operación deberá ser IMPLEMENTADA
extern void eliminarElemento(tPosicion P, tLista *L);
extern int esListaVacia(tLista L);//Esta operación deberá ser IMPLEMENTADA
extern tPosicion primera(tLista L);
extern tPosicion ultima(tLista L);
extern tPosicion anterior(tPosicion P, tLista L);
extern tPosicion siguiente(tPosicion P, tLista L);
extern tElem *recuperar(tPosicion P, tLista L);

