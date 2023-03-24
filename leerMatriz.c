/*leerVector v.3.1*/

#include "librerias.h"

void leerMatriz(char ch, int m, int n, double mat[][NMC])
{
    char str[128];
    int i,j;
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%c (%d,%d) = ? ",ch,i+1,j+1);
            fgets(str,128,stdin);
            mat[i][j]=(double)atof(str);
        }
    }
}