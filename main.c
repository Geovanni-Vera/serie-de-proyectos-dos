/*Ejemplo-11.c*/
//cabecera con librerias
#include "librerias.h"

//prototipos para poder usar funciones
int validarDimension(void);
void leerVector(int,double[]);
void imprimirVector(int,double[]);

//funcion principal main
int main(void)
{
    double X[NMAX];
    int N;
    puts("Escriba el numero de elementos del vector ... \n ");
    N=validarDimension();
    printf("Escriba los valores de estos elementos ... \n ");
    leerVector(N,X);
    printf("Los valores almacenados en el vector son ... \n");
    imprimirVector(N,X);
    puts("Fin del programa ...");
    return 0;
}