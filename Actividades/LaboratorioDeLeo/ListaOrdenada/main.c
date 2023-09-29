#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Lista.h"
#include "define.h"

//IMPORTANTE: DADO QUE ESTO ES UN LABORATORIO EN EL CUAL SE EXAMINA A LOS ALUMNOS, EL
//CÓDIGO NO ESTARÁ DOCUMENTADO POR RAZONES OBVIAS
void mostrarElementos(tLista L)
{
        tPosicion aux;
        tElem *e;

        aux = L;

        if (esListaVacia(L))
                printf("La lista L no posee elementos.\n");
        else{
            printf("[ ");
            #ifndef ALTERNATIVE
                while (aux != POS_NULA)
            #endif // ALTERNARTIVE
            #ifdef ALTERNATIVE
            while(aux ->siguiente != POS_NULA)
            #endif // ALTERNATIVE
            {
                e =  recuperar(aux,L);
                printf("%i ", *e);
                aux = siguiente(aux,L);
            }
        }
        printf("]");
}

void generarElementos(tLista *L)
{
        tElem *e;
        int i;

        srand(time(NULL));

        i = 0;

        printf("Elementos generados: ");
        while (i < SIZE)
        {
                e = (int *)malloc(sizeof(int));
                *e = rand() % 30;
                printf("%i ", *e);
                insertarElemento(e, primera(*L), L);
                i++;
        }
        printf ("\n");
}

tPosicion proc1(int i,tLista L){
   int k;
   tPosicion pos = primera(L);
   for(k=0;k<i;k++){
     pos=siguiente(pos,L);
   }
   return pos;
}

void ordenarElementos(tLista *L) {
    int i, j, k;
    tPosicion posaux,posi;

     tElem *el;
     tElem *e;
     tElem *temp;
    for (k = SIZE / 2; k > 0; k /= 2) {
        for (i = k; i < SIZE; i++) {
            posi= proc1(i,*L);
            temp = recuperar(posi,*L);
            for  (j = i; j >= k && *(recuperar(proc1((j-k),*L),*L)) > *temp; j -= k) {
                 posaux= proc1(j-k,*L);
                 e = recuperar(posaux,*L);
                 el= (int *)malloc(sizeof(int));
                 *el = *e;
                 eliminarElemento(posaux, L);
                 posaux = proc1(j,*L);
                 insertarElemento(el,posaux,L);

            }
            if (i != j) {
                el= (int *)malloc(sizeof(int));
                *el = *temp;
                eliminarElemento(posi, L);
                posi = proc1(j,*L);
                insertarElemento(el,posi,L);

            }


        }
    }
}



int main()
{
        tLista L;

        crearListaVacia(&L);
        generarElementos(&L);
        printf("\n");

        printf("Lista generada: ");
        mostrarElementos(L);
        printf("\n\n");

        ordenarElementos(&L);

        printf("Lista ordenada: ");
        mostrarElementos(L);
        printf("\n\n");


        exit(0);
}
