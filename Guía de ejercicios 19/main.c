#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int contador;
    int contadorPositivos=0;
    int productoNegativos;

    for(contador=0 ; contador < 3 ; contador++)
    {
        printf("Ingrese un numero distinto a cero:");
        scanf("%d" , &numero);

        while(numero==0)
        {
            printf("Ingrese un numero distinto a cero:");
            scanf("%d" , &numero);
        }

        if(numero > 0)
        {
            contadorPositivos = contadorPositivos + numero;
        }
        if(numero < 0)
        {
            productoNegativos = numero*numero;
        }

    }
    printf("La suma de los positivos es %d" , contadorPositivos);
    printf(". El producto de los negativos es %d" , productoNegativos);
    return 0;
}
