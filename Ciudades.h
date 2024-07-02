#ifndef CIUDADES_H_INCLUDED
#define CIUDADES_H_INCLUDED
#include "Ciudad.h"


const int CANT = 20;

typedef struct {Ciudad arre[CANT];
                int tope;
                }Ciudades;

// Secuencia Crea una secuencia vacía.
void Crear (Ciudades &ad);

//Agrega un elemento de tipo T a la secuencia.
void InsFront (Ciudades &ad, Ciudad elemento);

// Boolean Determina si la secuencia está vacía o no.
boolean EsVacia (Ciudades ad);

//Primero : Secuencia  T  Devuelve el primer elemento de la secuencia. Precondición: la secuencia no es vacía.
Ciudad Primero (Ciudades ad);

//Resto : Secuencia  Secuencia Devuelve la secuencia sin su primer elemento. Precondición: la secuencia no es vacía
void Resto (Ciudades &ad);

// int Largo (Ciudades ad);
int Largo (Ciudades ad);

//Devuelve el elemento que ocupa la posición K de la secuencia. Precondición: El largo de la secuencia es mayor o igual a K
Ciudad Kesimo (Ciudades ad, int k);



#endif // ARREGLOCONTOPE_H_INCLUDED
