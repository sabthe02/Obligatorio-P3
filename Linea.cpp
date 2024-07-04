#include "Linea.h"

String darCodigoLinea (Linea l) {
return l.CodigoLinea;
}

int darCantidadParadas (Linea l) {
return l.CantidadParadas;
}

Paradas darParadas (Linea l) {
return l.Paradas;

}

void cargarLinea (Linea &l) {
printf("\nIngrese codigo de linea: ");
String s;
strcrear(s);
scan(s);
l.CodigoLinea = s;
delete s;
l.CantidadParadas = 0;
Make (l.Paradas);

}

void desplegarLinea (Linea l) {
print(l.CodigoLinea);
printf(" - ");
printf("\nCantidad de paradas: %d", l.CantidadParadas);
printf("\nParadas: ");
Desplegar(l.Paradas);
}
