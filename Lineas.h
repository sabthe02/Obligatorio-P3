#ifndef LINEAS_H_INCLUDED
#define LINEAS_H_INCLUDED
#include "Boolean.h"
#include "Linea.h"

typedef struct nodoA {
                        Linea info;
                        nodoA *hizq;
                        nodoA *hder;
                        } nodo;

typedef nodo *Lineas;
// Operaciones primitivas

//Crea un diccionario vacío.
void Make (Lineas &a);

// Saber si el ABB está vacío
boolean Vacio (Lineas a);

// Inserta un elemento de tipo T en el diccionario.
//Precondición: el elemento a insertar no es miembro del diccionario.
void Insert (Lineas &a, Linea valor);

//Determina si en el diccionario existe un elemento con la clave especificada.
boolean Member (Lineas a, String valor);

//Dada la clave de un elemento devuelve el elemento con dicha clave
//Precondición: el elemento es miembro del diccionario.
Linea Find (Lineas a, String valor);

// Sustituye el viejo elemento de tipo T en el diccionario por el nuevo elemento.
//Precondición: el elemento a sustituir es miembro del diccionario.
void Modify (Lineas &a, Linea viejo, Linea nuevo);

//Dada la clave de un elemento lo borra del diccionario
//Precondición: el elemento es miembro del diccionario.
void Delete (Lineas &a, Linea valor);

//Auxiliares para el Delete
void Borrar_Minimo (Lineas &a);

Linea Minimo (Lineas a);

//Desplegar todas las lineas, ordenadas de menor a mayot
void DesplegarLineas (Lineas a);

void agregarParadaALineas (Lineas &a, String codigo, Ciudad c);

#endif // LINEAS_H_INCLUDED
