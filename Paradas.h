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

//Crear una secuencia
void Crear (Paradas &L);

//Insertar un elemento al final
void Insback (Paradas &L, Ciudad e);

////Insertar un elemento al principio
void Insfront (Paradas &L, Ciudad e);

//Determinar si la secuencia está vacía
boolean EsVacia (Paradas L);

//Obtener el primer elemento de la secuencia
//Precondición: la secuencia no es vacía.
Ciudad Primero (Paradas L);

//Devuelve la secuencia sin su primer elemento
//Precondición: la secuencia no es vacía
void Resto (Paradas &L);

//Devuelve el largo de la secuencia
int Largo(Paradas L);

//Devuelve el elemento en la posicion K de la secuencia
//Precondición: El largo de la secuencia es mayor o igual a K.
Ciudad Kesimo (Paradas L, int K);

//Devuelve el último elemento de la secuencia
//Precondición: la secuencia no está vacío
Ciudad Back (Paradas L);

//Desplegar todos los elementos de la secuencia.
void imprimirParadasP (Paradas p);

//Liberar la memoria de la secuencia
void Eliminar(Paradas &p);


#endif // PARADAS_H_INCLUDED
