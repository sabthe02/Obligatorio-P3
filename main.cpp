#include <stdio.h>
#include "Ciudades.h"

int main()
{
int numero = 100;
Ciudades c;
Crear(c);
Ciudad nombre;
while (numero !=0) {
        printf("\nIngrese uno de los siguientes numeros: ");
        printf("\n0 - Salir");
        printf("\n1 - Dado el nombre de una ciudad, registrar dicha ciudad en el sistema");
        printf("\n2 - Listar numero y nombre de cada una de las ciudades registradas hasta el momento en el sistema, ordenadas por numero de ciudad de menor a mayor.");
        printf("\n3 - Dados los numeros de dos ciudades, registrar un nuevo tramo de recorrido entre ellas.");
        printf("\n4 - Dados los numeros de dos ciudades, saber si existe alguna secuencia de tramos que las una.");
        printf("\n5 - Dado el codigo alfanumerico de una nueva linea, registrar la correspondiente linea en el sistema.");
        printf("\n6 - Listar los datos basicos de todas las lineas registradas hasta el momento (codigo y cantidad de paradas que posee hasta ahora), ordenadas por código alfanumurico de menor a mayor.");
        printf("\n7 - Dados el codigo alfanumerico de una linea y un número de ciudad, agregar una nueva parada en dicha ciudad a su recorrido.");
        printf("\n8 - Dado el codigo alfanumerico de una linea, listar todas las paradas (numero de parada, numero de ciudad y nombre de ciudad) de su recorrido, ordenadas por número de parada de menor a mayor.\n");
        scanf("%d", &numero);

    switch (numero) {
        case 0: printf("\nSaliendo...");
        break;
        case 1: printf("\n1 - Dado el nombre de una ciudad, registrar dicha ciudad en el sistema");
        cargarCiudad(nombre);
        if (Largo(c)<CANT && !existe(c, nombre)){
            cargarNumeroCiudad(nombre,Largo(c));
            InsFront(c, nombre);

        }
        else {
                if (Largo(c)>=CANT) {
                printf("\nLista de ciudades llena, no es posible registrar nueva ciudad");
                }
                else {
                    printf("\nYa existe una ciudad con el mismo nombre");
                }
        }
        break;
        case 2: printf("\n2 - Listar numero y nombre de cada una de las ciudades registradas hasta el momento en el sistema, ordenadas por número de ciudad de menor a mayor.");
        if (!EsVacia(c)){
            DesplegarArreglo(c);
        }
        else {
            printf("\nNo hay ciudades registradas");
        }
        break;
        case 3: printf("\n3 - Dados los numeros de dos ciudades, registrar un nuevo tramo de recorrido entre ellas.");
        break;
        case 4: printf("\n4 - Dados los numeros de dos ciudades, saber si existe alguna secuencia de tramos que las una.");
        break;
        case 5: printf("\n5 - Dado el codigo alfanumérico de una nueva línea, registrar la correspondiente línea en el sistema.");
        break;
        case 6: printf("\n6 - Listar los datos basicos de todas las líneas registradas hasta el momento (codigo y cantidad de paradas que posee hasta ahora), ordenadas por código alfanumerico de menor a mayor.");
        break;
        case 7: printf("\n7 - Dados el codigo alfanumerico de una línea y un número de ciudad, agregar una nueva parada en dicha ciudad a su recorrido.");
        break;
        case 8: printf("\n8 - Dado el codigo alfanumerico de una línea, listar todas las paradas (numero de parada, número de ciudad y nombre de ciudad) de su recorrido, ordenadas por numero de parada de menor a mayor.");
        break;
    }
}

}
