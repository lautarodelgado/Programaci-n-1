#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANT 3

int main()
{
    int legajo[CANT];
    int i;
    char nombre[CANT][31];
    float sueldo[CANT];

    for(i=0 ; i < CANT ; i++)
    {
        legajo[i] = i + 1;
        fflush(stdin);
        printf("Ingrese:");
        printf("\n");
        printf("Nombre: ");
        scanf("%[^\n]" , nombre[i]);
        strupr(nombre[i]);
        printf("Sueldo: ");
        scanf("%f" , &sueldo[i]);
    }

    printf("\nLegajo: \t Nombre: \t Sueldo:\n");
    for(i=0 ; i < CANT ; i++)
    {
        printf("%d \t\t %s \t\t %.2f\n" , legajo[i] , nombre[i] , sueldo[i]);
    }
    return 0;
}
