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

String darCodigoLinea (Linea l);

int darCantidadParadas (Linea l);

Paradas darParadas (Linea l);

void cargarLinea (Linea &l);

void agregarParadaALinea (Linea &l, Ciudad c);

void desplegarLineaBasico (Linea l);

void imprimirParadas (Linea l);

void Eliminar(Linea l);


#endif // LINEA_H_INCLUDED
