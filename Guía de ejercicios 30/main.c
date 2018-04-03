#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int numero;
    int primo=0;

    for(i = 2 ; i < 100 ; i++)
    {
        for(numero = 2 ; numero <100 ; numero++)
        {
            if(i%numero == 0)
            {
                primo++;
            }
            if(primo == 1)
            {
                printf("%d" , i);
            }
        }
    }
    return 0;
}
