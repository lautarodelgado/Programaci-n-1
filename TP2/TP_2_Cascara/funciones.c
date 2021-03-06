#include "funciones.h"
#include <stdio.h>
#include <string.h>

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

void mostrarDato(ePersona per)
{
    printf("DNI:\tNOMBRE:\tEDAD:\n");
    printf("%d\t%s\t%d\n" , per.dni ,per.nombre , per.edad);
}


void ordenarPorNombre(ePersona per[] , int tam)
{
    int i;
    int j;
    ePersona aux;

    printf("DNI:\tNOMBRE:\tEDAD:\n");
    for(i=0 ; i < tam-1 ; i++)
    {
        for(j=i+1 ; j < tam ; j++)
        {
            if((strcmp(per[i].nombre , per[j].nombre) > 0))
            {
                aux = per[i];
                per[i] = per[j];
                per[j] = aux;
            }
        }
    }
}


void mostrarPersonas(ePersona per[] , int tam)
{
    ordenarPorNombre(per , tam);
    int i;

    for(i=0 ; i < tam ; i++)
    {
        if(per[i].estado == 1)
        {
            printf("%d\t%s\t%d\n" , per[i].dni , per[i].nombre , per[i].edad);
        }
    }
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
            printf("\nEl DNI %d ya fue cargado en el sistema.\n" , dni);
            mostrarDato(per[dniExistente]);
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
        system("\npause\n");
    }
}

void borrarPersona(ePersona per[] , int tam)
{
    int dni;
    char respuesta;
    int dniExistente;
    ePersona nuevaPersona;

    printf("Ingrese el DNI de la persona que quiere borrar: ");
    scanf("%d" , &dni);

    dniExistente = buscarPorDni(per , tam , dni);
    if(dniExistente == -1)
    {
        printf("EL DNI %d nunca fue ingresado en el sistema.\n" , dni);
        system("pause");
    }
    else
    {
        printf("Esta seguro que desea borrar los datos de la siguiente persona? [s/n]\n");
        mostrarDato(per[dniExistente]);
        fflush(stdin);
        scanf("%c" , &respuesta);
        while(respuesta != 'n' && respuesta != 's')
        {
            printf("Error. Ingrese s/n.");
            fflush(stdin);
            scanf("%c" , &respuesta);
        }
        if(respuesta == 'n')
        {
            printf("Baja cancelada.\n");
            system("pause");
        }
        else
        {
            nuevaPersona.estado = 0;
            per[dniExistente].estado = nuevaPersona.estado;
            printf("Baja exitosa.");
            system("pause");
        }
    }

}
