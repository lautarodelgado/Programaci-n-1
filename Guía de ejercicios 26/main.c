#include <stdio.h>
#include <stdlib.h>

int main()
{
    char respuesta;
    int peso;
    int contadorMenos80=0;
    int contadorMas80=0;

    while(respuesta !='S')
    {
        printf("\nIngrese el peso del empleado: ");
        scanf("%d" , &peso);
        //validacion:
        while(peso < 0)
        {
            printf("ERROR: ingrese el peso del empleado: ");
            scanf("%d" , &peso);
        }

        if(peso < 81)
        {
            contadorMenos80++;
        }
        else
        {
            contadorMas80++;
        }

        printf("Escriba S para salir: ");
        respuesta = getche();
        respuesta = toupper(respuesta);
        fflush(stdin);
    }

    printf("\nLa cantidad de empleadas con peso menor o igual a 80 es %d\n" , contadorMenos80);
    printf("\nLa cantidad de empleadas con peso mayor a 80 es %d\n" , contadorMas80);

    return 0;
}
