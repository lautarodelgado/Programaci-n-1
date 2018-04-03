#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int i=0;

    printf("Ingrese un numero: ");
    scanf("%d" , &numero);

    while(i < numero)
    {
        i++;
        printf("%d\n" , i);
    }
    return 0;
}
