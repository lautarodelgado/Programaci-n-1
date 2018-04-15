#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANT 20

int main()
{
    char nombre[CANT][31];
    int i;

    for(i=0 ; i < CANT ; i++)
    {
        printf("Ingrese nombre: ");
        fflush(stdin);
        scanf("%[^\n]" , nombre[i]);
        strupr(nombre[i]);
    }

    printf("\nLos nombre son:\n");
    for(i=0 ; i < CANT ; i++)
    {
        printf("*%s.\n" , nombre[i]);
    }

    return 0;
}
