/*imprimirVector.c v.3.1*/

#include "librerias.h"

void imprimirMatriz(int m, int n, double **mat)
{
    int i,j;
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t%.2le",mat[i][j]);
            //tabulador \t  %.2 de dos ceros despues del punto 
            //le notacion exponencial
        }
        printf("\n");
    }
}