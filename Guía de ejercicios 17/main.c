#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("Multiplos de 6 comprenddos entre 0 y 100\n");
    for(i=6 ; i < 100 ; i++)
    {
        printf("%d\n" , i);
        i++;
        i++;
        i++;
        i++;
        i++;
    }
    return 0;
}
