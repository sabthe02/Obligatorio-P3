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


/*Operaciones primitvas*/

//Crear una secuencia
void Crear (Paradas &L);

//Insertar un elemento al final de la secuencia
void Insback (Paradas &L, Ciudad e);

////Insertar un elemento al principio de la secuencia
void Insfront (Paradas &L, Ciudad e);

//Determinar si la secuencia est� vac�a
boolean EsVacia (Paradas L);

//Obtener el primer elemento de la secuencia
//Precondici�n: la secuencia no es vac�a.
Ciudad Primero (Paradas L);

//Devuelve la secuencia sin su primer elemento
//Precondici�n: la secuencia no es vac�a
void Resto (Paradas &L);

//Devuelve el largo de la secuencia
int Largo(Paradas L);

//Devuelve el elemento en la posicion K de la secuencia
//Precondici�n: El largo de la secuencia es mayor o igual a K.
Ciudad Kesimo (Paradas L, int K);

/*Operaciones adicionales*/

//Devuelve el �ltimo elemento de la secuencia
//Precondici�n: la secuencia no est� vac�a
Ciudad Back (Paradas L);

//Desplegar todos los elementos de la secuencia.
//Precondici�n: Paradas no est� vac�a
void imprimirParadasP (Paradas p);

//Liberar la memoria de la secuencia
void Eliminar(Paradas &p);


#endif // PARADAS_H_INCLUDED
