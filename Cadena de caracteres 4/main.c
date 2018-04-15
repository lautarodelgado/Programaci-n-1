#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANT 3

int main()
{
    char nombre[CANT][31];
    int i;
    int j;
    char aux[31];
    int auxiliar;

    for(i=0 ; i < CANT ; i++)
    {
        printf("Ingrese nombre: ");
        fflush(stdin);
        scanf("%[^\n]" , nombre[i]);
        strupr(nombre[i]);
    }

    for(i=0 ; i < CANT -1 ; i++)
    {
        for(j = i+1 ; j < CANT ; j++)
        {
            if(strcmp(nombre[i] , nombre[j]) > 0)
            {
                strcpy(aux , nombre[i]);
                strcpy(nombre[i] , nombre[j]);
                strcpy(nombre[j] , aux);
            }
        }
    }

    printf("\nNombres:\n");
    for(i=0 ; i < CANT ; i++)
    {
        printf("%s\n" , nombre[i]);
    }

    return 0;
}
