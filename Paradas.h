#ifndef PARADAS_H_INCLUDED
#define PARADAS_H_INCLUDED
#include "String.h"
#include "Ciudad.h"

typedef struct nodoL
{
    Ciudad info;
    nodoL *sig;
} Nodo;

typedef struct
{
    Nodo * prim;
    Nodo * ult;
} Paradas;


/*Primitvas*/

void Make (Paradas &L);

void Insback (Paradas &L, Ciudad e);

boolean Empty (Paradas L);

Ciudad Front (Paradas L);

void RemFront (Paradas &L);

//Devuelve el último elemento del deque
// Precondición: el deque no está vacío
Ciudad Back (Paradas L);

void Desplegar(Paradas L);

void imprimirParadasP (Paradas p);

void Eliminar(Paradas &p);

/*Verificar todas las primitivas de la secuenciaP*/


#endif // PARADAS_H_INCLUDED
