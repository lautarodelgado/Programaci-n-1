#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int i;

    printf("Ingrese un numero: ");
    scanf("%d" , &numero);

    for(i=3 ; i < numero ; i++)
    {
        printf("%d\n" , i);
        i++;
        i++;
    }

    return 0;
}
