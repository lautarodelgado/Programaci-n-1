#include <stdio.h>
#include <stdlib.h>

int main()
{
    int multiplosSiete=0;
    int multiplosCinco=0;
    int i;

    printf("Los primeros 100 multiplos de 7 son:\n");
    for(i=0 ; i < 100 ; i++)
    {
        multiplosSiete = multiplosSiete + 7;
        printf("%d\n" , multiplosSiete);
    }

    printf("\n\nLos primeros 100 multilpos de 5 son:\n");
    for(i=0 ; i < 100 ; i++)
    {
        multiplosCinco = multiplosCinco + 5;
        printf("%d\n" , multiplosCinco);
    }
    return 0;
}
