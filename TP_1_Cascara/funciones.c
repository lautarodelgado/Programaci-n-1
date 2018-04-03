//suma
int suma(int num1, int num2)
{
    int resultado;
    resultado = num1 + num2;

    return resultado;
}

//resta:
int resta(int num1 , int num2)
{
    int resultado;
    resultado = num1 - num2;

    return resultado;
}

//division
float division(int num1 , int num2)
{
    float resultado;
    resultado = (float)num1 / num2;

    return resultado;
}

//multiplicacion:
int multiplicacion(int num1 , int num2)
{
    int resultado;
    resultado = num1 * num2;

    return resultado;
}

//factorial
int aa(int num1)
{
    int i;
    int resultado=1;

    for(i=1 ; i <= num1 ; i++)
    {
        resultado = resultado*i;
    }
    return resultado;
}
