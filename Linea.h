#ifndef LINEA_H_INCLUDED
#define LINEA_H_INCLUDED
#include "Paradas.h"
#include "Ciudad.h"

typedef struct
{
    String CodigoLinea;
    int CantidadParadas;
    Paradas paradas;
} Linea;

/*Selectoras*/

//Devuelve el c�digo de Linea
String darCodigoLinea (Linea l);

//Devuelve la cantidad de paradas
int darCantidadParadas (Linea l);

//Devuelve la secuencia paradas
Paradas darParadas (Linea l);

/*Operaciones adicionales */

//cargar una Linea (con 0 paradas)
void cargarLinea (Linea &l);

//Agregar una parada a la secuencia de paradas
void agregarParadaALinea (Linea &l, Ciudad c);

//Desplegado b�sico de los datos de la l�nea (c�digo y cantidad de paradas)
void desplegarLineaBasico (Linea l);

//Desplegado de las paradas de la secuencia de paradas
//Precondici�n: paradas no es vac�a
void imprimirParadas (Linea l);

//Liberar memoria del String c�digo de l�nea
void Eliminar(Linea l);


#endif // LINEA_H_INCLUDED
