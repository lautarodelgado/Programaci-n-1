#include "funciones.h"
#include <stdio.h>

void inicializarLibre(ePersona emp[] , int tam)
{
    int i;
    for(i=0 ; i < tam ; i++)
    {
        emp[i].estado = 0;
    }
}

int obtenerEspacioLibre(ePersona lista[] , int tam)
{
    int i;
    int espacio = -1;

    for(i=0 ; i < tam ; i++)
    {
        if(lista[i].estado == 0)
        {
            espacio = i;
            break;
        }
    }
    return espacio;
}


int buscarPorDni(ePersona per[] , int tam , int dni)
{
    int i;
    int indiceDni = -1;
    for(i=0 ; i < tam ; i++)
    {
        if(dni == per[i].dni)
        {
            indiceDni = i;
            break;
        }
    }
    return indiceDni;
}


void agregarPersona(ePersona per[] , int tam)
{
    ePersona nuevaPersona;
    int indice;
    int dni;
    int dniExistente;

    indice = obtenerEspacioLibre(per , tam);

    if(indice == -1)
    {
        printf("LLENO! No se pueden ingresar mas datos.");
        system("pause");
    }
    else
    {
        printf("\nIngrese el DNI: ");
        scanf("%d" , &dni);

        dniExistente = buscarPorDni(per , tam , dni);

        if(dniExistente != -1)
        {
            printf("\nEl DNI %d ya fue cargado en el sistema." , dni);
        }
        else
        {
            nuevaPersona.estado = 1;
            nuevaPersona.dni = dni;

            printf("Ingrese el nombre: ");
            fflush(stdin);
            scanf("%[^\n]" , nuevaPersona.nombre);

            printf("Ingrese la edad: ");
            scanf("%d" , &nuevaPersona.edad);

            per[indice] = nuevaPersona;
        }
        system("\npause");
    }

    //scanf("%d" , &nuevaPersona.dni);
}
