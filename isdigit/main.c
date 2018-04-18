#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dato[15];
    int i;
    int nro;
    int flag = 0;

    printf("Imgrese numero: ");
    fflush(stdin);
    scanf("%s" , dato);

    for(i=0 ; i < strlen(dato) ; i++)
    {
        if(!isdigit(dato[i]))
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        nro = atoi(dato);
    }
    printf("Hello world!\n");
    return 0;
}
