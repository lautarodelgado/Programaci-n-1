#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lado1;
    int lado2;
    int lado3;

    printf("Ingrese la medida del primer lado: ");
    scanf("%d" , &lado1);
    printf("Ingrese la medida del segundo lado: ");
    scanf("%d" , &lado2);
    printf("Ingrese la medida del tercer lado: ");
    scanf("%d" , &lado3);

    if(lado1 + lado2 < lado3 || lado1 + lado3 < lado2 || lado2 + lado3 < lado1)
    {
        printf("ERROR: la suma de los lados menores debe ser superior al lado mayor\n");
        printf("Ingrese la medida del primer lado: ");
        scanf("%d" , &lado1);
        printf("Ingrese la medida del segundo lado: ");
        scanf("%d" , &lado2);
        printf("Ingrese la medida del tercer lado: ");
        scanf("%d" , &lado3);
    }

    if(lado1 == lado2 && lado1 == lado3)
    {
        printf("El triangulo es equilatero.");
    }
    else
    {
        if(lado1 == lado2 || lado2 == lado3 || lado1 == lado3)
        {
            printf("El triangulo es isosceles.");
        }
        else
        {
            printf("El triangulo es escaleno.");
        }
    }
    return 0;
}
