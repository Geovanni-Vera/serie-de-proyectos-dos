/*Calcular varianza v.4.1*/

//librerias no estandar
#include "librerias.h"
//librerias Estandar
#include <math.h>

double calcularVarianza(int n,double *x, double m)
{
    double v,s=0.0;
    int i;
    for(i=0;i<n;i++)
    {
        s+=pow((x[i]-m),2.0);
    }
    v=s/(((double)n)-1.0);
    return v;
}

