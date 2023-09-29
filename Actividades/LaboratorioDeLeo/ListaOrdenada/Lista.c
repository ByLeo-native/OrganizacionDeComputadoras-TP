
//IMPORTANTE: DADO QUE ESTO ES UN LABORATORIO EN EL CUAL SE EXAMINA A LOS ALUMNOS, EL
//CÓDIGO NO ESTARÁ DOCUMENTADO POR RAZONES OBVIAS

#include <stdio.h>
#include <stdlib.h>
#include "define.h"
#include "lista.h"


//Esta operación deberá ser IMPLEMENTADA
void crearListaVacia(tLista *L)
{
    *L = (tLista) malloc(sizeof(struct tCelda));
    (*L) -> elemento = ELE_NULO;
    (*L) -> siguiente = POS_NULA;
}

//Esta operación deberá ser IMPLEMENTADA
void insertarElemento(tElem *E, tPosicion P, tLista *L)
{
    if (*L==POS_NULA) exit(LST_NO_INI);
    tPosicion nuevo = (tPosicion) malloc (sizeof(struct tCelda));
    nuevo->elemento = E;
    nuevo->siguiente = P;
    if( P == *L) {
        (*L) = nuevo;
    } else {
        tPosicion anteriorP = anterior(P, *L);
        anteriorP -> siguiente = nuevo;
    }
}

void eliminarElemento(tPosicion P, tLista *L)
{   tPosicion aux;
        if (P == *L) {
            *L = (*L)->siguiente;

        } else {
            aux = anterior (P,*L);
            aux->siguiente = P->siguiente;
        }

        free(P->elemento);
        free(P);
}

//Esta operación deberá ser IMPLEMENTADA
int esListaVacia(tLista L)
{
    int estaVacia = ((L->elemento == ELE_NULO) && L->siguiente == POS_NULA ) ? TRUE : FALSE;
    return estaVacia;
}
tPosicion primera(tLista L){
        return L;
}


tPosicion ultima(tLista L){
   tPosicion aux;
   if (!(L==POS_NULA)){
       aux=L;
       while (!(aux->siguiente == POS_NULA)){
        aux=aux->siguiente;
       }

    }else exit(LST_NO_INI);
    return aux;
}
tPosicion anterior(tPosicion P, tLista L){
   tPosicion aux;
   int encontre = FALSE;
   if (!(L==POS_NULA)&& !(L==P)) {
       aux=L;
       while (aux->siguiente != NULL && !encontre){
            if (aux->siguiente == P) encontre = TRUE;
            else aux=aux->siguiente;
       }

    }else aux= POS_NULA;
    return aux;

}
tPosicion siguiente(tPosicion P, tLista L){
    if (L==POS_NULA) exit(LST_NO_INI);
    return P->siguiente;
}

tElem *recuperar(tPosicion P, tLista L){
    return P->elemento;
}
