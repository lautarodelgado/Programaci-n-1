#include <stdio.h>
#include <stdlib.h>
#define CANT 10

int main()
{
    int n[CANT];
    int i;

    printf("Ingrese diez numeros: \n");
    for(i=0 ; i < CANT ; i++)
    {
        scanf("%d" , &n[i]);
    }

    printf("Los numeros ingresados son: \n");

    for(i=0 ; i < CANT ; i++)
    {
        printf("\n%d" , n[i]);
    }
    return 0;
}
