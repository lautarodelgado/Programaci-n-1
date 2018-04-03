#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int intercambio;

    printf("Ingrese un numero: ");
    scanf("%d" , &num1);

    printf("Ingrese un numero: ");
    scanf("%d" , &num2);

    intercambio = num1;
    num1 = num2;
    num2 = intercambio;

    printf("\n\nIngrese un numero: %d\n" , num1);
    printf("Ingrese un numero: %d\n\n" , num2);
    return 0;
}
