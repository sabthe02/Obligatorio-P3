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

boolean existe (Ciudades ad, Ciudad ciudad) {
int i = 0;
boolean encontre = FALSE;

while (i<ad.tope && !encontre) {
    if (streq(darNombreCiudad(ad.arre[i]),darNombreCiudad(ciudad)) == TRUE) {
        encontre = TRUE;
    }
    else {
        i++;
    }
}
return encontre;

}

void DesplegarArreglo(Ciudades ad) {
int i = 0;
while (i<ad.tope) {
    desplegarCiudad(ad.arre[i]);
    i++;
}

}
