#ifndef GRAFO_H_INCLUDED
#define GRAFO_H_INCLUDED

#include "Boolean.h"

const int CANT_CIUD = 5;

typedef int Grafo[CANT_CIUD][CANT_CIUD];


//Crea un grafo vacío.
void Crear (Grafo &g);

//InsertarVertice (Grafo &g, int vertice);
void InsertarVertice (Grafo &g, int i, int j);

//InsertarArista : Inserta la nueva arista al grafo. Precondición: la arista no pertenece al grafo.
void InsertarArista (Grafo &g, int fila, int columna);

//PerteneceVertice : Determina si en el grafo existe el vértice especificado.
boolean PerteneceVertice(Grafo g, int vertice);

//PerteneceArista : Determina si en el grafo existe la arista especificada.
boolean PerteneceArista(Grafo g, int fila, int columna);

//Devuelve el grado del vértice especificado. Precondición: el vértice pertenece al grafo
int GradoVertice (Grafo g, int vertice);

void DFS (Grafo g, int actual, boolean visitado[CANT_CIUD]);



#endif // GRAFO_H_INCLUDED
