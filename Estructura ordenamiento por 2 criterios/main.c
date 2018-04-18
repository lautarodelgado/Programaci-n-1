#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia, mes, anio;
}eFecha;

typedef struct
{
    char nombre[21];
    int legajo;
    float sueldo;
    char sexo;
    eFecha fn; //fn = fecha de nacimiento
}eEmpleado;


int main()
{
    eEmpleado emp;
    emp.nombre;
    printf("Hello world!\n");
    return 0;
}
