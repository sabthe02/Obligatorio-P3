#ifndef CIUDAD_H_INCLUDED
#define CIUDAD_H_INCLUDED
#include "String.h"


typedef struct{
				int NumeroCiudad;
				String NombreCiudad;
            }Ciudad;


// Crear una nueva ciudad
Ciudad crearCiudad(int nroCiud, String Nombre);

//Desplegar Nombre Ciudad
void mostrarNombreCiudad(Ciudad c);

//Eliminar String de NombreCiudad
void borrarCiudad(Ciudad &c);

/*Selectoras*/
int darNumeroCiudad (Ciudad c);

String darNombreCiudad (Ciudad c);

#endif // CIUDAD_H_INCLUDED
