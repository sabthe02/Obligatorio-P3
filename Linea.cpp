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
l.CantidadParadas = 0;
Make (l.Paradas);

}

void agregarParadaALinea (Linea &l, Ciudad c) {
   Insback(l.Paradas,c);
   l.CantidadParadas++;

}

void desplegarLineaBasico (Linea l) {

printf("\nCodigo de linea: ");
print(l.CodigoLinea);
printf("\nCantidad de paradas: %d", l.CantidadParadas);
printf("\n");
}
