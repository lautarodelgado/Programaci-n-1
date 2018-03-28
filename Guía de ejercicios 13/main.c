#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("Numeros pares entre el 1 y el 100\n");

    for(i=1 ; i < 100 ; i++)
    {
        i++;
        printf("%d\n" , i);
    }

    return 0;
}
