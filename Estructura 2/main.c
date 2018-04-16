#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nombre[20];
    int legajo;
    float sueldo;
    char sexo;
}eEmpleado;

void mostrarEmpleado(eEmpleado);
void mostrarEmpleados(eEmpleado[] , int);
void ordenarEmpleados(eEmpleado[] , int);

int main()
{
    eEmpleado plantel[] = {{"Juan" , 1234 , 50000.50 , 'm'} , {"Ana" , 222 , 20000 , 'f'} , {"Luis" , 3333 , 30000 , 'm'}};

    /*
    unEmpleado.legajo = 1234;
    strcpy(unEmpleado.nombre , "Juan");
    unEmpleado.sueldo = 50000.50;
    unEmpleado.sexo = 'f';

    printf("ingrese legajo");
    scanf("%d" , &unEmpleado.legajo);
    */

    /*
    printf("Nombre: %s\n" , unEmpleado.nombre);
    printf("Legajo: %d\n" , unEmpleado.legajo);
    printf("Sueldo: %.2f\n" , unEmpleado.sueldo);
    printf("Sexo: %c\n" , unEmpleado.sexo);
    */

    mostrarEmpleados(plantel , 3);
    ordenarEmpleados(plantel , 3);


    return 0;
}

void mostrarEmpleado(eEmpleado emp)
{
    printf("Nombre: %s\n" , emp.nombre);
    printf("Legajo: %d\n" , emp.legajo);
    printf("Sueldo: %.2f\n" , emp.sueldo);
    printf("Sexo: %c\n" , emp.sexo);
}

void mostrarEmpleados(eEmpleado vec[] , int tamanio)
{
    int i;
    for(i=0 ; i < tamanio ; i++)
    {
        mostrarEmpleado(vec[i]);
    }
}

void ordenarEmpleados(eEmpleado vec[] , int tamanio)
{
    int i;
    int j;
    eEmpleado aux;

    for(i=0 ; i < tamanio-1 ; i++)
    {
        for(j=i+1 ; j < tamanio ; j++)
        {
            if(strcmp(vec[i].nombre , vec[j].nombre) > 0)
            {
                aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }
        }
    }
}

