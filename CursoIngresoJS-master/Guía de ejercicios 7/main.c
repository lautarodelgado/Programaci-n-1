#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int cuadrado;

    printf("Ingrese un numero mayor a cero:");
    scanf("%d" , &numero);

    while(numero < 1)
    {
        printf("ERROR, el numero debe ser mayor a cero:\n");
        printf("Ingrese un numero mayor a cero:");
        scanf("%d" , &numero);
    }


    cuadrado = numero*numero;

    printf("El cuadrado del numero es %d\n" , cuadrado);
    return 0;
}
