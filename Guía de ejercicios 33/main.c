#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorHora;
    int antiguedad;
    int horasTrabajadas;
    int importeHoras;
    int valorAnios;
    int importeBruto;
    int descuento;
    int importeNeto;

    printf("Ingrese el valor de la hora: ");
    scanf("%d" , &valorHora);
    printf("Ingrese la antiguedad del empleado: ");
    scanf("%d" , &antiguedad);
    printf("Ingrese las horas trabajadas: ");
    scanf("%d" , &horasTrabajadas);

    importeHoras = valorHora * horasTrabajadas;
    valorAnios = antiguedad * 30;
    importeBruto = importeHoras + valorAnios;
    descuento = importeBruto*13/100;
    importeNeto = importeBruto - descuento;

    printf("       RECIBO:\n");
    printf("La antiguedad del trabajador es: %d\n" , antiguedad);
    printf("El valor de la hora trabajada es: %d\n" , valorHora);
    printf("El total a cobrar en bruto es: %d\n" , importeBruto);
    printf("El descuento es de $%d\n" , descuento);
    printf("El valor neto es de $%d\n" , importeNeto);

    return 0;
}
