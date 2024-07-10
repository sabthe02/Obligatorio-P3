#include "Paradas.h"

void Crear (Paradas &L)
{
    L.prim = NULL;
    L.ult  = NULL;
}


void Insback (Paradas &L, Ciudad e)
{
    Nodo * nuevo = new Nodo;
    nuevo -> info = e;
    nuevo -> sig = NULL;

    if (L.ult == NULL)
    {
        L.ult = nuevo;
        L.prim = nuevo;
    }
    else
    {
        L.ult -> sig = nuevo;
        L.ult = nuevo;
    }
}

//void Insfront (Paradas &L, Ciudad e) {
//    Nodo * nuevo = new Nodo;
//    nuevo -> info = e;
//    nuevo -> sig = L.prim;
//    L.prim = nuevo;
//    if (L.ult == NULL) {
//        L.ult = nuevo;
//    }
//}

boolean EsVacia (Paradas L)
{
    boolean es = FALSE;
    if ((L.prim == NULL) && (L.ult == NULL))
    {
        es = TRUE;
    }
    return es;
}


Ciudad Primero (Paradas L)
{
    return (L.prim -> info);
}


void Resto (Paradas &L)
{
    Nodo * aux = L.prim -> sig;
    delete (L.prim);
    L.prim = aux;
    if (L.prim == NULL);
    L.ult = NULL;
}


Ciudad Back (Paradas L)
{
    return (L.ult->info);

}

Ciudad Kesimo (Paradas L, int K)
{
    int i = 0;
    while(i<=K)
    {
        L.prim = L.prim->sig;
        i++;
    }

    return L.prim->info;
}

int Largo(Paradas L)
{
    int i = 0;
    while(L.prim != NULL)
    {
        L.prim = L.prim->sig;
        i++;
    }

    return i;
}

void imprimirParadasP (Paradas p)
{
    while(p.prim != NULL)
    {
        mostrarNombreCiudad(p.prim->info);
        p.prim = p.prim->sig;
    }
}

void Eliminar(Paradas &p)
{
    while(p.prim != NULL)
    {
        Resto(p);
    }
}


