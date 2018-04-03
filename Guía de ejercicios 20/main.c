#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Ingrese un numero:");
    scanf("%d" , &numero);

    if(numero%2==0 && numero!=0)
    {
        printf("%d es par.\n" , numero);
    }
    else
    {
        if(numero!=0)
        {
            printf("%d es impar." , numero);
        }
    }
    return 0;
}
