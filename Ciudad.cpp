#include "Ciudad.h"

int darNumeroCiudad (Ciudad c) {
return c.NumeroCiudad;

}

String darNombreCiudad (Ciudad c) {
return c.NombreCiudad;

}

void cargarCiudad (Ciudad &c) {
printf("\nIngrese nombre de ciudad: ");
strcrear(c.NombreCiudad);
scan(c.NombreCiudad);

}

void cargarNumeroCiudad (Ciudad &c, int numero) {
c.NumeroCiudad = numero;

}

void desplegarCiudad (Ciudad c) {
printf("\n");
print(c.NombreCiudad);
printf(" - ");
printf("%d", c.NumeroCiudad);


}
