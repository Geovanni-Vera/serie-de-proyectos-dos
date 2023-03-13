/*leeVector*/

#include "librerias.h"

void leerVector(int n, double *arr)
{
    char str[128];
    int i;
    for(i=0;i<n;i++)
    {
        printf("X(%d)=?",i+1);
        fgets(str,128,stdin);
        arr[i]=(double)atof(str);
    }
}