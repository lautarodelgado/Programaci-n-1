#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[20];

    printf("Ingrese un nombre: ");
    scanf("%[^\n]" , nombre);
    strupr(nombre);
    printf("\nSu nombre es %s.\n" , nombre);
    return 0;
}
