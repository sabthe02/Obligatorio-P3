#include "Lineas.h"


void Make (Lineas &a)
{
    a = NULL;
}

boolean Vacio (Lineas a)
{
    boolean es;

    if (a == NULL)
    {
        es = TRUE;
    }
    else
    {
        es = FALSE;
    }
    return es;
}


void Insert (Lineas &a, Linea valor)
{

    if (a == NULL)
    {
        a = new nodo;
        a->info = valor;
        a->hizq = NULL;
        a->hder = NULL;
    }
    else
    {
        if (strmen(darCodigoLinea(valor),darCodigoLinea(a->info)))
        {
            Insert (a->hizq, valor);
        }
        else
        {
            Insert (a->hder, valor);
        }
    }

}


boolean Member (Lineas a, String valor)
{
    if (a == NULL)
    {
        return FALSE;

    }
    else
    {
        if (streq(valor,darCodigoLinea(a->info))==TRUE)
        {
            return TRUE;
        }
        else
        {
            if (strmen(valor,darCodigoLinea(a->info))==TRUE)
            {
                return Member (a->hizq, valor);
            }
            else
            {
                return Member (a->hder, valor);
            }
        }
    }


}


Linea Find (Lineas a, String valor)
{

    if (a!=NULL)
    {
        if (streq(darCodigoLinea(a->info),valor)==TRUE)
        {
            return a->info;
        }
        else
        {
            if (strmen(valor, darCodigoLinea(a->info))==TRUE)
            {
                return Find(a->hizq, valor);
            }
            else
            {
                return Find(a->hder, valor);
            }
        }
    }
}

void Modify (Lineas &a, Linea viejo, Linea nuevo)
{

    if (a!=NULL)
    {
        if (streq(darCodigoLinea(a->info),darCodigoLinea(viejo))== TRUE)
        {
            a->info = nuevo;
        }
        else
        {
            if (strmen(darCodigoLinea(viejo),darCodigoLinea(a->info))==TRUE)
            {
                Modify(a->hizq, viejo, nuevo);
            }
            else
            {
                Modify (a->hder, viejo, nuevo);
            }
        }
    }

}

void Delete (Lineas &a, Linea valor)
{

    Lineas aux;

    if (streq(darCodigoLinea(a->info),darCodigoLinea(valor))== TRUE)
    {
        if (a -> hder == NULL)
        {
            aux = a -> hizq;
            delete a;
            a = aux;
        }
        else
        {
            if (a -> hizq == NULL)
            {
                aux = a -> hder;
                delete a;
                a = aux;
            }
            else
            {
                a -> info = Minimo (a -> hder);
                Borrar_Minimo (a -> hder);
            }
        }
    }
    else
    {
        if (strmen(darCodigoLinea(valor),darCodigoLinea(a->info))==TRUE)
        {
            Delete (a -> hizq, valor);
        }
        else
        {
            Delete (a -> hder, valor);
        }
    }


}

void Borrar_Minimo (Lineas &a)
{
    Lineas aux;
    if (a -> hizq == NULL)
    {
        aux = a -> hder;
        delete a;
        a = aux;
    }
    else
    {
        Borrar_Minimo (a -> hizq);
    }
}

Linea Minimo (Lineas a)
{
    while (a -> hizq != NULL)
    {
        a = a -> hizq;
    }
    return (a->info);
}

void DesplegarLineas (Lineas a)
{
    if (a!=NULL)
    {
        DesplegarLineas(a->hizq);
        desplegarLineaBasico(a->info);
        DesplegarLineas(a->hder);
    }
}


void agregarParadaALineas (Lineas &a, String codigo, Ciudad c)
{
    if (a!=NULL)
    {
        if (streq(darCodigoLinea(a->info),codigo)==TRUE)
        {
            agregarParadaALinea(a->info,c);
        }
        else
        {
            if (strmen(codigo, darCodigoLinea(a->info))==TRUE)
            {
                agregarParadaALineas(a->hizq, codigo, c);
            }
            else
            {
                agregarParadaALineas(a->hder, codigo, c);

            }
        }
    }
}

void imprimirRecorrido(Lineas l, String codigoLinea)
{
    Linea laux = Find(l, codigoLinea);

    imprimirParadas(laux);
}


void Eliminar(Lineas &a)
{
    if (a != NULL)
    {
        Eliminar (a -> hizq);
        Eliminar (a -> hder);

        Eliminar(a->info);
        delete a;

    }
}
