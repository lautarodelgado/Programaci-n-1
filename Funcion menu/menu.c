int menu()
{
    int opcion;
    system("cls");
    printf("1 - ALTA.\n");
    printf("2 - BAJA.\n");
    printf("3 - MODIFICACION.\n");
    printf("4 - LISTAR.\n");
    printf("5 - ORDENAR.\n");
    printf("6 - SALIR.\n");

    printf("\nElija lo que quiera hacer: ");
    scanf("%d" , &opcion);

    return opcion;
}
