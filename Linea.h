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
String darCodigoLinea (Linea l);

int darCantidadParadas (Linea l);

Paradas darParadas (Linea l);

//cargar una Linea (con 0 paradas)
void cargarLinea (Linea &l);

//Agregar una parada a la secuencia de paradas
void agregarParadaALinea (Linea &l, Ciudad c);

//Desplegado básico de los datos de la línea (código y cantidad de paradas)
void desplegarLineaBasico (Linea l);

//Desplegado de las paradas de la secuencia de paradas
void imprimirParadas (Linea l);

//Liberar memoria del String código de línea
void Eliminar(Linea l);


#endif // LINEA_H_INCLUDED
