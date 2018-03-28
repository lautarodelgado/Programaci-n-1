#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base;
    int altura;
    float superficie;

    printf("Ingrese la base de un triangulo:");
    scanf("%d" , &base);
    printf("Ingrese la altura de un triangulo:");
    scanf("%d" , &altura);

    superficie = (float)altura*base/2;

    printf("La superficie del triangulo es %.2f\n" , superficie);
    return 0;
}
