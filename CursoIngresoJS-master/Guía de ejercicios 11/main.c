#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;
    int i;  //este es el contador xd
    int a=0;
    int e=0;
    int ii=0; // doble "i" para la letra porque la "i" sola la usé antes
    int o=0;
    int u=0;

    for(i=0 ; i <5 ; i++)
    {
        printf("Ingrese un caracter:");
        letra = getchar();  //deberia funcionar con getcha
        fflush(stdin);

        if(letra == 'a')
        {
            a++;
        }
        if(letra == 'e')
        {
            e++;
        }
        if(letra == 'i')
        {
            ii++;
        }
        if(letra == 'o')
        {
            o++;
        }
        if(letra == 'u')
        {
            u++;
        }
    }
    printf("Las a son %d, las e son %d, las i son %d, las o son %d y las u son %d" , a , e , ii , o , u);
    return 0;
}
