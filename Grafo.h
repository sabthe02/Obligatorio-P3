#ifndef GRAFO_H_INCLUDED
#define GRAFO_H_INCLUDED

#include "Boolean.h"
#include "constantes.h"



typedef int Grafo[CANT_CIUDADES][CANT_CIUDADES];


/*Operaciones Primitivas*/
void Crear (Grafo &g);

//Crea un grafo vacío.
void Crear (Grafo &g);

//Grafo Inserta la nueva arista al grafo. Precondición: la arista no pertenece al grafo.
void InsertarArista (Grafo &g, int fila, int columna);

//Determina si en el grafo existe el vértice especificado.
boolean PerteneceVertice(Grafo g, int vertice);

//Determina si en el grafo existe la arista especificada.
boolean PerteneceArista(Grafo g, int fila, int columna);

//Devuelve el grado del vértice especificado. Precondición: el vértice pertenece al grafo
int GradoVertice (Grafo g, int vertice);

//Determina si existe una ruta entre dos ciudades.
boolean buscarRuta (Grafo g, int verticeA, int verticeB);

//DFS
void DFS (Grafo g, int actual, int verticeBuscar, boolean visitado[CANT_CIUDADES]);


#endif // GRAFO_H_INCLUDED
