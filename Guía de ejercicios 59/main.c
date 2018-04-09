#include <stdio.h>
#include <stdlib.h>
#define CANT 5

int main()
{
    int vec[CANT];
    int i;
    int max;

    printf("Ingrese 20 enteros positivos: \n");
    for(i=0 ; i < CANT ; i++)
    {
        scanf("%d" , &vec[i]);
        while(vec[i] < 0 || vec[i] == 0)
        {
            printf("ERROR. El numero ingresado debe ser un entero positivo.\n");
            scanf("%d" , &vec[i]);
        }
    }
    //maximo:
    max = vec[0];

    for(i=0 ; i < CANT ; i++)
    {
        if(vec[i] > max)
        {
            max = vec[i];
        }
    }

    printf("\n\nIndice:\t\tNumeros: \n");
    for(i=0 ; i < CANT ; i++)
    {
        printf(" %d\t-\t%d\n" , i , vec[i]);
    }

    printf("\nEl maximo es: %d\n" , max);

    return 0;
}
