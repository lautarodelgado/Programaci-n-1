#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

int main()
{
    char letra = 's';

    do
    {
        switch(menu())
        {
        case 1:
            printf("\nlala\n\n");
            system("pause");
            break;
        case 2:
            system("pause");
            break;
        case 3:
            system("pause");
            break;
        case 4:
            system("pause");
            break;
        case 5:
            system("pause");
            break;
        case 6:
            letra = 'n';
            break;
        default:
            printf("\nERROR, ingrese una opcion valida.\n\n");
            system("pause");
        }
    }
    while(letra == 's');
    return 0;
}
