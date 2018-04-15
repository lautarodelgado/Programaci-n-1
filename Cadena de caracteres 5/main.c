#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANT 3

int main()
{
    char codigo[CANT][6];
    char aux[6];
    float precio[CANT];
    float auxiliarPrecio;
    int cantidad[CANT];
    int auxiliarCantidad;
    int i;
    int j;
    int opcion=0;

    printf("Ingrese codigo, precio y cantidad:");

    for(i=0 ; i < CANT ; i++)
    {
        printf("\nCODIGO: ");
        fflush(stdin);
        scanf("%s" , codigo[i]);
        printf("PRECIO: ");
        scanf("%f" , &precio[i]);
        printf("CANTIDAD: ");
        scanf("%d" , &cantidad[i]);

    }

    printf("Ingrese opcion: ");
    scanf("%d" , &opcion);


    switch(opcion)
    {
        case 1:
            for(i=0 ; i < CANT -1 ; i++)
            {
                for(j = i+1 ; j < CANT ; j++)
                {
                    if(strcmp(codigo[i] , codigo[j]) > 0)
                    {
                        strcpy(aux , codigo[i]);
                        strcpy(codigo[i] , codigo[j]);
                        strcpy(codigo[j] , aux);

                        auxiliarPrecio = precio[j];
                        precio[j] = precio[i];
                        precio[i] = auxiliarPrecio;

                        auxiliarCantidad = cantidad[i];
                        cantidad[i] = cantidad[j];
                        cantidad[j] = auxiliarCantidad;

                    }
                }
            }
            break;

        case 2:
            for(i=0 ; i < CANT -1 ; i++)
            {
                for(j = i+1 ; j < CANT ; j++)
                {
                    if(precio[i] < precio[j])
                    {
                        strcpy(aux , codigo[i]);
                        strcpy(codigo[i] , codigo[j]);
                        strcpy(codigo[j] , aux);

                        auxiliarPrecio = precio[j];
                        precio[j] = precio[i];
                        precio[i] = auxiliarPrecio;

                        auxiliarCantidad = cantidad[i];
                        cantidad[i] = cantidad[j];
                        cantidad[j] = auxiliarCantidad;
                    }
                }
            }
            break;
        case 3:
            for(i=0 ; i < CANT -1 ; i++)
            {
                for(j = i+1 ; j < CANT ; j++)
                {
                    if(cantidad[i] < cantidad[j])
                    {
                        strcpy(aux , codigo[i]);
                        strcpy(codigo[i] , codigo[j]);
                        strcpy(codigo[j] , aux);

                        auxiliarPrecio = precio[j];
                        precio[j] = precio[i];
                        precio[i] = auxiliarPrecio;

                        auxiliarCantidad = cantidad[i];
                        cantidad[i] = cantidad[j];
                        cantidad[j] = auxiliarCantidad;
                    }
                }
            }
            break;

        case 4:
            if(cantidad[i] < 5)
            {
                for(i=0 ; i < CANT -1 ; i++)
                {
                    for(j = i+1 ; j < CANT ; j++)
                    {
                        strcpy(aux , codigo[i]);
                        strcpy(codigo[i] , codigo[j]);
                        strcpy(codigo[j] , aux);

                        auxiliarPrecio = precio[j];
                        precio[j] = precio[i];
                        precio[i] = auxiliarPrecio;

                        auxiliarCantidad = cantidad[i];
                        cantidad[i] = cantidad[j];
                        cantidad[j] = auxiliarCantidad;
                    }
                }
            }
            break;
    }


    printf("CODIGO: \t PRECIO: \t CANTIDAD:\n");
    for(i=0 ; i < CANT ; i++)
    {
        printf("%s \t\t %.2f \t\t %d\n" , codigo[i] , precio[i] , cantidad[i]);
    }
    return 0;
}
