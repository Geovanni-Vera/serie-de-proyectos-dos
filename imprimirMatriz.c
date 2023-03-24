/*imprimirVector.c v.3.1*/

#include "librerias.h"

void imprimirMatriz(int m, int n, double mat[][NMC])
{
    int i,j;
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t%.51e",mat[i][j]);
        }
        printf("\n");
    }
}