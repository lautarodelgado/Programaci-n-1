#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define TAM 5

int main()
{
    int x[TAM];
    int i;

    printf("Ingrese 5 numeros: \n");
    for(i=0 ; i < TAM ; i++)
    {
        scanf("%d" , &x[i]);
    }

    printf("\nLos numeros ordenados de menor a mayor son: \n");
    ordenar(x , 5);
    mostrarVector(x , 5);


    return 0;
}
