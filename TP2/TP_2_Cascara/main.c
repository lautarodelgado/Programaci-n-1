#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    ePersona persona[2];
    char seguir='s';
    int opcion=0;

    inicializarLibre(persona , 2);

    while(seguir=='s')
    {
        system("cls");
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n");
        printf("5- Salir\n\n");
        printf("Elija lo que quiere hacer: ");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                agregarPersona(persona , 2);
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
