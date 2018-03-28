#include <stdio.h>
#include <stdlib.h>

int main()
{
    int radio;
    float longitud;
    float area;

    printf("Ingrese el radio del circulo:");
    scanf("%d" , &radio);

    longitud = (float)radio*2*3.14;
    area = (float)radio*radio*3.14;


    printf("La logintud es: %.2f y el area es %.2f\n" , longitud , area);
    return 0;
}
