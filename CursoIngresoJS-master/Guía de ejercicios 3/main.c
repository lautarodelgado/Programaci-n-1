#include <stdio.h>
#include <stdlib.h>

int main()
{
    fflush(stdin);

    int numero1;
    int numero2;
    int producto;
    int cuadrado;

    printf("Ingrese un numero distinto de cero:");
    scanf("%d" , &numero1);

    printf("Ingrese otro numero distinto de cero:");
    scanf("%d" , &numero2);

    producto = numero1 * numero2;
    cuadrado = numero1 * numero1;

    printf("El producto de los numeros es %d\n" , producto);
    printf("El cuadrado del primer numero ingresado es %d" , cuadrado);

    return 0;
}
