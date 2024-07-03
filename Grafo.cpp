#include "Grafo.h"

void Crear (Grafo &g) {
    int i, j;

    for (i = 0; i <CANT_CIUD; i++) {
        for (j = 0; j <CANT_CIUD; j++) {
            g[i][j] = 0;
        }
    }

}

void InsertarVertice (Grafo &g, int i, int j){
//Para mí no es por acá, esto es agregar una arista, el vértice es i o j.

g[i][j] = 1;
g[j][i] = 1;


}

void InsertarArista (Grafo &g, int fila, int columna) {

g[fila][columna]=1;
    if (fila != columna) {
        g[columna][fila]=1;
    }

}

boolean PerteneceVertice(Grafo g, int vertice) {
boolean pertenece = FALSE;
int i=0, j;

do  {
    j=0;
    do {
        if (i == vertice || j == vertice) {
            pertenece = TRUE;
        }
        else {
            j++;
        }

        }while (j <CANT_CIUD && !pertenece);
        i++;
    }while (i <CANT_CIUD && !pertenece);
return pertenece;
}

boolean PerteneceArista(Grafo g, int fila, int columna) {
boolean pertenece = FALSE;

if (g[fila][columna] == 1){
    pertenece = TRUE;
}
return pertenece;

}

int GradoVertice (Grafo g, int vertice) {

int cont = 0;

for (int j=0; j<CANT_CIUD ;j++) {
        if (g[vertice][j]==1) {
                cont++;
        }
}
    if (g[vertice][vertice]==1) {
        cont++;
    }
return cont;

}

void DFS (Grafo g, int actual, boolean visitado[CANT_CIUD]) {
int j;

visitado[actual] = TRUE;

for (j = 0; j<CANT_CIUD; j++) {

    if (g[actual][j] == 1) {
        if (!visitado[j]) {
            DFS (g, j, visitado);
        }
    }
}

}





