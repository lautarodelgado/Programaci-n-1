#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define CANT 2

void mifuncion(char[][20] , int);

int main()
{
    char nombre[2][20] = {"juan martin" , "ana"};
    mifuncion(nombre , 2);
    return 0;
}

void mifuncion(char vec[][20] , int filas)
{
    int i;
    int k;
    for(i=0 ; i < filas ; i++)
    {
        for(k=0 ; k < 20; k++) //va de 0 a 20 porque recorre todas las columnas de una misma fila
        {
            if(vec[i][k] == ' ')
            {
                vec[i][k+1] = toupper(vec[i][k+1]);
            }
        }
        vec[i][0] = toupper(vec[i][0]);
        printf("%s \n" ,  vec[i]);
    }
}
