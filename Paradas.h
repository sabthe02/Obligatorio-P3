#ifndef PARADAS_H_INCLUDED
#define PARADAS_H_INCLUDED
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
//Crear un Deque
void Make (Paradas &L);

//Insertar un elemento al final
void Insback (Paradas &L, Ciudad e);

//Determinar si el Deque est� vac�o
boolean Empty (Paradas L);

//Obtener el primer elemento al Deque
Ciudad Front (Paradas L);

//Devuelve el Deque sin su primer elemento
void RemFront (Paradas &L);

//Devuelve el �ltimo elemento del deque
// Precondici�n: el deque no est� vac�o
Ciudad Back (Paradas L);

//Desplegar todos los elementosdel Deque
void imprimirParadasP (Paradas p);

//Liberar la memoria del Deque y dejarlo vac�o
void Eliminar(Paradas &p);


#endif // PARADAS_H_INCLUDED
