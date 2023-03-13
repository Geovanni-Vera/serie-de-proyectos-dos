/*Ejemplo-11.c*/
//cabecera con librerias
#include "librerias.h"

//prototipos para poder usar funciones
int validarDimension(void);
double *construirVector(int);
void leerVector(int,double*);
void imprimirVector(int,double*);
void destruirVector(double*);

//funcion principal main
int main(void)
{
    double  *X;
    int N;
    puts("Escriba el numero de elementos del vector ... \n ");
    N=validarDimension();
    printf("Construyendo el arreglo dinamico ... \n");
    X = construirVector(N);
    printf("Escriba los valores de estos elementos ... \n ");
    leerVector(N,X);
    printf("Los valores almacenados en el vector son ... \n");
    imprimirVector(N,X);
    printf("Destruyendo el arreglo dinamico...\n");
    destruirVector(X);
    puts("Fin del programa ...");
    return 0;
}