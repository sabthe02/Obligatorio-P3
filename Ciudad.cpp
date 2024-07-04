#include "Ciudad.h"

Ciudad crearCiudad(int nroCiud, String Nombre)
{
    Ciudad c;
    c.NumeroCiudad = nroCiud;
    c.NombreCiudad = Nombre;

    return c;
}

void mostrarNombreCiudad(Ciudad c)
{
    printf("Numero de Ciudad: %d, Nombre: ", c.NumeroCiudad);
    print(c.NombreCiudad);
    printf("\n");

}

void borrarCiudad(Ciudad &c)
{
    strdestruir(c.NombreCiudad);
}

int darNumeroCiudad (Ciudad c)
{
    return c.NumeroCiudad;
}

String darNombreCiudad (Ciudad c)
{
    return c.NombreCiudad;
}
