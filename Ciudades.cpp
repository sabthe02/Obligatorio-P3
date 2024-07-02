#include "Ciudades.h"


void Crear (Ciudades &ad) {
ad.tope = 0;
}

void InsFront (Ciudades &ad, Ciudad elemento) {
ad.arre[ad.tope] = elemento;
ad.tope++;
}

boolean EsVacia (Ciudades ad) {
if (ad.tope == 0) {
    return TRUE;
}
else {
    return FALSE;
}
}

Ciudad Primero (Ciudades ad) {
return ad.arre[0];

}

void Resto (Ciudades &ad) {

ad.arre[0] = ad.arre[ad.tope-1];
ad.tope--;

}

int Largo (Ciudades ad) {
return ad.tope;

}

Ciudad Kesimo (Ciudades ad, int k) {

return ad.arre[k];

}
