#include <stdio.h>
#include <stdlib.h>

int sumar(int , int);

int main()
{
    int x=5;
    int y=7;

    printf("La suma es %d\n", sumar(x , y));

    return 0;
}

int sumar(int a , int b)
{
    int resultado;
    resultado = a + b;

    return resultado;
}
