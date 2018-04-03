#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int num1;
    int num2;
    int contador=0;

    while(seguir=='s')
    {
            system("cls");
            printf("1- Ingresar 1er operando (A=x)\n");
            printf("2- Ingresar 2do operando (B=y)\n");
            printf("3- Calcular la suma (A+B)\n");
            printf("4- Calcular la resta (A-B)\n");
            printf("5- Calcular la division (A/B)\n");
            printf("6- Calcular la multiplicacion (A*B)\n");
            printf("7- Calcular el factorial (A!)\n");
            printf("8- Calcular todas las operacione\n");
            printf("9- Salir\n");

            scanf("%d" , &opcion);
            switch(opcion)
            {
                case 1:
                    printf("Igrese el primer operando: ");
                    scanf("%d" , &num1);
                    break;
                case 2:
                    printf("Ingrese el segundo operando: ");
                    scanf("%d" , &num2);
                    break;
                case 3:
                    printf("La suma de los dos operandos es: %d\n" , suma(num1 , num2));
                    system("pause");
                    break;
                case 4:
                    printf("La resta de los dos operandos es: %d\n" , resta(num1 , num2));
                    system("pause");
                    break;
                case 5:
                    if (num2 == 0 || (num1==0 && num2==0))
                    {
                        printf("ERROR. Reingrese el/los operando/s.");
                    }
                    else
                    {
                        printf("La division entre los dos operandos es: %.2f\n" , division(num1 , num2));
                    }
                    system("pause");
                    break;
                case 6:
                    printf("La multiplipacion entre los dos operandos es: %d\n" , multiplicacion(num1 , num2));
                    system("pause");
                    break;
                case 7:
                    if(num1 == 0)
                    {
                        printf("El factorial del primer operando es 1");
                    }
                    else
                    {
                        if(num1 < 0)
                        {
                            printf("ERROR. Reingrese el primer operando.");
                        }

                        else
                        {
                            printf("El factorial del primer operando es: %d\n" , aa(num1));
                        }
                    }
                    system("pause");
                    break;
                case 8:
                    //suma:
                    printf("La suma de los dos operandos es: %d\n" , suma(num1 , num2));
                    //resta:
                    printf("La resta de los dos operandos es: %d\n" , resta(num1 , num2));
                    //division:
                    if (num2 == 0 || (num1==0 && num2==0))
                    {
                        printf("ERROR. Reingrese el/los operando/s.");
                    }
                    else
                    {
                        printf("La division entre los dos operandos es: %.2f\n" , division(num1 , num2));
                    }
                    //multiplicacion:
                    printf("La multiplipacion entre los dos operandos es: %d\n" , multiplicacion(num1 , num2));
                    //factorial:
                    if(num1 == 0)
                    {
                        printf("El factorial del primer operando es 1");
                    }
                    else
                    {
                        if(num1 < 0)
                        {
                            printf("ERROR. Reingrese el primer operando.");
                        }

                        else
                        {
                            printf("El factorial del primer operando es: %d\n" , aa(num1));
                        }
                    }
                    system("pause");
                    break;
                case 9:
                    seguir = 'n';
                    break;
            }
    }
    return 0;
}
