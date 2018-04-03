#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int i=0;
    int sumaAntecesores=0;

    printf("Ingrese un numero: ");
    scanf("%d" , &numero);

    while(i<numero-1)
    {
        i++;
        sumaAntecesores = sumaAntecesores + i;
    }

    printf("La suma de los antecesores de %d es %d\n" , numero , sumaAntecesores);
    return 0;
}
