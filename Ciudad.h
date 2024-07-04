#ifndef CIUDAD_H_INCLUDED
#define CIUDAD_H_INCLUDED
#include "String.h"


typedef struct{
				int NumeroCiudad;
				String NombreCiudad;
            }Ciudad;



Ciudad crearCiudad(int nroCiud, String Nombre);

void mostrarNombreCiudad(Ciudad c);

void borrarCiudad(Ciudad &c);

/*Selectoras*/
int darNumeroCiudad (Ciudad c);

String darNombreCiudad (Ciudad c);

#endif // CIUDAD_H_INCLUDED
