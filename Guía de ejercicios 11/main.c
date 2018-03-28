#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;
    int i;
    int contadorA=0;
    int contadorE=0;
    int contadorI=0;
    int contadorO=0;
    int contadorU=0;



    for(i=0 ; i < 20 ; i++)
    {
        printf("Ingrese una letra:");
        letra = getchar();
        letra = tolower(letra);
        fflush(stdin);

        if(letra == 'a')
        {
            contadorA++;
        }
        if(letra == 'e')
        {
            contadorE++;
        }
        if(letra == 'i')
        {
            contadorI++;
        }
        if(letra == 'o')
        {
            contadorO++;
        }
        if(letra == 'u')
        {
            contadorU++;
        }
    }

    printf("Se ingresaron %d a\n" , contadorA);
    printf("Se ingresaron %d e\n" , contadorE);
    printf("Se ingresaron %d i\n" , contadorI);
    printf("Se ingresaron %d o\n" , contadorO);
    printf("Se ingresaron %d u\n" , contadorU);
    return 0;
}
