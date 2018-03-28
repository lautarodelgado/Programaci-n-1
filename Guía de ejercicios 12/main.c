#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int cantidadImpares;

    printf("Impares entre el 0 y el 100:\n");

    for(i=0 ; i < 100 ; i++)
    {
        i++;
        printf("%d\n" , i);
    }

    cantidadImpares = i/2; //porque "i" da 100, ya que la usamos dos veces

    printf("Cantidad de numeros impares: %d\n" , cantidadImpares);
    return 0;
}
