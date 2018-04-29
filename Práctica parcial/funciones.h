#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED


typedef struct
{
    char pantalla[10];
    char nombre[20];
    char direccion[41];
    float precio;
    int estado;
    int id;

} ePantalla;

typedef struct
{
    int idPantalla;
    int cuit;
    int dias;
    char nombreArchivo[41];
    int estado;
}ePublicidad;


int menu();
void inicializarPantalla(ePantalla[], int);
void mostrarPantallas(ePantalla[], int);
void mostrarPantalla(ePantalla);
int buscarLibre(ePantalla[], int);
void altaPantalla(ePantalla vec[], int tam);
int buscarPantalla(ePantalla[], int, int);
void bajaPantalla(ePantalla[], int);
void modificaPantalla(ePantalla[], int);
int menuModifica();

void altaPublicidad(ePublicidad[] , int);

void inicializarPublicidad(ePublicidad[], int);

int indicePublicidad(ePublicidad[] , int);

void mostrarPantallasYPublicidades(ePantalla[] , ePublicidad[] , int , int);





#endif // FUNCIONES_H_INCLUDED

