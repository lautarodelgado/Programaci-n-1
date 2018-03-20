#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base;
    int altura;
    int superficie;
    int perimetro;

    printf("Ingrese la base: ");
    scanf("%d" , &base);
    printf("Ingrese la altura: ");
    scanf("%d" , &altura);

    superficie = (base*altura)/2;
    perimetro = base*3;

    printf("La superficie es %d y el perimetro es %d" , superficie , perimetro);

    return 0;
}
