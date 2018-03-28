#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Ingrese un numero:");
    scanf("%d" , &numero);

    if(numero > 0 && numero != 0)
    {
        printf("%d es positivo" , numero);
    }
    else
    {
        if(numero < 0 && numero !=0)
        {
            printf("%d es negativo" , numero);
        }
    }
    return 0;
}
