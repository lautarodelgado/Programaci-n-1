#include <stdio.h>
#include <stdlib.h>
#define CANT 5

int main()
{
    int vec[CANT];
    int i;
    int max;
    char respuesta;
    int indiceMaximo;

    printf("Dias del mes:\n");
    for(i=0 ; i < CANT ; i++)
    {
        scanf("%d" , &vec[i]);
        while(vec[i] < 0)
        {
            printf("ERROR.\n");
            scanf("%d" , &vec[i]);
        }

    }

    if(max = vec[0])
    {
        indiceMaximo = 1;
    }
    for(i=0 ; i < CANT ; i++)
    {
        if(vec[i] > max)
        {
            max = vec[i];
            indiceMaximo = i+1;
        }
    }
    printf("\nLa compra maxima es en el dia %d y fue de $ %d\n", indiceMaximo, max);
    return 0;
}



/*
        printf("Ingrese 'S' para ingresar otro valor en el mismo dia:");
        scanf("%c" , &respuesta);
        respuesta = tolower(respuesta);
        while(respuesta = 's')
        {
            scanf("%d" , &vec[i]);
            while(vec[i] < 0)
            {
                printf("ERROR.\n");
                scanf("%d" , &vec[i]);
            }
        }
*/
