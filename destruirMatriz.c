/* destruirMatriz.c*/

#include "librerias.h"

void destruirMatriz(int m, double **mat)
{
    int i;
    for(i=0;i<m;i++)
    {
        free(mat[i]);
    }
    free(mat);
}