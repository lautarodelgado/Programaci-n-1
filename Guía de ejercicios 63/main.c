#include <stdio.h>
#include <stdlib.h>
#define CANT 3

int main()
{
    int vec[CANT];
    int i;
    int legajo[CANT];
    float salario[CANT];
    int contadorEdad=0;
    float edadPromedio;

    for(i=0 ; i < CANT ; i++)
    {
        legajo[i] = i + 1;
        printf("Ingrese la edad y salario del empleado:\n");
        printf("Edad: ");
        scanf("%d" , &vec[i]);
        printf("Salario: ");
        scanf("%f" , &salario[i]);

        contadorEdad = contadorEdad + vec[i];
    }

    edadPromedio = (float)contadorEdad / CANT;

    printf("Legajo \t Edad \t Sueldo\n");
    for(i=0 ; i < CANT ; i++)
    {
        printf("%d \t %d \t %.2f\n" , legajo[i] ,  vec[i] , salario[i]);
    }

    printf("\nEdad promedio: %.2f\n\n" , edadPromedio);

    printf("Los salarios, con sus respectivos numeros de legajo, que superan el sueldo promedio son:\n");
    printf("Legajo: \t Sueldo:\n");
    for(i=0 ; i < CANT ; i++)
    {
        if(vec[i] > edadPromedio)
        {
            printf("%d \t %d\n" , legajo[i] , vec[i]);
        }
    }

    return 0;
}
