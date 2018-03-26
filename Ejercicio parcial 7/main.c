#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota;
    int edad;
    char sexo;
    int contador;
    //para sacar el promedio de las notas
    int acumuladorNotas=0;
    float promedio;
    //b-Nota mas baja y su sexo
    int notaMinima;
    int sexoMinimo;
    //c-Varones mayores a 18 y con nota mayor o igual a 6
    int varonesNotaMayorSeis=0;
    //d-sexo y nota del mas joven
    int masJoven;
    int notaMasJoven;
    char sexoMasJoven;
    //e-Edad y nota de la primera mujer ingresada
    int contadorMujeres=0;
    int edadPrimerMujer;
    int notaPrimerMujer;


    for(contador=0 ; contador <2 ; contador++)
    {
        printf("Ingrese la nota:");
        scanf("%d" , &nota);
        //validacion nota
        while(nota< 0 || nota > 10)
        {
            printf("Ingrese la nota:");
            scanf("%d" , &nota);
        }
        printf("Ingrese la edad:");
        scanf("%d" , &edad);
        //validacion edad
        while(edad < 0)
        {
            printf("Ingrese la edad:");
            scanf("%d" , &edad);
        }
        printf("Ingrese el sexo:");
        fflush(stdin);
        scanf("%c" ,  &sexo);
        sexo = tolower(sexo);
        //validacion sexo
        while(sexo != 'f' && sexo != 'm')
        {
            printf("Ingrese el sexo:");
            fflush(stdin);
            scanf("%c" ,  &sexo);
            sexo = tolower(sexo);
        }
        //promedio notas
        acumuladorNotas = acumuladorNotas + nota;
        //nota y sexo minimo
        if(contador==0)
        {
            notaMinima = nota;
            sexoMinimo = sexo;
        }
        else
        {
            if(nota < notaMinima)
            {
                notaMinima = nota;
                sexoMinimo = sexo;
            }
        }
        //varones mayores a 18 y nota mayor o igual a 6
        if(sexo == 'm' && edad > 18 && nota > 5)
        {
            varonesNotaMayorSeis++;
        }
        //d-
        if(contador==0)
        {
            masJoven = edad;
            notaMasJoven = nota;
            sexoMasJoven = sexo;
        }
        else
        {
            if(edad < masJoven)
            {
                masJoven = edad;
                notaMasJoven = nota;
                sexoMasJoven = sexo;
            }
        }
        //e-Edad y nota de la primera mujer
        if(sexo == 'f')
        {
            contadorMujeres++;
            edadPrimerMujer = edad;
            notaPrimerMujer = nota;
        }
    }

    promedio = (float)acumuladorNotas/2;

    printf("El promedio de las notas es %.2f" , promedio);
    printf("\nLa nota minima es %d y su sexo es %c", notaMinima , sexoMinimo);
    printf("\nLos varones mayores de 18 con nota igual o mayor a seis son %d" , varonesNotaMayorSeis);
    printf("\nEl sexo del mas joven es %c y su nota es %d" , sexoMasJoven , notaMasJoven);
    if(contadorMujeres == 0)
    {
        printf("\nNo hubo ninguna mujer");
    }
    else
    {
        if(contadorMujeres > 0)
        {
            printf("\nLa edad de la primer mujer ingresada es %d y su nota es %d" , edadPrimerMujer , notaPrimerMujer);
        }
    }
    return 0;
}
