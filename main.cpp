#include <stdio.h>
#include "Ciudades.h"
#include "Grafo.h"
#include "Lineas.h"

void imprimirMenu()
{
    printf("*********** MENU PRINCIPAL ***********");
    printf("\n\n\n");
    printf("1 - Registrar una ciudad. \n");
    printf("2 - Listar ciudades. \n");
    printf("3 - Registrar nuevo tramo. \n");
    printf("4 - Verificar si existe un tramo entre dos ciudades. \n");
    printf("5 - Agregar nueva linea. \n");
    printf("6 - Listar datos de todas las lineas. \n");
    printf("7 - Agregar parada en una linea. \n");
    printf("8 - Listar paradas de una linea. \n");
    printf("\n\n\n");
    printf("0 - Salir. \n");
    printf("\n\n");
    printf("Opcion elegida: ");
}

void Opcion1(Ciudades &ciud)
{

    if(EstaLlena(ciud) == FALSE)
    {
        String nomAux;
        strcrear(nomAux);

        printf("Ingrese el nombre de una ciudad: ");
        scan(nomAux);

        if(Existe(ciud, nomAux) == FALSE)
        {
            InsBack(ciud, nomAux);
            printf("Se agrega la ciudad correctamente. \n\n");
        }
        else
        {
            printf("El nombre de la ciudad ya esta registrado.\n\n");
        }

        strdestruir(nomAux);
    }
    else
    {
        printf("No existen mas lugares libres para agregar ciudades.\n\n");
    }


}

void Opcion2(Ciudades c)
{
    Listar(c);
}

void Opcion3(Ciudades c, Grafo &graf)
{

    int ciudad1, ciudad2;
    char t, t2;

    printf("Ingrese el codigo de la ciudad 1: ");
    if ((scanf("%d%c", &ciudad1, &t) ==2) && (t='\n'))
    {

        if(ciudad1>=0)
        {

            if(ciudad1<Largo(c))
            {
                printf("Ingrese el codigo de la ciudad 2: ");
                if ((scanf("%d%c", &ciudad2, &t2) ==2) && (t2='\n'))
                {

                    if(ciudad2>=0)
                    {

                        if(ciudad2<Largo(c))
                        {

                            if(ciudad1 != ciudad2)
                            {
                                if(PerteneceArista(graf, ciudad1, ciudad2) == FALSE)
                                {
                                    InsertarArista(graf, ciudad1,ciudad2);
                                    printf("Se creo el tramo correctamente.\n\n");
                                }
                                else
                                {
                                    printf("Ya existe una ruta que une las ciudades. \n\n");
                                }

                            }
                            else
                            {
                                printf("Las ciudades no pueden ser iguales.\n\n");
                            }


                        }
                        else
                        {
                            printf("El codigo de la ciudad 2 ingresado excede las ciudades registradas (no hay ciudad con ese codigo).\n\n");
                        }
                    }
                    else
                    {
                        printf("El codigo de la ciudad 2 ingresado no es valido (menor a 0).\n\n");
                    }
                }
                else
                {
                    printf("\nEl codigo de la ciudad 2 debe ser un numero entero seguido de enter. \n\n");
                }
            }
            else
            {
                printf("El codigo de la ciudad 1 ingresada excede las ciudades registradas (no hay ciudad con ese codigo).\n\n");
            }
        }
        else
        {
            printf("El codigo de la ciudad 1 ingresada no es valido (menor a 0).\n\n");
        }
    }
    else
        {
        printf("\nEl codigo de la ciudad 1 debe ser un numero entero seguido de enter. \n\n");
        }

}

void Opcion4(Ciudades c, Grafo graf)
{
    int ciudad1, ciudad2;
    char t3, t4;

    printf("Ingrese el codigo de la ciudad 1: ");
    if (scanf("%d%c", &ciudad1, &t3) ==2 && (t3=='\n')) {

        if(ciudad1>=0)
        {

            if(ciudad1<Largo(c))
            {
                printf("Ingrese el codigo de la ciudad 2: ");
                if (scanf("%d%c", &ciudad2, &t4)==2 && (t4=='\n')) {

                    if(ciudad2>=0)
                    {

                        if(ciudad2<Largo(c))
                        {
                            if(ciudad1 != ciudad2)
                            {
                                if(buscarRuta(graf, ciudad1, ciudad2) == TRUE)
                                {
                                    printf("Existe un tramo entre las ciudades.\n\n");
                                }
                                else
                                {
                                    printf("No existe un tramo entre las ciudades.\n\n");
                                }
                            }
                            else
                            {
                                printf("Las ciudades no pueden ser iguales.\n\n");
                            }
                        }
                        else
                        {
                            printf("El codigo de la ciudad 2 ingresada excede las ciudades registradas (no hay ciudad con ese codigo).\n\n");
                        }
                    }
                    else
                    {
                        printf("El codigo de la ciudad 2 ingresada no es valido (menor a 0).\n\n");
                    }
                }
                else
                {
                    printf("\nEl codigo de la ciudad 2 debe ser un numero entero seguido de enter. \n\n");
                }
            }
            else
            {
                printf("El codigo de la ciudad 1 ingresada excede las ciudades registradas (no hay ciudad con ese codigo).\n\n");
            }
        }
        else
        {
            printf("El codigo de la ciudad 1 ingresada no es valido (menor a 0).\n\n");
        }
    }
    else
    {
        printf("\nEl codigo de la ciudad 1 debe ser un numero entero seguido de enter. \n\n");
    }
}

void Opcion5(Lineas &lineas)
{
    Linea aux;
    cargarLinea(aux);

    if (Member(lineas, darCodigoLinea(aux)) == FALSE)
    {
        Insert(lineas,aux);
        printf("\nLinea agregada con exito\n\n");
    }
    else
    {
        Eliminar(aux);
        printf("\nYa existe una linea con el mismo codigo\n\n");
    }


}

void Opcion6 (Lineas lineas)
{

    if (!Vacio(lineas))
    {
        DesplegarLineas(lineas);
        printf("\n");
    }
    else
    {
        printf("\nNo hay lineas registradas, por favor ingresar primero\n\n");
    }
}

void Opcion7 (Lineas &lineas, Ciudades ciudades, Grafo grafo)
{
    if (Vacio(lineas) ==FALSE){
        boolean agregar;
        String num;
        int codigo;
        char te;
        strcrear(num);

        if (EstaLlena(ciudades)==TRUE)
        {

            printf("\nIngrese un codigo de linea para agregar una parada a su recorrido: ");
            scan(num);



            if (Member(lineas,num) == TRUE)
            {
                printf("\nIngrese numero de ciudad para agregar una parada en esa ciudad: ");
                if (scanf("%d%c", &codigo, &te)==2 && (te=='\n')){

                    if(codigo >=0 && Largo(ciudades) > codigo)
                    {

                        agregar = TRUE;

                        if (Empty(darParadas(Find(lineas,num))) == FALSE)
                        {

                                if (buscarRuta(grafo, codigo, darNumeroCiudad(Back(darParadas(Find(lineas,num))))) == FALSE)
                                {

                                    agregar = FALSE;
                                    printf("\nNo existe ruta entre la ciudad y el destino de la linea a agregar\n\n");
                                }

                        }
                        else
                        {
                            agregar = TRUE;
                        }
                        if(agregar == TRUE)
                        {
                            agregarParadaALineas(lineas,num,Kesimo(ciudades,codigo));
                            printf("Se agrego la parada indicada.\n\n");
                        }
                    }
                    else
                    {
                        printf("\nNo existe la ciudad ingresada en el registro de ciudades\n\n");
                    }
                }
                else
                {
                    printf("\nEl codigo de la ciudad debe ser un numero entero seguido de enter. \n\n");
                }

            }
            else
            {
                printf("\nNo existe una linea con ese codigo\n\n");
            }
        }
        else
        {
            printf("\nNo se han ingresado todas las ciudades todavia, ingrese todas primero\n\n");
        }
    }
    else
    {
        printf("\nNo hay lineas ingresadas todavia, por favor ingresar primero\n\n");
    }

}

void Opcion8(Lineas lineas)
{
    if (Vacio(lineas)== FALSE)
    {
        String codigoLinea;
        strcrear(codigoLinea);

        printf("Ingrese el codigo de la linea: ");
        scan(codigoLinea);

        if(Member(lineas, codigoLinea) == TRUE)
        {
            imprimirRecorrido(lineas, codigoLinea);
        }
        else
        {
            printf("El codigo de linea ingresado no existe. \n\n");
        }
    }
    else
    {
        printf("\nNo hay lineas ingresadas todavia, por favor ingresar primero\n\n");
    }
}

int main()
{
    Ciudades ciudades;
    Crear(ciudades);

    Grafo grafo;
    Crear(grafo);

    Lineas lineas;
    Make(lineas);


    int opcion;
    char term;
    boolean error;
    do
    {
        imprimirMenu();
        fflush(stdin);
        if (scanf("%d%c", &opcion, &term) == 2 && term == '\n')
        {
            error = FALSE;
            switch(opcion)
            {
            case 1:
            {
                Opcion1(ciudades);
                break;
            }
            case 2:
            {
                Opcion2(ciudades);
                break;
            }
            case 3:
            {
                Opcion3(ciudades, grafo);
                break;
            }
            case 4:
            {
                Opcion4(ciudades, grafo);
                break;
            }
            case 5:
            {
                Opcion5(lineas);
                break;
            }
            case 6:
            {
                Opcion6(lineas);
                break;
            }
            case 7:
            {
                Opcion7(lineas, ciudades, grafo);
                break;
            }
            case 8:
            {
                Opcion8(lineas);
                break;
            }
            case 0:
            {

                printf("\nSaliendo...");
                break;
            }
            default:
            {
                printf("La opcion ingresada no es correcta. \n\n");
                break;
            }
            }
        }
        else
        {
            printf("Por favor ingrese un numero entero segun el menu, seguido de enter\n\n");
            error = TRUE;
        }
    } while(opcion != 0 || (error ==TRUE));

    Eliminar(ciudades);
    Eliminar(lineas);



    return 0;
}
