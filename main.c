/*Ejemplo-16.c*/
/*Version 6*/
//cabecera con librerias
#include "librerias.h"

//prototipos para poder usar funciones

int validarDimension(void);
double **construirMatriz(int,int);
void leerMatriz(char,int,int,double**);
void imprimirMatriz(int,int,double**);
destruirMatriz(int,double**);

//funcion principal main
int main(void)
{
    double  **A;//Matriz Dinamica
    int N,M;//numero de renglones y columnas
    printf("Escribe el numer de renglones de la matriz ... \n");
    M = validarDimension();
    printf("Escribe el numero de columnas de la matriz ...\n");
    N = validarDimension();
    printf("Construyendo la Matriz A(%dx%d)...\n");
    A =construirMatriz(M,N);
    printf("Introduzca los elementos de la matriz ... \n ");
    leerMatriz('A',M,N,A);
    printf("Los valores almacenados en la matriz son ... \n");
    imprimirMatriz(M,N,A);
    printf("Destruyendo la Matriz A ... \n");
    destruirMatriz(M,A);
    puts("Fin del programa ...");
    return 0;
}