#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vec[5]= {4,5,4,5,6};
    int i;

    printf("Ingrese 5 numeros:\n");

    for(i=0 ; i < 5 ; i++)
    {
        scanf("%d" , vec + i);
    }

    for(i=0 ; i < 5 ; i++)
    {
        printf("%d\n" , *(vec + i));
    }

    return 0;
}
