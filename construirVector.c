/*ConstruirVector.c v.3.1*/
#include "librerias.h"

//se crea el espacio de memoria para el vector
double *construirVector(int n)
{
    double *arr;
    arr = (double*)calloc(n,sizeof(double));
    
    //Si no hay espacio de memoria termina la ejecucion del program
    if(arr == NULL)
    {
        printf("Error, no hay memoria disponible !! \n");
        exit(1);
    }
    //Regresa el verctor arr
    return arr;
}
