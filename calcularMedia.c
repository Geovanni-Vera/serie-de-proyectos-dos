/*calcularMedia v.4.1*/

#include "librerias.h"

double calcularMedia(int n,double *x) 
{
    double m, s=0.0;
    int i;
    for(i=0;i<n;i++)
    {
        s += x[i];
    }
    m=s/((double)n);
    return m;
}