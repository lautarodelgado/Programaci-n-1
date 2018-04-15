#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANT 4

int main()
{
    char nombre[CANT][6];
    int edad[CANT];
    int letras;
    int i;

    for(i=0 ; i < CANT ; i++)
    {
        system("cls");
        printf("Ingrese edad y nombre:\n");
        printf("Nombre: ");
        fflush(stdin);
        scanf("%[^\n]" , nombre[i]);
        letras = strlen(nombre[i]);
        while(letras > 6)
        {
            printf("Nombre demasiado largo, reingrese.\n");
            printf("Ingrese edad y nombre:\n");
            printf("Nombre: ");
            fflush(stdin);
            scanf("%[^\n]" , nombre[i]);
            letras = strlen(nombre[i]);
        }
        printf("Edad:");
        scanf("%d" , &edad[i]);
    }

    printf("\nEDAD: \t NOMBRE: \t\n");
    for(i=0 ; i < CANT ; i++)
    {
        printf("%d \t %s\n", edad[i] , nombre[i]);
    }
    return 0;
}
