#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define CANT 3


int main()
{
    char nombre[CANT][31];
    int i;


    for(i=0 ; i < CANT ; i++)
    {
        printf("Ingrese nombre: ");
        fflush(stdin);
        scanf("%[^\n]" , nombre[i]);
        nombre[0] = toupper(nombre[0]);
    }

    for(i=0 ; i < CANT ; i++)
    {
        printf("Su nombre es %s.\n", nombre[i]);
    }
    return 0;
}
