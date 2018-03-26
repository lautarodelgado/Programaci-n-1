#include <stdio.h>
#include <stdlib.h>

int sumar(int , int);

int main()
{
    printf("La suma es %d\n", sumar(5 , 7));

    return 0;
}

int sumar(int a , int b)
{
    int resultado;
    resultado = a + b;

    return resultado;
}
