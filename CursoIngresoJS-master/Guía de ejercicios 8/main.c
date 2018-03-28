#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int contador=0;
    int positivos=0;
    int negativos=0;

    while(contador < 3)
    {
        printf("Ingrese un numero:");
        scanf("%d" , &numero);

        if(numero > 0);
        {
            positivos++;
        }

        if(numero < 0)
        {
            negativos++;
        }
        contador++;
    }

    printf("La cantidad de numeros positivos es %d \n" , positivos);
    printf("La cantidad de numeros negativos es %d" , negativos);
    return 0;
}
