#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("Numeros del 100 al 0 en orden descendente:\n");

    for(i=100 ; i > -1 ; i--)
    {
        printf("%d\n" , i);
    }
    return 0;
}
