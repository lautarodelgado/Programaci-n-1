void ordenar(int x[] , int TAM)
{
    int i;
    int j;
    int aux;
    for(i=0 ; i < TAM-1 ; i++)
    {
        for(j=i+1 ; j < TAM ; j++)
        {
            if(x[i] > x[j])
            {
                aux = x[i];
                x[i] = x[j];
                x[j] = aux;
            }
        }
    }
}


void mostrarVector(int x[] , int TAM)
{
    int i;
    for(i=0 ; i < TAM ; i++)
    {
        printf("%d " , x[i]);
    }
    printf("\n\n");
}


