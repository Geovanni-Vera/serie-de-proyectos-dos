/*Ejemplo-14.c*/
/*Version 4.1*/
//cabecera con librerias
#include "librerias.h"

//prototipos para poder usar funciones
int validarDimension(void);
void leerMatriz(char,int,int,double[][NMC]);
void imprimirMatriz(int,int,double[][NMC]);

//funcion principal main
int main(void)
{
    double  A[NMR][NMC];
    int N,M;
    printf("Escribe el numer de renglones de la matriz ... \n");
    M = validarDimension();
    printf("Escribe el numero de columnas de la matriz ...\n");
    N = validarDimension();
    printf("Introduzca los elementos de la matriz ... \n ");
    leerMatriz('A',M,N,A);
    printf("Los valores almacenados en la matriz son ... \n");
    imprimirMatriz(M,N,A);
    puts("Fin del programa ...");
    return 0;
}