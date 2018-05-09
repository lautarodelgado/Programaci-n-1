#include <stdio.h>
#include <stdlib.h>
#include "producto.h"
#define CANT 10
#define CANTIDAD 5

int main()
{
    eProveedor proveedores[CANTIDAD];
    eProducto productos [CANT];

    int opcion;
    int opcionMostrar;
    int opcionListar;

    inicializarProductos(productos , CANT);

    do
    {
        switch(opcion = menu())
        {
            case 1:
                altaProducto(productos , CANT);
                system("pause");
                break;
            case 2:
                modificarProducto(productos , CANT);
                system("pause");
                break;
            case 3:
                bajaProducto(productos , CANT);
                system("pause");
                break;
            case 4:
                do
                {
                    switch(opcionMostrar = menuInformar())
                    {
                        case 1:
                            printf("Cantidad de importes %d\n" , contadorImportes(productos , CANT));
                            printf("Suma de los importes %.2f\n" , sumadorImportes(productos , CANT));
                            printf("La cantidad los productos que superan el promedio son %d\n" , superanPromedioImportes(productos , CANT));
                            system("pause");
                            break;
                        case 2:
                            printf("La cantidad los productos que no superan el promedio son %d\n" , noSuperanPromedioImportes(productos , CANT));
                            system("pause");
                            break;
                        case 3:
                            printf("La cantida de productos con stock menor o igual a 10 es %d\n" , stockMenor(productos , CANT));
                            system("pause");
                            break;
                        case 4:
                            printf("La cantida de productos con stock mayor a 10 es %d\n" , stockMayor(productos , CANT));
                            system("pause");
                            break;
                        case 5:
                            opcionMostrar = 4;
                            break;

                    }
                }
                while(opcionMostrar != 4);
            case 5:
                do
                {
                    switch(opcionListar = menuListar())
                    {
                        case 1:
                            listarImporteyDescripcion(productos , CANT);
                            system("pause");
                            break;
                        case 2:
                            listarStockMenor(productos , CANT);
                            system("pause");
                            break;
                        case 3:
                            listarStockMayor(productos , CANT);
                            system("pause");
                            break;
                        case 4:
                            productosSuperanPromedio(productos , CANT);
                            system("pause");
                            break;
                        case 5:
                            opcionListar = 6;
                            break;
                    }
                }
                while(opcionListar != 6);
                break;
            case 6:
                opcion = 10;
                break;
        }
    }
    while(opcion != 10);

    return 0;
}
