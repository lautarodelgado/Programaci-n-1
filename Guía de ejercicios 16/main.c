#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int acumulador=0;

    for(i=3 ; i <13 ; i++)
    {
        printf("%d\n" , i);
        i++;
        i++;

        acumulador = acumulador + (i-2);
    }

    printf("La suma de los numeros anteriores es: %d" , acumulador);
    return 0;
}
