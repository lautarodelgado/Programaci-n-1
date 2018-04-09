#include <stdio.h>
#include <stdlib.h>
#define CANT 5


int main()
{
    int vecA[CANT];
    int vecB[CANT];
    int i;
    int minA;
    int minB;
    int minimoComun;

    printf("\nIngrese 5 numeros enteros:\n");
    for(i=0 ; i < CANT ; i++)
    {
        scanf("%d\n" , &vecA[i]);
    }
    minA = vecA[0];

    for(i=0 ; i < CANT ; i++)
    {
        if(vecA[i] < minA)
        {
            minA = vecA[i];
        }
    }

    printf("\nIngrese 5 numeros enteros:\n");
    for(i=0 ; i < CANT ; i++)
    {
        scanf("%d\n" , &vecB[i]);
    }
    minB = vecB[0];
    for(i=0 ; i < CANT ; i++)
    {
        if(vecB[i] < minB)
        {
            minB = vecB[i];
        }
    }



    printf("Minimo de vecA es %d\n" , minA);
    printf("Minimo de vecB es %d\n" , minB);
    printf("El minimo comun es %d" , minimoComun);
    return 0;
}
