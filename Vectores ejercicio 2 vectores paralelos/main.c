#include <stdio.h>
#include <stdlib.h>
#define CANT 3

int main()
{
    int leg[CANT];
    float sueldo[CANT];
    int edad[CANT];
    int i;

    for(i=0 ; i < CANT ; i++)
    {
        leg[i] = i +1;

        printf("Ingrese el sueldo: ");
        scanf("%f" , &sueldo[i]);
        printf("Ingrese la edad: ");
        scanf("%d" , &edad[i]);
    }
    printf("Legajo\tEdad\tSueldo\n");

    for(i=0 ; i < CANT ; i++)
    {
        printf("%d\t%d\t%.2f\t\n" , leg[i] , edad[i] , sueldo[i]);
    }
    return 0;
}
