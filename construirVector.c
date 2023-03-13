/*ConstruirVector.c*/
#include "librerias.h"

double *construirVector(int n)
{
    double *arr;
    arr = (double*)calloc(n,sizeof(double));
    if(arr == NULL)
    {
        printf("Error, no hay memoria disponible !! \n");
        exit(1);
    }
    return arr;
}