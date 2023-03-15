/*imprimirVector.c v.3.1*/

#include "librerias.h"

void imprimirVector(int n,double *arr)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("X(%d)=%1f \n",i+1,arr[i]);
    }
}