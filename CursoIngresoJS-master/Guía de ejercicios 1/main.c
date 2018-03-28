#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int numero2;
    int numero3;
    int numero4;
    int numero5;
    float promedio;

    printf("Ingrese un numero:");
    scanf("%d" , &numero);

    printf("Ingrese otro numero:");
    scanf("%d" , &numero2);

    printf("Ingrese otro numero:");
    scanf("%d" , &numero3);

    printf("Ingrese otro numero:");
    scanf("%d" , &numero4);

    printf("Ingrese otro numero:");
    scanf("%d" , &numero5);

    promedio = (float)(numero + numero2 +numero3 + numero4 + numero5) / 5;

    printf("El promedio de los numeros es %.2f" , promedio);

    return 0;
}
