#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int i;
    int suma = 0;
    int max; // constante definida en limits.h
    int min; // constante definida en limits.h
    float promedio;

    for(i=0; i<10;i++)
    {
    int aux;
    scanf("%d",&aux);
    suma=suma+aux;

    if(i == 0)
    {
        max = aux;
        min = aux;
    }
    if(aux>max)
    {
        max = aux;
    }
    if(aux<min)
    {
        min = aux;
    }
    }
    promedio = (float)suma/10;

    printf("la suma es:%d\n" , suma);
    printf("El maximo es:%d\n" , max);
    printf("El minimo es:%d\n" , min);
    printf("El promedio es:%.2f" , promedio);
}
