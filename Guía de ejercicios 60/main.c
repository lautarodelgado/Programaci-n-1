#include <stdio.h>
#include <stdlib.h>
#define CANT 5

int main()
{
    int vec[CANT];
    int aux;
    int i;
    int j;

    printf("Ingrese 20 numeros enteros positivos:\n");
    for(i=0 ; i < CANT ; i++)
    {
        scanf("%d" , &vec[i]);
        while(vec[i] < 0 || vec[i] == 0)
        {
            printf("ERROR.\n");
            scanf("%d" , &vec[i]);
        }
    }

    printf("\nLos numeros ingresados son: \n");
    for(i=0 ; i < CANT ; i++)
    {
        printf("%d\n" , vec[i]);
    }

    printf("\nLos numeros ingresados ordenados descendentemente:\n");
    for(i=0 ; i < CANT-1 ; i++)
    {
        for(j=i+1 ; j < CANT ; j++)
        {
            if(vec[i] < vec[j])
            {
                aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }
        }
    }

    for(i=0 ; i < CANT ; i++)
    {
        printf("%d\n" , vec[i]);
    }

    return 0;
}
