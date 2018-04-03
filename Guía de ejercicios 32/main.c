#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int i;
    int max;
    int min;
    int intervalo;


    for(i=0 ; i < 3 ; i++)
    {
        printf("Ingrese tres numeros:");
        scanf("%d" , &num);
        if(i==0)
        {
            max = num;
            min = num;
        }
        else
        {
            if(num < min)
            {
                min = num;
            }
            if(num > max)
            {
                max = num;
            }
        }

        if(i==2 && num < max && num > min)
        {
            printf("El tercer numero pertenece al intervalo.");
        }
    }
    return 0;
}
