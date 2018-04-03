#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int multiplicacion;
    int resultado;

    for(i=0 ; i < 11 ; i++)
    {
        multiplicacion = 4;
        resultado = multiplicacion*i;
        printf("%dx%d = %d\n" , multiplicacion , i , resultado);
    }
    printf("Hello world!\n");
    return 0;
}
