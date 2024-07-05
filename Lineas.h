#ifndef LINEAS_H_INCLUDED
#define LINEAS_H_INCLUDED
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

/*Auxiliares para el Delete*/
void Borrar_Minimo (Lineas &a);

//Devuelve el mínimo del ABB
Linea Minimo (Lineas a);

//Desplegar todas las lineas, ordenadas de menor a mayor
void DesplegarLineas (Lineas a);

//Agregar una parada a una líne dentro dal ABB
void agregarParadaALineas (Lineas &a, String codigo, Ciudad c);

//Desplegar el recorrido de una linea con su código
//Precondición: La línea correspondiente al código existe en el ABB
void imprimirRecorrido(Lineas l, String codigoLinea);

//Determina si la línea correspondiente al código de línea tiene alguna parada cargada en secuencia paradas
boolean lineaTieneParadas(Lineas l, String codigoLinea);

// Liberar memoria del ABB y dejarlo vacío
void Eliminar(Lineas &a);

#endif // LINEAS_H_INCLUDED
