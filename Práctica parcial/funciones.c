#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int menu()
{
    int opcion;

    system("cls");
    printf("---ABM Pantallas---\n\n");
    printf("1-Alta\n");
    printf("2-Baja\n");
    printf("3-Modificar\n");
    printf("4-Listar\n");
    printf("5-Alta publicidad.\n");
    printf("6-Listar pantallas con publicidades.\n");
    printf("7-Salir\n");
    printf("\nIndique opcion: ");
    scanf("%d", &opcion);

    return opcion;
}

void inicializarPantalla (ePantalla vec[], int tam)
{
    int i;

    for(i=0; i< tam; i++)
    {
        vec[i].estado = 0;
    }
}


void mostrarPantallas(ePantalla vec[], int tam)
{
    int i;

    system("cls");
    printf("---Lista de Pantallas---\n\n");
    printf("ID:\t\tPantalla:\tNombre:\tDireccion: \n\n");
    for(i=0; i< tam; i++)
    {
        if(vec[i].estado == 1)
        {
            printf("%d\t\t%s\t\t%s\t\t%s\n" , vec[i].id , vec[i].pantalla , vec[i].nombre , vec[i].direccion);
        }
    }
}


/*
void mostrarPantalla(ePantalla emp)
{
    printf("  %4d     %s     %c  %10.2f    %02d/%02d/%4d \n", emp.legajo, emp.nombre, emp.sexo, emp.sueldo, emp.fechaIngreso.dia, emp.fechaIngreso.mes, emp.fechaIngreso.anio );
}
*/

int buscarLibre(ePantalla vec[], int tam)
{
    int indice = -1;
    int i;

    for(i=0; i < tam; i++)
    {
        if(vec[i].estado == 0)
        {
            indice = i;
            break;
        }
    }
    return indice;
}


int buscarPantalla(ePantalla vec[], int tam, int id)
{
    int indice = -1;
    int i;

    for(i=0; i < tam; i++)
    {
        if(vec[i].estado !=0 && vec[i].id == id)
        {
            indice = i;
            break;
        }
    }
    return indice;
}


void altaPantalla(ePantalla vec[], int tam)
{

    ePantalla nuevaPantalla;
    int indice;
    int esta;
    int legajo;

    system("cls");
    printf("---Alta Pantalla---\n\n");

    indice = buscarLibre(vec, tam);

    if(indice == -1)
    {
        printf("\nEl sistema esta completo. No se puede dar de alta a pantallas nuevos.\n\n");
    }
    else
    {
        nuevaPantalla.id = indice + 1;

        nuevaPantalla.estado = 1;

        printf("Ingrese el tipo de pantalla (LCD o LED)");
        fflush(stdin);
        gets(nuevaPantalla.pantalla);
        while(strcmp("LCD" , nuevaPantalla.pantalla) != 0 && strcmp("LED" , nuevaPantalla.pantalla) != 0)
        {
            printf("No es un tipo de pantalla valido. Reingrese.");
            gets(nuevaPantalla.pantalla);
        }

        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(nuevaPantalla.nombre);

        printf("Ingrese direccion: ");
        fflush(stdin);
        gets(nuevaPantalla.direccion);

        vec[indice] = nuevaPantalla;

        printf("\nSu ID es %d. Alta exitosa!!!\n\n" , nuevaPantalla.id);

    }


}


void bajaPantalla(ePantalla vec[], int tam)
{
int id;
int esta;
char confirma;

system("cls");
printf("---Baja Pantalla---\n\n");

   printf("Ingrese id: ");
        scanf("%d", &id);

        esta = buscarPantalla(vec, tam, id);

        if(esta == -1)
        {
            printf("\nEl id %d no se encuentra en el sistema\n\n", id);

        }

        else
        {

                //mostrarEmpleado(vec[esta]);

            do
            {
                printf("\nConfirma baja? [s|n]: ");
                fflush(stdin);
                scanf("%c", &confirma);
                confirma = tolower(confirma);
            }
            while(confirma != 's' && confirma != 'n');

            if(confirma == 's')
            {
                vec[esta].estado = 0;
                printf("\nSe ha realizado la baja\n\n");
            }
            else
            {
                printf("\nSe ha cancelado la baja\n\n");
            }

        }
}



void modificaPantalla(ePantalla vec[], int tam){
    ePantalla nuevaPantalla;
    int id;
    int esta;
    char confirma;
    int salir = 0;

    system("cls");
    printf("---Modificar Pantalla---\n\n");

   printf("Ingrese id: ");
        scanf("%d", &id);

        esta = buscarPantalla(vec, tam, id);

        if(esta == -1)
        {
            printf("\nEl id %d no se encuentra en el sistema\n\n", id);

        }
        else{

                //mostrarEmpleado(vec[esta]);

        do{
            printf("\nConfirma modificacion? [s|n]: ");
            fflush(stdin);
            scanf("%c", &confirma);
            confirma = tolower(confirma);
        }while(confirma != 's' && confirma != 'n');

        if(confirma == 's'){
            do{
                switch(menuModifica()){
                    case 1:
                        printf("Ingrese el nuevo tipo de pantalla: ");
                        gets(nuevaPantalla.pantalla);
                        strcpy(vec[esta].pantalla , nuevaPantalla.pantalla);
                        break;
                    case 2:
                        printf("Ingrese el nuevo nombre: ");
                        fflush(stdin);
                        gets(nuevaPantalla.nombre);
                        strcpy(vec[esta].nombre , nuevaPantalla.nombre);
                        break;
                    case 3:
                        printf("Ingrese la nueva direccion: ");
                        fflush(stdin);
                        gets(nuevaPantalla.direccion);
                        strcpy(vec[esta].direccion , nuevaPantalla.direccion);
                        break;
                    case 7:
                        salir = 1;
                        break;
                }

            }while(salir != 1);
            printf("\nSe ha realizado la modificacion\n\n");
        }
        else{
            printf("\nSe ha cancelado la modificacion\n\n");
        }

        }
}


int menuModifica()
{
    int opcion;

    system("cls");
    printf("---Modificar Empleados---\n\n");
    printf("1-Pantalla.\n");
    printf("2-Nombre.\n");
    printf("3-Direccion.\n");
    printf("7-Salir\n");
    printf("\nIndique opcion: ");
    scanf("%d", &opcion);

    return opcion;
}



void altaPublicidad(ePublicidad pub[] , int tama)
{
    int indice;
    ePublicidad publicidad;

    indice = indicePublicidad(pub , tama);

    if(indice == -1)
    {
        printf("No se pueden ingresar mas publicidades.");
        system("pause");
    }
    else
    {
        publicidad.estado = 1;
        printf("Ingrese el ID de la pantalla a agregar publicidad: ");
        scanf("%d" , &publicidad.idPantalla);

        printf("Ingrese cuit: ");
        scanf("%d" , &publicidad.cuit);

        printf("Ingrese dias: ");
        scanf("%d" , &publicidad.dias);

        printf("Ingrese nombre del archivo: ");
        fflush(stdin);
        gets(publicidad.nombreArchivo);

        pub[indice] = publicidad;

    }


}


void inicializarPublicidad(ePublicidad pub[] , int tamanio)
{
    int i;
    for(i=0 ; i < tamanio ; i++)
    {
        pub[i].estado = 0;
    }
}

int indicePublicidad(ePublicidad pub[] , int tamanio)
{
    int indice = -1;
    int i;

    for(i=0 ; i < tamanio ; i++)
    {
        if(pub[i].estado == 0)
        {
            indice = i;
            break;
        }
    }
    return indice;
}
void mostrarPantallasYPublicidades(ePantalla vec[] , ePublicidad pub[] , int tam , int tamanio)
{
    int i;
    int j;

    for(i=0 ; i < tam ; i++)
    {
        for(j=0 ; j < tamanio ; j++)
        {
            if(pub[j].idPantalla == vec[i].id)
            {

                //printf("si");
                printf("%d\n" , vec[i].id);
                printf("%d\n" , pub[j].idPantalla);
            }
        }
    }
}
