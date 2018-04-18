#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANT 3

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
    int i;
    int j;
    eEmpleado emp[CANT];

    eEmpleado aux; //porque el auxiliar tiene que ser el mismo tipo de dato, es decir, estructura

    for(i = 0 ; i < CANT - 1 ; i++)
    {
        for(j = i+1 ; j < CANT ; j++)
        {
            if(emp[i].sueldo < emp[j].sueldo)
            {
                aux = emp[i];
                emp[i] = emp[j];
                emp[j] = aux;
            }
            else
            {
                if(emp[i].sueldo == emp[j].sueldo)
                {
                    if(strcmp(emp[i].nombre , emp[j].nombre) > 0)
                    {
                        aux = emp[i];
                        emp[i] = emp[j];
                        emp[j] = aux;
                    }
                }
            }
        }
    }

    /*
    emp.nombre;
    emp.legajo;
    emp.sueldo;
    emp.sexo;
    emp.fn.dia;
    emp.fn.mes;
    emp.fn.anio;
    */
    printf("Hello world!\n");
    return 0;
}
