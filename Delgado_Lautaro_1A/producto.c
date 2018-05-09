#include "producto.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//HARDCODE:
void hardCode(eProveedor proveedores[])
{
    eProveedor nuevoProveedor;

    nuevoProveedor.id = 1;
    strcpy(nuevoProveedor.descripcion, "PROVEEDOR 1");
    nuevoProveedor.estado = 0;
    proveedores[0] = nuevoProveedor;


    nuevoProveedor.id = 2;
    strcpy(nuevoProveedor.descripcion, "PROVEEDOR 2");
    nuevoProveedor.estado = 0;
    proveedores[1] = nuevoProveedor;

    proveedores[2].id = 3;
    strcpy(proveedores[2].descripcion, "PROVEEDOR 3");
    proveedores[2].estado = 0;

    proveedores[3].id = 4;
    strcpy(proveedores[3].descripcion, "PROVEEDOR 4");
    proveedores[3].estado = 0;

    proveedores[4].id = 5;
    strcpy(proveedores[4].descripcion, "PROVEEDOR 5");
    proveedores[4].estado = 0;
}

//MENU:

int menu()
{
    int opcion;

    system("cls");
    printf("---ABM Pantallas---\n\n");
    printf("1-Alta producto\n");
    printf("2-Modificar\n");
    printf("3-Baja\n");
    printf("4-Informar\n");
    printf("5-Listar.\n");
    printf("6-Salir.\n");
    printf("\nIndique opcion: ");
    scanf("%d", &opcion);

    return opcion;
}

//INICIALIZACION:

void inicializarProductos (eProducto vec[], int tam)
{
    int i;

    for(i=0; i< tam; i++)
    {
        vec[i].estado = 0;
    }
}

//BUSCAR LIBRE:

int buscarLibre(eProducto vec[], int tam)
{
    int indice = -1;
    int i;

    for(i=0; i < tam; i++)
    {
        if(vec[i].estado == 0)
        {
            indice = i;
            break;
        }
    }
    return indice;
}

//ALTA PRODUCTO:

void altaProducto(eProducto vec[], int tam)
{
    eProducto nuevoProducto;

    int indiceVacio;

    indiceVacio = buscarLibre(vec , tam);

    if(indiceVacio == -1)
    {
        printf("No hay mas espacio en el sistema.");
    }
    else
    {
        nuevoProducto.codigoProducto = indiceVacio + 1;
        nuevoProducto.estado = 1;

        printf("Ingrese la descripcion: ");
        fflush(stdin);
        gets(nuevoProducto.descripcion);

        printf("Ingrese el id de proveedor: ");
        scanf("%d" , &nuevoProducto.idProveedor);
        while(nuevoProducto.idProveedor < 0 || nuevoProducto.idProveedor > 5)
        {
            printf("Reingrese el id: ");
            scanf("%d" , &nuevoProducto.idProveedor);
        }

        printf("Ingrese el importe: ");
        scanf("%f" , &nuevoProducto.importe);
        while(nuevoProducto.importe < 0)
        {
            printf("Reingrese el importe: ");
            scanf("%f" , &nuevoProducto.importe);
        }

        printf("Ingrese la cantidad: ");
        scanf("%d" , &nuevoProducto.cantidad);
        while(nuevoProducto.cantidad < 0)
        {
            printf("Reingrese la cantidad: ");
            scanf("%d" , &nuevoProducto.cantidad);
        }

        vec[indiceVacio] = nuevoProducto;

        printf("\n Alta existosa! El codigo del producto es: %d \n\n" , nuevoProducto.codigoProducto);
    }
}

//BUSCAR PRODUCTO:
int buscarProducto(eProducto vec[], int tam, int codigo)
{
    int indice = -1;
    int i;

    for(i=0; i < tam; i++)
    {
        if(vec[i].estado !=0 && vec[i].codigoProducto == codigo)
        {
            indice = i;
            break;
        }
    }
    return indice;

}

//MENU MODIFICA:
int menuModifica()
{
    system("cls");
    int opcion;

    system("cls");
    printf("1-Modificar descripcion \n");
    printf("2-Modificar importe\n");
    printf("3-Modificar cantidad\n");
    printf("4-Saliar\n");

    scanf("%d", &opcion);

    return opcion;

}


//MODIFICACION:

void modificarProducto(eProducto vec[], int tam)
{
    eProducto nuevoProducto;

    int opcion;
    int producto;

    printf("Ingrese el codigo de producto a modificar: ");
    scanf("%d" , &nuevoProducto.codigoProducto);

    producto = buscarProducto(vec , tam , nuevoProducto.codigoProducto);

    if(producto == -1)
    {
        printf("\nEl producto %d no se encuentra en el sistema\n\n", nuevoProducto.codigoProducto);
    }
    else
    {
        do
        {
            switch(opcion = menuModifica())
            {
                case 1:
                    printf("Ingrese la nueva descripcion: ");
                    fflush(stdin);
                    gets(nuevoProducto.descripcion);
                    strcpy(vec[producto].descripcion , nuevoProducto.descripcion);
                    break;
                case 2:
                    printf("Ingrese el nuevo importe: ");
                    scanf("%f" , &nuevoProducto.importe);
                    while(nuevoProducto.importe < 0)
                    {
                        printf("Reingrese el importe: ");
                        scanf("%f" , &nuevoProducto.importe);
                    }
                    vec[producto].importe = nuevoProducto.importe;
                    break;
                case 3:
                    printf("Ingrese la neuva cantidad: ");
                    scanf("%d" , &nuevoProducto.cantidad);
                    while(nuevoProducto.cantidad < 0)
                    {
                        printf("Reingrese la cantidad: ");
                        scanf("%d" , &nuevoProducto.cantidad);
                    }
                    vec[producto].cantidad = nuevoProducto.cantidad;
                    break;
                case 4:
                    opcion = 4;
                    break;
            }
        }
        while(opcion != 4);

    }
}


//BAJA PRODUCTO:

void bajaProducto(eProducto vec[], int tam)
{
    int codigo;
    int producto;
    char confirma;

    printf("Ingrese el codigo de producto a dar de baja: ");
    scanf("%d" , &codigo);

    producto = buscarProducto(vec , tam , codigo);

    if(producto == -1)
    {
        printf("\nEl producto %d no se encuentra en el sistema\n\n", codigo);
    }
    else
    {
        do
        {
            printf("\nConfirma baja? [s|n]: ");
            fflush(stdin);
            scanf("%c", &confirma);
            confirma = tolower(confirma);
        }
        while(confirma != 's' && confirma != 'n');

        if(confirma == 's')
        {
            vec[producto].estado = 0;
            printf("\nSe ha realizado la baja\n\n");
        }
        else
        {
            printf("\nSe ha cancelado la baja\n\n");
        }
    }

}


//MENUINFORMAR:

int menuInformar()
{
    int opcion;

    system("cls");
    printf("1-Total y promedio de los importes, y cuantos productos superan promedio.\n");
    printf("2-Total y promedio de los importes, y cuantos productos no superan promedio.\n");
    printf("3-Cantidad de cuyo stock es igual o menor a 10\n");
    printf("4-Cantidad de cuyo stock es mayor a 10\n");
    printf("5-Salir.");
    printf("\nIndique opcion: ");
    scanf("%d", &opcion);

    return opcion;

}

//CONTADOR DE IMPORTES:
int contadorImportes(eProducto vec[] , int tam)
{
    int contador=0;
    int i;

    for(i=0 ;i < tam ; i++)
    {
        if(vec[i].estado == 1)
        {
            contador++;
        }
    }

    return contador;
}

//SUMADOR IMPORTES:
float sumadorImportes(eProducto vec [] , int tam)
{
    int acumulador = 0;
    int i;

    for(i=0 ;i < tam ; i++)
    {
        if(vec[i].estado == 1)
        {
            acumulador = acumulador + vec[i].importe;
        }
    }
    return acumulador;
}

//SUÈRAN PROMEDIO IMPORTES:

int superanPromedioImportes(eProducto vec[] , int tam)
{
    int cantidadImportes;
    int sumaImportes;
    float promedio;
    int contadorMayoresPromedio = 0;
    int i;


    cantidadImportes = contadorImportes(vec , tam);
    sumaImportes = sumadorImportes(vec , tam);

    promedio = (float)sumaImportes/cantidadImportes;

    printf("\nEl promedio es %.2f\n" , promedio);

    for(i=0 ; i < tam ; i++)
    {
        if(vec[i].importe > promedio && vec[i].estado == 1)
        {
            contadorMayoresPromedio = contadorMayoresPromedio + 1;
        }
    }
    return contadorMayoresPromedio;
}

//NO SUPERAN EL PROMEDIO
int noSuperanPromedioImportes(eProducto vec[] , int tam)
{
    int cantidadImportes;
    int sumaImportes;
    float promedio;
    int contadorMenoresPromedio = 0;
    int i;


    cantidadImportes = contadorImportes(vec , tam);
    sumaImportes = sumadorImportes(vec , tam);

    promedio = (float)sumaImportes/cantidadImportes;

    printf("\nEl promedio es %.2f\n" , promedio);

    for(i=0 ; i < tam ; i++)
    {
        if(vec[i].importe < promedio && vec[i].estado == 1)
        {
            contadorMenoresPromedio = contadorMenoresPromedio + 1;
        }
    }
    return contadorMenoresPromedio;

}

//CONTADOR STOCK
int contadorStock(eProducto vec[] , int tam)
{
    int contador=0;
    int i;

    for(i=0 ;i < tam ; i++)
    {
        if(vec[i].estado == 1)
        {
            contador = contador + vec[i].cantidad;
        }
    }

    return contador;
}

//STOCK MENOR A 10:

int stockMenor(eProducto vec [] , int tam)
{
    int i;
    int cantidadStock = 0;

    for(i=0 ; i < tam ; i++)
    {
        if(vec[i].estado == 1 && vec[i].cantidad <= 10)
        {
            cantidadStock = cantidadStock + 1;
        }
    }

    return cantidadStock;
}

//STOCK MAYOR A 10:
int stockMayor(eProducto vec[] , int tam)
{
    int i;
    int cantidadStock = 0;

    for(i=0 ; i < tam ; i++)
    {
        if(vec[i].estado == 1 && vec[i].cantidad > 10)
        {
            cantidadStock = cantidadStock + 1;
        }
    }
    return cantidadStock;
}

//MENU LISTAR:


int menuListar()
{
    int opcion;

    system("cls");
    printf("1-Listado ordenado por importe y descripcion (descendentemente)\n");
    printf("2-Todos los productos que en cantidad son menor o igual a 10\n");
    printf("3-Todos los productos que en cantidad son mayor a 10\n");
    printf("4-Todos los productos que superan el promedio de importes\n");
    printf("5-Salir.");
    printf("\nIndique opcion: ");
    scanf("%d", &opcion);

    return opcion;
}


void listarImporteyDescripcion(eProducto vec[] , int tam)
{
    int i;
    int j;
    eProducto aux;


    for(i=0 ; i < tam -1 ; i++)
    {
        for(j=i+1 ; i < tam ; i++)
        {
            if(vec[i].importe < vec[j].importe)
            {
                aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }
            else
            {
                if(vec[i].importe == vec[j].importe)
                {
                    if(strcmp(vec[i].descripcion , vec[j].descripcion) > 0)
                    {
                        aux = vec[i];
                        vec[i] = vec[j];
                        vec[j] = aux;

                    }
                }
            }

        }
    }

    printf("IMPORTE:\tDESCRIPCION:\n");
    for(i=0 ; i < tam ; i++)
    {
        if(vec[i].estado == 1)
        {
            printf("%.2f\t\t%s\n" , vec[i].importe , vec[i].descripcion);
        }
    }
}

//LISTAR PRODUCTOS STOCK MENOR A 10

void listarStockMenor(eProducto vec[] , int tam)
{
    int i;

    printf("\nLos codigos de los productos con stock menor a 10 son:\n");

    for(i=0 ; i < tam ; i++)
    {

        if(vec[i].cantidad <= 10 && vec[i].estado == 1)
        {
            printf("%d\n" , vec[i].codigoProducto );
        }
    }
}

//LISTAR PRODUCTOS STOCKS MAYOR A 10:

void listarStockMayor(eProducto vec[] , int tam)
{
    int i;

    printf("\nLos codigos de los productos con stock mayor a 10 son:\n");

    for(i=0 ; i < tam ; i++)
    {
        if(vec[i].cantidad > 10 && vec[i].estado == 1)
        {
            printf("%d\n" , vec[i].codigoProducto);
        }
    }

}

//CODIGO DE PRODUCTOS QUE SUPERAN EL PROMEDIO DE LOS IMPORTES
void productosSuperanPromedio(eProducto vec[] , int tam)
{
    int cantidadImportes;
    int sumaImportes;
    float promedio;
    int i;


    cantidadImportes = contadorImportes(vec , tam);
    sumaImportes = sumadorImportes(vec , tam);

    promedio = (float)sumaImportes/cantidadImportes;

    printf("Codigo de productos que superan el promedio de importes: \n");
    for(i=0 ; i < tam ; i++)
    {
        if(vec[i].importe > promedio && vec[i].estado ==1)
        {
            printf("%d\n" , vec[i].codigoProducto);
        }
    }

}

