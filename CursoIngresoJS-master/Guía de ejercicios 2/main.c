#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int numero2;
    int suma;

    printf("Ingrese un numero:");
    scanf("%d" , &numero);

    printf("Ingrese otro numero:");
    scanf("%d" , &numero2);

    suma = numero + numero2;

    printf("La suma de los numeros es %d" , suma);
    return 0;
}
