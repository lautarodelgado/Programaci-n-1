#include <stdio.h>
#include <stdlib.h>
#include "baus.h" //como no esta en las librerias incluidas va con comillas

int main()
{
    int x=5;
    int y=7;

    printf("La suma es %d\n", sumar(x , y));  //o podemos no declarar como "x" e "y" y reemplazar por los valores en el paréntesis

    return 0;
}


