#include "Paradas.h"

void Make (Paradas &L)
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

boolean Empty (Paradas L)
{
    boolean es = FALSE;
    if ((L.prim == NULL) && (L.ult == NULL))
    {
        es = TRUE;
    }
    return es;
}


Ciudad Front (Paradas L)
{
    return (L.prim -> info);
}


void RemFront (Paradas &L)
{
    Nodo * aux = L.prim -> sig;
    borrarCiudad(L.prim->info);
    delete (L.prim);
    L.prim = aux;
    if (L.prim == NULL);
    L.ult = NULL;
}

Ciudad Back (Paradas L)
{
    return (L.ult->info);

}

void Desplegar(Paradas L)
{
    while (L.prim!=NULL)
    {
        print(darNombreCiudad(L.prim->info));
        printf(" - ");
        L.prim = L.prim->sig;
    }

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
        RemFront(p);
    }
}


