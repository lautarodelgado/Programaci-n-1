#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int menu()
{
    int opcion;
    system("cls");
    printf("1 - ALTA.\n");
    printf("2 - BAJA.\n");
    printf("3 - MODIFICACION.\n");
    printf("4 - LISTAR.\n");
    printf("5 - ORDENAR.\n");
    printf("6 - SALIR.\n");

    printf("\nElija lo que quiere hacer: ");
    scanf("%d" , &opcion);

    return opcion;
}

void inicializarEmpleados(eEmpleado emp[] , int tam)
{
    int i;

    for(i=0 ; i < tam ; i++)
    {
        emp[i].isEmpty = 1;
    }
}


int buscarLibre(eEmpleado emp[] , int tam)
{
    int i;
    int indiceVacio = -1;

    for(i=0 ; i < tam ; i++)
    {
        if(emp[i].isEmpty == 1)
        {
            indiceVacio = i;
            break;
        }
    }

    return indiceVacio;
}



void alta(eEmpleado emp[], int tam)
{
    int i;
    int libre;
    int legajo;
    int leg;

    for(i=0 ; i < tam ; i++)
    {
        libre = buscarLibre(emp , tam);
        if(libre == -1)
        {
            printf("Lleno");
        }
        else
        {
            printf("Legajo: ");
            scanf("%d" , &legajo);

            leg = buscarEmpleado(emp , tam , legajo);
            {
                if(leg != -1)
                {
                    printf("El legajo ya existe");
                    break;
                }
                else
                {

                    printf("Nombre: ");
                    fflush(stdin);
                    scanf("%s", emp[i].nombre);

                    printf("Salario: ");
                    scanf("%f", &emp[i].sueldo);

                    printf("Sexo: ");
                    fflush(stdin);
                    scanf("%c" , &emp[i].sexo);

                    printf("Dia: ");
                    scanf("%d", &emp[i].fechaIngreso.dia);

                    printf("Mes: ");
                    scanf("%d", &emp[i].fechaIngreso.mes);

                    printf("Año: ");
                    scanf("%d", &emp[i].fechaIngreso.anio);

                    emp[i].isEmpty = 0;
                    emp[i].legajo = legajo;
                    break;
                }
            }
        }

    }

    /*
    for(i=0; i<tam; i++)
    {
        if(emp[i].isEmpty == 1)
        {

            printf("Legajo: ");
            scanf("%d", &emp[i].legajo);

            printf("Nombre: ");
            fflush(stdin);
            scanf("%s", emp[i].nombre);

            printf("Salario: ");
            scanf("%f", &emp[i].sueldo);

            printf("Sexo: ");
            fflush(stdin);
            scanf("%c" , &emp[i].sexo);

            printf("Dia: ");
            scanf("%d", &emp[i].fechaIngreso.dia);

            printf("Mes: ");
            scanf("%d", &emp[i].fechaIngreso.mes);

            printf("Año: ");
            scanf("%d", &emp[i].fechaIngreso.anio);

            emp[i].isEmpty = 0;

            break;
        }
    }
    */
}


void listar(eEmpleado emp[], int tam)
{
    int i;

    printf("Legajo:\tNombre:\tSexo:\tFechaIng:\tSalario:\n\n");

    for(i=0; i < tam; i++)
    {
        if(emp[i].isEmpty == 0)
        {
            printf("%d\t%s\t%c\t%d/%d/%d\t\t%.2f\n", emp[i].legajo, emp[i].nombre, emp[i].sexo, emp[i].fechaIngreso.dia, emp[i].fechaIngreso.mes, emp[i].fechaIngreso.anio, emp[i].sueldo);
        }
    }
}


int buscarEmpleado(eEmpleado emp[] , int tam , int legajo)
{
    int i;
    //int legajoIngresado;
    int legajoIndice = -1;

    //printf("Ingrese un legajo a buscar: ");
    //scanf("%d" , &legajoIngresado);

    for(i=0 ; i < tam ; i++)
    {
        if(legajo == emp[i].legajo)
        {
            legajoIndice = i;
            break;
        }
    }
    return legajoIndice;
}
