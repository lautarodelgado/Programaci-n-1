#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED


typedef struct {
    int id;
    char descripcion[51];
    int estado;

}eProveedor;

typedef struct {
    int codigoProducto;
    int idProveedor;
    char descripcion[51];
    int cantidad;
    float importe;
    int estado;

}eProducto;

/** \brief se harcodea la estructura de proveedores
 *
 * \param se cargan 5 proveedores, uno por uno, llenando su nombre y codigo
 * \param los datos cargados se copian en cada elemente de la estructura
 */
void hardCode(eProveedor[]);

/** \brief genera un menu con opciones y nos permite elegir la opcion
 *
 * \param se llenan las opciones
 * \param elegimos una de las opciones ingresando un dato int
 * \return la opcion que elegimos
 *
 */
int menu();

/** \brief Inicializa todos los elementos del vector en un numero
 *
 * \param se recorre el vector con un for
 * \param y cada estado del elemento se lo iguala a 0
 *
 */

void inicializarProductos(eProducto[], int);

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int buscarLibre(eProducto[], int);

/** \brief se da de alta un producto, cargando sus datos
 *
 * \param se busca si quedan espacios vacios en el vector
 * \param si hay espacios vacios ingresamos los datos correspondientes
 *
 */
void altaProducto(eProducto[], int);

/** \brief modificar los datos de un producto luego de ingresar su codigo
 *
 * \param ingresamos el codigo del producto
 * \param si el producto fue ingresado anteriormente, podemos cambiar los datos de ese producto
 *
 */
void modificarProducto(eProducto[], int);


/** \brief obtiene el indice del codigo de producto que le pasamos como parametro
 *
 * \param compara si el codigo pasado es igual a algunos de los codigos del array
 * \param
 * \return el indice del array en el que el codigo es igual
 *
 */
int buscarProducto(eProducto[], int , int);

/** \brief genera un menu con opciones y nos permite elegir la opcion
 *
 * \param se llenan las opciones
 * \param elegimos una de las opciones ingresando un dato int
 * \return la opcion que elegimos
 *
 */
int menuModifica();

/** \brief Se da de baja un productor
 *
 * \param ingresamos un codigo de producto
 * \param el estado del codigo ingresado cambia a 0, es decir, se "borra"
 *
 */
void bajaProducto(eProducto[], int);

/** \brief cuenta la cantidad de importes ingresados
 *
 * \param recorre el vector
 * \param si el estado de un elemento es 1, significa que se cargo un importe
 * \return la cantidad de importes que hay en el vector
 *
 */
int contadorImportes (eProducto[] , int);

/** \brief suma los importes que hay en el vector
 *
 * \param recorre el vector
 * \param suma los importes de los elementos que tienen un importe cargado
 * \return la suma de los importes
 *
 */
float sumadorImportes (eProducto[] , int);

/** \brief genera un menu con opciones y nos permite elegir la opcion
 *
 * \param se llenan las opciones
 * \param elegimos una de las opciones ingresando un dato int
 * \return la opcion que elegimos
 *
 */
int menuInformar();

/** \brief Informa los importes que superen el importe promedio
 *
 * \param divide la suma de los importes por la cantidad
 * \param compara cada importe con el importe promedio
 * \return la cantidad de importes que superen el promedio
 *
 */
int superanPromedioImportes(eProducto[] , int);

/** \brief Informa los importes que no superen el importe promedio
 *
 * \param divide la suma de los importes por la cantidad
 * \param compara cada importe con el importe promedio
 * \return la cantidad de importes que no superen el promedio
 *
 */
int noSuperanPromedioImportes(eProducto[] , int);

/** \brief suma la cantidad de stocks de todos los productos
 *
 * \param recorre el vector
 * \param si el estado del elemen es 1, suma la cantidad de stock
 * \return el stock total
 *
 */
int contadorStock(eProducto[] , int);

/** \brief busca cuales productos tengan stock menor o igual a 10
 *
 * \param recorre el array
 * \param si la cantidad de stock del producto es menor o igual a 10 los cuenta
 * \return la cantidad de productos que tienen stock menor o igual a 10
 *
 */
int stockMenor(eProducto[] , int);

/** \brief busca cuales productos tengan stock mayor a 10
 *
 * \param recorre el array
 * \param si la cantidad de stock del producto es mayor a 10 los cuenta
 * \return la cantidad de productos que tienen stock mayor a 10
 *
 */
int stockMayor(eProducto[] , int);

/** \brief genera un menu con opciones y nos permite elegir la opcion
 *
 * \param se llenan las opciones
 * \param elegimos una de las opciones ingresando un dato int
 * \return la opcion que elegimos
 *
 */
int menuListar();

/** \brief Lista los datos de los productos ordenaods descendentemente
 *
 * \param compara el importe de cada elemento del vector
 * \param si el importe es igual, compara los nombre y los ordena descendentemente
 * \return
 *
 */
void listarImporteyDescripcion(eProducto [] , int);

/** \brief imprime el codigo de los productos con stock menor o igual a 10
 * \param recorre el vector comprando la cantidad
 * \param si la cantidad es menor o igual a 10 imprime su codigo de producto
 * \return
 *
 */
void listarStockMenor(eProducto[] , int);

/** \brief imprime el codigo de los productos con stock mayo a 10
 * \param recorre el vector comprando la cantidad
 * \param si la cantidad es mayor imprime su codigo de producto
 * \return
 *
 */
void listarStockMayor(eProducto[] , int);

void productosSuperanPromedio(eProducto[] , int);

void productosNoSuperanPromedio(eProducto[] , int);


#endif // FUNCIONES_H_INCLUDED
