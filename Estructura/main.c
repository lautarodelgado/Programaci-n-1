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


int main()
{
    eEmpleado unEmpleado; //se puede harcodear pero en el mismo orden en el que esta la estructura

    unEmpleado.legajo = 1234;
    strcpy(unEmpleado.nombre , "Juan");
    unEmpleado.sueldo = 50000.50;
    unEmpleado.sexo = 'f';

    /*
    printf("ingrese legajo");
    scanf("%d" , &unEmpleado.legajo);
    */

    printf("Nombre: %s\n" , unEmpleado.nombre);
    printf("Legajo: %d\n" , unEmpleado.legajo);
    printf("Sueldo: %.2f\n" , unEmpleado.sueldo);
    printf("Sexo: %c\n" , unEmpleado.sexo);
    return 0;
}
